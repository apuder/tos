# TOS Board Connection Map (v1.1)

## Raspberry Pi Connecter
| Raspberry Pi Physical Pin   | GPIO Pin              | TOS Connection                                                | Description             |
|-----------------------------|-----------------------|---------------------------------------------------------------|-------------------------|
| 1                           | 3.3v                  | 3.3v line (jumpered with pi pin 1)                            | 3.3v                    |
| 2                           | 5v                    | 5v line (jumpered with pin 4)                                 | 5v                      |
| 3                           | GPIO 2 / SDA1         | Red LED through R1 (330 Ohm)                                  | LED Red                 |
| 4                           | 5v                    | 5v line (jumpered with pin 2)                                 | 5v                      |
| 5                           | GPIO 3 / SCL1         | NC                                                            | NC                      |
| 6                           | GND                   | GND (all grounds jumpered)                                    | Ground                  |
| 7                           | GPIO 4                | NC                                                            | NC                      |
| 8                           | GPIO 14 / TXD         | MAX232 Pin 11                                                 | TX TTL                  |
| 9                           | GND                   | GND (all grounds jumpered)                                    | Ground                  |
| 10                          | GPIO 15 / RXD         | MAX232 Pin 12                                                 | RX TTL                  |
| 11                          | GPIO 17               | Blue LED through R3 (220 Ohm)                                 | LED Blue                |
| 12                          | GPIO 18               | NC                                                            | NC                      |
| 13                          | GPIO 27               | Green LED through R2 (220 Ohm)                                | LED Green               |
| 14                          | GND                   | GND (all grounds jumpered)                                    | Ground                  |
| 15                          | GPIO 22               | SW1 - Pull up to 3.3v through R6 (4.7K Ohm)                   | Button                  |
| 16                          | GPIO 23               | Keyboard pin 5                                                | PS2 Keyboard CLK        |
| 17                          | 3.3v                  | 3.3v line (jumpered with pi pin 17)                           | 3.3v                    |
| 18                          | GPIO 24               | Keyboard Pin 1                                                | PS2 Keyboard Data       |
| 19                          | GPIO 10 / MOSI        | PMOD pin 2                                                    | PMOD 2 MOSI             |
| 20                          | GND                   | GND (all grounds jumpered)                                    | Ground                  |
| 21                          | GPIO 9 / MISO         | PMOD pin 3                                                    | PMOD 3 MISO             |
| 22                          | GPIO 25               | NC                                                            | NC                      |
| 23                          | GPIO 11 / SCLK        | PMOD pin 4                                                    | PMOD 4 SCK              |
| 24                          | GPIO 8 / CE0          | PMOD pin 1                                                    | PMOD 1 CS               |
| 25                          | GND                   | GND (all grounds jumpered)                                    | Ground                  |
| 26                          | GPIO 7 / CE1          | NC                                                            | NC                      |
| 27                          | GPIO 0 / ID_SD (SDA0) | Mouse Pin 1                                                   | PS2 Mouse Data          |
| 28                          | GPIO 1 / ID_SC (SCL0) | Mouse Pin 5                                                   | PS2 Mouse CLK           |
| 29                          | GPIO 5                | NC                                                            | NC                      |
| 30                          | GND                   | GND (all grounds jumpered)                                    | Ground                  |
| 31                          | GPIO 6                | NC                                                            | NC                      |
| 32                          | GPIO 12 / PWM0        | PMOD pin 7                                                    | PMOD7 - Int             |
| 33                          | GPIO 13 / PWM1        | NC                                                            | NC                      |
| 34                          | GND                   | GND (all grounds jumpered)                                    | Ground                  |
| 35                          | GPIO 19               | NC                                                            | NC                      |
| 36                          | GPIO 16               | PDOD pin 8                                                    | PMOD8 - Reset           |
| 37                          | GPIO 26               | NC                                                            | NC                      |
| 38                          | GPIO 20 / PCM_DIN     | PMOD pin 9                                                    | PMOD9                   |
| 39                          | GND                   | GND (all grounds jumpered)                                    | Ground                  |
| 40                          | GPIO 21 / PCM_DOUT    | PMOD pin 10                                                   | PMOD10                  |


## RS-232 Connecter

| RS-232 Connector            | GPIO Pin              | TOS Connection                                                | Description             |
|-----------------------------|-----------------------|---------------------------------------------------------------|-------------------------|
| 1                           |                       | NC                                                            | NC                      |
| 2                           |                       | MAX232 Pin 13                                                 | RX                      |
| 3                           |                       | MAX232 Pin 14                                                 | TX                      |
| 4                           |                       | NC                                                            | NC                      |
| 5                           |                       | GND                                                           | Ground                  |
| 6                           |                       | NC                                                            | NC                      |
| 7                           |                       | Jumpered to RS232 Pin 8                                       | Jumpered to RS232 Pin 8 |
| 8                           |                       | Jumpered to RS232 Pin 7                                       | Jumpered to RS232 Pin 7 |
| 9                           |                       | NC                                                            | NC                      |


## MAX232 chip

