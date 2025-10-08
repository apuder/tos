
#ifndef __TOS_IO_H__
#define __TOS_IO_H__

#ifdef TOS_IO_1_0
#define TOS_IO_VERSION "1.0"
#define TOS_IO_VERSION_MAJOR 1
#define TOS_IO_VERSION_MINOR 0

#define TOS_IO_PMOD_IO1 6
#define TOS_IO_PMOD_IO2 16
#define TOS_IO_PMOD_IO3 20
#define TOS_IO_PMOD_IO4 21
#define TOS_IO_PMOD_IO5 12
#define TOS_IO_PMOD_IO6 13
#define TOS_IO_PMOD_IO7 19
#define TOS_IO_PMOD_IO8 26

#define TOS_IO_BUTTON 2

#define TOS_IO_LED_RED 22
#define TOS_IO_LED_GREEN 27
#define TOS_IO_LED_BLUE 17

#define TOS_IO_KEYB_CLK 23
#define TOS_IO_KEYB_DATA 24

#define TOS_IO_MOUSE_CLK 8
#define TOS_IO_MOUSE_DATA 7

#else

#define TOS_IO_VERSION "1.1"
#define TOS_IO_VERSION_MAJOR 1
#define TOS_IO_VERSION_MINOR 1

#define TOS_IO_PMOD_IO1 8
#define TOS_IO_PMOD_IO2 10
#define TOS_IO_PMOD_IO3 9
#define TOS_IO_PMOD_IO4 11
#define TOS_IO_PMOD_IO7 12
#define TOS_IO_PMOD_IO8 16
#define TOS_IO_PMOD_IO9 20
#define TOS_IO_PMOD_IO10 21

#define TOS_IO_BUTTON 22

#define TOS_IO_LED_RED 2
#define TOS_IO_LED_GREEN 17
#define TOS_IO_LED_BLUE 27

#define TOS_IO_KEYB_CLK 23
#define TOS_IO_KEYB_DATA 24

#define TOS_IO_MOUSE_CLK 1
#define TOS_IO_MOUSE_DATA 0


#endif

#endif // __TOS_IO_H__
