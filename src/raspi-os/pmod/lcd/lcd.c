
#include <string.h>
#include <stdio.h>
#include "lcd.h"

// Write a simple string to LCD (no cursor control)
int lcdWriteString(const char* str) {
  if (!str) return -1;
  return lcdWriteBytes((const uint8_t*) str, strlen(str));
}

// Convenience: clear display
int lcdClear() {
  const char seq[] = "\x1B[j";
  return lcdWriteBytes((const uint8_t*) seq, sizeof(seq) - 1);
}

// Convenience: set cursor (row: 0–1, col: 0–15)
int lcdSetCursor(int row, int col) {
  if (row < 0 || row > 1 || col < 0 || col > 39) return -1;
  char buf[16];
  int n = snprintf(buf, sizeof(buf), "\x1B[%d;%dH", row, col);
  return lcdWriteBytes((const uint8_t*) buf, n);
}
