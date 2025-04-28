#ifndef PINS_H
#define PINS_H

// dvi output uses gpio pins 12,13,14,15,16,17,18,19

#define PIN_BUZZER      28
#define PIN_PS2_DATA    1
#define PIN_PS2_CLOCK   0
#define PIN_DEFAULTS    14
#define PIN_LED         25
#define PIN_HDMI_DETECT 15

#define PIN_UART_ID   uart0
#define PIN_UART_TX   16     // uart0: 0, 12, 16, 28  uart1: 4,  8, 20, 24
#define PIN_UART_RX   17     // uart0: 1, 13, 17, 29  uart1: 5,  9, 21, 25
#define PIN_UART_CTS  18     // uart0: 2, 14, 18      uart1: 6, 10, 22, 26
#define PIN_UART_RTS  19     // uart0: 3, 15, 19      uart1: 7, 11  23, 27

#endif
