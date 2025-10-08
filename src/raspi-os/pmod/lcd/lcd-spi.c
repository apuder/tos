
#include <pigpio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "lcd.h"

static int spi_handle = -1;

int lcd_init_spi(unsigned spi_channel) {
  if (gpioInitialise() < 0) {
    fprintf(stderr, "pigpio initialization failed\n");
    return -1;
  }
  spi_handle = spiOpen(spi_channel, 500000, 0); // speed: 500 kHz, mode 0
  if (spi_handle < 0) {
    fprintf(stderr, "spiOpen failed\n");
    gpioTerminate();
    return -1;
  }
  return 0;
}

void lcd_close() {
  if (spi_handle >= 0) spiClose(spi_handle);
  gpioTerminate();
}

// Write arbitrary sequence to LCD (raw bytes)
int lcdWriteBytes(const uint8_t* buf, size_t len) {
  if (spi_handle < 0) return -1;
  return spiWrite(spi_handle, (char*) buf, len);
}

