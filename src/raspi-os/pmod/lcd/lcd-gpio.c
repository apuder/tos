

#include <pigpio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "lcd.h"
#include "tos-io.h"

// Bit-banged SPI pin defines (BCM numbering)
#define SPI_MOSI_PIN TOS_IO_PMOD_IO2
#define SPI_CLK_PIN  TOS_IO_PMOD_IO4
#define SPI_CS_PIN   TOS_IO_PMOD_IO1

// Delay between clock edges in microseconds
#define SPI_DELAY_US 2

int lcd_init_spi(unsigned spi_channel) {
  if (spi_channel != 0) {
    fprintf(stderr, "Only SPI channel 0 is supported\n");
    return -1;
  }

  if (gpioInitialise() < 0) {
    fprintf(stderr, "pigpio initialization failed\n");
    return -1;
  }

  // Configure pins
  gpioSetMode(SPI_MOSI_PIN, PI_OUTPUT);
  gpioSetMode(SPI_CLK_PIN, PI_OUTPUT);
  gpioSetMode(SPI_CS_PIN, PI_OUTPUT);

  // Idle states: CS high (inactive), CLK low, MOSI low
  gpioWrite(SPI_CS_PIN, 1);
  gpioWrite(SPI_CLK_PIN, 0);
  gpioWrite(SPI_MOSI_PIN, 0);

  return 0;
}

void lcd_close() {
  // Drive lines to safe state then terminate pigpio
  gpioWrite(SPI_CS_PIN, 1);
  gpioWrite(SPI_CLK_PIN, 0);
  gpioWrite(SPI_MOSI_PIN, 0);
  gpioTerminate();
}

// Simple MSB-first, mode 0 bit-banged SPI transfer
static int spi_bitbang_transfer(const uint8_t* buf, size_t len) {
  if (!buf || len == 0) return -1;

  // Select device (active low)
  gpioWrite(SPI_CS_PIN, 0);
  gpioDelay(SPI_DELAY_US);

  for (size_t i = 0; i < len; ++i) {
    uint8_t b = buf[i];
    for (int bit = 7; bit >= 0; --bit) {
      int bitval = (b >> bit) & 1;
      gpioWrite(SPI_MOSI_PIN, bitval);
      // Clock rising edge
      gpioWrite(SPI_CLK_PIN, 1);
      gpioDelay(SPI_DELAY_US);
      // Clock falling edge
      gpioWrite(SPI_CLK_PIN, 0);
      gpioDelay(SPI_DELAY_US);
    }
  }

  // Deselect device
  gpioWrite(SPI_CS_PIN, 1);
  gpioDelay(SPI_DELAY_US);

  return 0;
}

// Write arbitrary sequence to LCD (raw bytes)
int lcdWriteBytes(const uint8_t* buf, size_t len) {
  if (gpioInitialise() < 0) return -1; // ensure pigpio is active
  return spi_bitbang_transfer(buf, len);
}