| MAX232                      | GPIO Pin              | TOS Connection                                                | Description             |
|-----------------------------|-----------------------|---------------------------------------------------------------|-------------------------|
| 1                           |                       | C1+ (0.1uf) to MAX232 pin 3                                   |                         |
| 2                           |                       | C4+ (0.1uf) to GND                                            |                         |
| 3                           |                       | C1- (0.1uf) to MAX232 pin 1                                   |                         |
| 4                           |                       | C2+ (0.1uf) to MAX232 pin 5                                   |                         |
| 5                           |                       | C2- (0.1uf) to MAX232 pin 4                                   |                         |
| 6                           |                       | C3- (0.1uf) to GND                                            |                         |
| 7                           |                       | NC                                                            | NC                      |
| 8                           |                       | NC                                                            | NC                      |
| 9                           |                       | NC                                                            | NC                      |
| 10                          |                       | GND                                                           | Ground                  |
| 11                          |                       | PI Physical pin 8                                             | TXTTL                   |
| 12                          |                       | Pi Physical Pin 10                                            | RXTTL                   |
| 13                          |                       | RS232 Pin 2                                                   | RX                      |
| 14                          |                       | RS232 Pin 3                                                   | TX                      |
| 15                          |                       | GND                                                           | Ground                  |
| 16                          |                       | 3.3v                                                          | 3.3v                    |


## PMOD Connecter

| PMOD                        | GPIO Pin              | TOS Connection                                                | Description             |
|-----------------------------|-----------------------|---------------------------------------------------------------|-------------------------|
| 1                           | GPIO 8 / CE0          | Pi Physical Pin 24                                            | PMOD 1 - CS             |
| 2                           | GPIO 10 / MOSI        | Pi Physical Pin 19                                            | PMOD 2 - MOSI           |
| 3                           | GPIO 9 / MISO         | Pi Physical Pin 21                                            | PMOD 3  - MISO          |
| 4                           | GPIO 11 / SCLK        | Pi Physical Pin 23                                            | PMOD 4 - SClock         |
| 5                           |                       | GND                                                           | Ground                  |
| 6                           |                       | 3.3v                                                          | 3.3v                    |
| 7                           | GPIO 12 / PWM0        | Pi Physical Pin 32                                            | PMOD 7 - INT            |
| 8                           | GPIO 16               | Pi Physical Pin 36                                            | PMOD 8 - RESET          |
| 9                           | GPIO 20 / PCM_DIN     | Pi Physical Pin 38                                            | PMOD 9                  |
| 10                          | GPIO 21 / PCM_DOUT    | Pi Physical Pin 40                                            | PMOD 10                 |
| 11                          |                       | GND                                                           | Ground                  |
| 12                          |                       | 3.3v                                                          | 3.3v                    |


## PS2 Mouse Connecter

| PS2 Mouse                   | GPIO Pin              | TOS Connection                                                | Description             |
|-----------------------------|-----------------------|---------------------------------------------------------------|-------------------------|
| 1                           | GPIO 0 / ID_SD (SDA0) | Pi Physical Pin 27 (pull up to 3.3v through R8 (2K Ohm)       | PS2 Mouse Data          |
| 2                           |                       | NC                                                            | NC                      |
| 3                           |                       | GND                                                           | Ground                  |
| 4                           |                       | 5v                                                            | 5v                      |
| 5                           | GPIO 1 / ID_SC (SCL0) | Pi Physical Pin 28 (pull up to 3.3v through R7 (2K Ohm)       | PS2 Mouse Clock         |
| 6                           |                       | NC                                                            | NC                      |


## PS2 Keyboard Connecter

| PS2 Keyboard                | GPIO Pin              | TOS Connection                                                | Description             |
|-----------------------------|-----------------------|---------------------------------------------------------------|-------------------------|
| 1                           | GPIO 24               | Pi Physical Pin 18 (pull up to 3.3v through R5 (2K Ohm)       | PS2 Keyboard Data       |
| 2                           |                       | NC                                                            | NC                      |
| 3                           |                       | GND                                                           | Ground                  |
| 4                           |                       | 5v                                                            | 5v                      |
| 5                           | GPIO 23               | Pi Physical Pin 16 (pull up to 3.3v through R4 (2K Ohm)       | PS2 Keyboard Clock      |
| 6                           |                       | NC                                                            | NC                      |


## Breakout Connecter

| Breakout                    | GPIO Pin              | TOS Connection                                                | Description             |
|-----------------------------|-----------------------|---------------------------------------------------------------|-------------------------|
| 1                           |                       | GND                                                           | Ground                  |
| 2                           | GPIO 22               | Pi Physical 15  / SW1 - Pull up to 3.3v through R6 (4.7K Ohm) | Button                  |
| 3                           | GPIO 2 / SDA1         | Pi Physical Pin 3                                             | Red LED                 |
| 4                           | GPIO 24               | Pi Physical Pin 18 / PS2 Keyboard pin 1                       | PS2 Keyboar Data        |
| 5                           | GPIO 23               | Pi Physical Pin 16 / PS2 Keyboard pin 5                       | PS2 Keyboard Clock      |
| 6                           |                       | RS-232 pin 4                                                  | RX                      |
| 7                           |                       | RS-232 pin 3                                                  | TX                      |
