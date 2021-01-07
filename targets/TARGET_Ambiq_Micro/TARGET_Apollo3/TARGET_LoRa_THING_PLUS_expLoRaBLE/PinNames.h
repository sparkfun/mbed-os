/* 
 * Copyright (c) 2019-2020 SparkFun Electronics
 * SPDX-License-Identifier: MIT
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
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
#ifndef MBED_PINNAMES_H
#define MBED_PINNAMES_H

#include "am_bsp.h"
#include "objects_gpio.h"

#ifdef __cplusplus
extern "C"
{
#endif

#define NC_VAL (int)0xFFFFFFFF

typedef enum
{
    // Digital naming
    D0 = 19,
    D1 = 18,
    D2 = 41,
    D3 = 31,
    D4 = 10,
    D5 = 30,
    D6 = 37,
    D7 = 24,
    D8 = 46,
    D9 = 33,
    D10 = 4,
    D11 = 28,
    D12 = 25, //SDA2
    D13 = 27, //SCL2
    D14 = 6,
    D15 = 5,
    D16 = 9, //SDA1
    D17 = 8, //SCL1
    D18 = 26,
    D19 = 13,
    D20 = 12,
    D21 = 32,
	D22 = 35,
	D23 = 34,
	D24 = 11,
	
	//LoRa reserved pins (internal)
	D36 = 36, //RADIO NSS
	D38 = 38, //RADIO_MOSI
	D39 = 39, //RADIO_BUSY
	D40 = 40, //RADIO_DIO1
	D42 = 42, //RADIO_CLK
	D43 = 43, //RADIO_MISO
	D44 = 44, //RADIO_nRESET
	D47 = 47, //RADIO_DIO3

    // Analog naming
    A0 = D19,
    A1 = D20,
    A2 = D21,
    A3 = D22,
    A4 = D23,
    A5 = D24,
    A6 = D3,
	A7 = D9,

    //BUTTONs
    SW1 = AM_BSP_GPIO_BUTTON0,
    
    // LEDs
    LED_BLUE = AM_BSP_GPIO_LED0,

    // mbed original LED naming

    LED1 = AM_BSP_GPIO_LED0,
    

    // I2C
    I2C_SCL = AM_BSP_QWIIC_I2C_SCL_PIN,
    I2C_SDA = AM_BSP_QWIIC_I2C_SDA_PIN,

    // Qwiic
    QWIIC_SCL = I2C_SCL,
    QWIIC_SDA = I2C_SDA,

    // SPI
    SPI_CLK = AM_BSP_PRIM_SPI_CLK_PIN,
    SPI_SDO = AM_BSP_PRIM_SPI_SDO_PIN,
    SPI_SDI = AM_BSP_PRIM_SPI_SDI_PIN,

    // UART
    SERIAL_TX = AM_BSP_PRIM_UART_TX_PIN,
    SERIAL_RX = AM_BSP_PRIM_UART_RX_PIN,
    USBTX = SERIAL_TX,
    USBRX = SERIAL_RX,

    SERIAL1_TX = D1,
    SERIAL1_RX = D0,

    // Not connected
    NC = NC_VAL
} PinName;

#define STDIO_UART_TX USBTX
#define STDIO_UART_RX USBRX

#ifdef __cplusplus
}
#endif

#endif
