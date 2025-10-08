
#pragma once

#include <stdlib.h>
#include <stdint.h>

int lcd_init_spi(unsigned spi_channel);
void lcd_close();
int lcdWriteBytes(const uint8_t* buf, size_t len);
int lcdWriteString(const char* str);
int lcdClear();
int lcdSetCursor(int row, int col);
