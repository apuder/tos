
#include <unistd.h>
#include "lcd.h"

int main() {
  if (lcd_init_spi(0) != 0) return 1;

  lcdClear();
  lcdSetCursor(0, 0);
  lcdWriteString("Hello, World!");
  lcdSetCursor(1, 0);
  lcdWriteString("TOS + PmodCLS");
  sleep(5);
  lcdClear();
  lcd_close();
  return 0;
}

