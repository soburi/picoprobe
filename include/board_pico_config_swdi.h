/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2023 Raspberry Pi (Trading) Ltd.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 */

#ifndef BOARD_PICO_SWDI_H_
#define BOARD_PICO_SWDI_H_

#define PROBE_IO_SWDI
#define PROBE_CDC_UART
// No reset pin 

// PIO config
#define PROBE_SM 0
#define PROBE_PIN_OFFSET 2
#define PROBE_PIN_SWCLK (PROBE_PIN_OFFSET + 0) // 2
// For level-shifted input.
#define PROBE_PIN_SWDI (PROBE_PIN_OFFSET - 1) // 1
#define PROBE_PIN_SWDIO (PROBE_PIN_OFFSET + 1) // 3
// Target reset config
#define PROBE_PIN_RESET 0

// UART config
#define PICOPROBE_UART_TX 4
#define PICOPROBE_UART_RX 5
#define PICOPROBE_UART_INTERFACE uart1
#define PICOPROBE_UART_BAUDRATE 115200

#define PICOPROBE_USB_CONNECTED_LED 25
#define PICOPROBE_DAP_CONNECTED_LED 10
#define PICOPROBE_DAP_RUNNING_LED 11
#define PICOPROBE_UART_RX_LED 12
#define PICOPROBE_UART_TX_LED 13

#endif
