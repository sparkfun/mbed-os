/*
Copyright (c) 2019 SparkFun Electronics

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/
#ifndef MBED_PINNAMES_H
#define MBED_PINNAMES_H

#include "device.h"

#ifdef __cplusplus
extern "C"
{
#endif

#define NC_VAL (uint32_t)0xFFFFFFFF

    typedef enum
    {
        // Digital naming
        D13 = 13,
        D16 = 16,
        D23 = 23,
        D24 = 24,
        D25 = 25,
        D26 = 26,
        D27 = 27,
        D28 = 28,
        D29 = 29,
        // D30 = 30, ??
        D31 = 31,
        D32 = 32,
        D33 = 33,
        D34 = 34,
        D35 = 35,
        D36 = 36,
        D37 = 37,
        D38 = 38,
        D39 = 39,
        D40 = 40,
        D41 = 41,
        D42 = 42,
        D43 = 43,
        D44 = 44,
        D45 = 45,

        // Analog naming
        A13 = D13,
        A16 = D16,
        A29 = D29,
        A31 = D31,
        A32 = D32,
        A33 = D33,
        A34 = D34,
        A35 = D35,

        // LEDs
        LED_BLUE = AM_BSP_GPIO_LED_BLUE,

        // mbed original LED naming
        LED1 = AM_BSP_GPIO_LED0,

        // Qwiic
        QWIIC_SCL = 8,
        QWIIC_SDA = 9,

        // Accelerometer
        ACC_SCL = QWIIC_SCL,
        ACC_SDA = QWIIC_SDA,

        // Camera
        CAM_SCL = QWIIC_SCL,
        CAM_SDA = QWIIC_SDA,

        // UART
        SERIAL_TX = 48,
        SERIAL_RX = 49,
        USBTX = SERIAL_TX,
        USBRX = SERIAL_RX,

        // Not connected
        NC = NC_VAL
    } PinName;

#define STDIO_UART_TX USBTX
#define STDIO_UART_RX USBRX

#ifdef __cplusplus
}
#endif

#endif
