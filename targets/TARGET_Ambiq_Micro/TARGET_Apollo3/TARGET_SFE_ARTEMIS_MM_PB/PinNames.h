/*
Copyright (c) 2020 SparkFun Electronics

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

#include "am_bsp.h"
#include "objects_gpio.h"

#ifdef __cplusplus
extern "C"
{
#endif

#define NC_VAL (int)0xFFFFFFFF

typedef enum
{
    // Micro Mod naming
    AUD_MCLK = AM_BSP_GPIO_AUD_MCLK,
    AUD_OUT = AM_BSP_GPIO_AUD_OUT,
    AUD_IN = AM_BSP_GPIO_AUD_IN,
    AUD_LRCLK = AM_BSP_GPIO_AUD_LRCLK,
    AUD_BCLK = AM_BSP_GPIO_AUD_BCLK,

    BATT_VIN = AM_BSP_GPIO_BATT_VIN,

    I2C_INT = AM_BSP_GPIO_I2C_INT, // other I2C lines covered below

    SDIO_CLK = AM_BSP_GPIO_SDIO_CLK,
    SDIO_CMD = AM_BSP_GPIO_SDIO_CMD,
    SDIO_DATA0 = AM_BSP_GPIO_SDIO_DATA0,
    SDIO_DATA1 = AM_BSP_GPIO_SDIO_DATA1,
    SDIO_DATA2 = AM_BSP_GPIO_SDIO_DATA2,
    SDIO_DATA3 = AM_BSP_GPIO_SDIO_DATA3,

    A0 = AM_BSP_GPIO_A0,
    A1 = AM_BSP_GPIO_A1,
    PWM0 = AM_BSP_GPIO_PWM0,
    PWM1 = AM_BSP_GPIO_PWM1,
    D0 = AM_BSP_GPIO_D0,
    D1 = AM_BSP_GPIO_D1,

    TX1 = AM_BSP_GPIO_TX1,
    RX1 = AM_BSP_GPIO_RX1,
    RTS1 = AM_BSP_GPIO_RTS1,
    CTS1 = AM_BSP_GPIO_CTS1,

    G0 = AM_BSP_GPIO_G0,
    G1 = AM_BSP_GPIO_G1,
    G2 = AM_BSP_GPIO_G2,
    G3 = AM_BSP_GPIO_G3,
    G4 = AM_BSP_GPIO_G4,
    G5 = AM_BSP_GPIO_G5,
    G6 = AM_BSP_GPIO_G6,
    G7 = AM_BSP_GPIO_G7,
    // G8 = ??
    G9 = AM_BSP_GPIO_G9,
    G10 = AM_BSP_GPIO_G10,

    // LEDs
    LED_BLUE = AM_BSP_GPIO_LED_BLUE,

    // mbed original LED naming
    LED1 = AM_BSP_GPIO_LED0,

    // I2C
    I2C_SCL = AM_BSP_GPIO_SCL,
    I2C_SDA = AM_BSP_GPIO_SDA,

    // I2C1
    I2C1_SCL = AM_BSP_GPIO_SCL1,
    I2C1_SDA = AM_BSP_GPIO_SDA1,

    // Qwiic
    QWIIC_SCL = I2C_SCL,
    QWIIC_SDA = I2C_SDA,

    // Accelerometer
    ACC_SCL = QWIIC_SCL,
    ACC_SDA = QWIIC_SDA,

    // Camera
    CAM_SCL = QWIIC_SCL,
    CAM_SDA = QWIIC_SDA,

    // SPI
    SPI_CLK = AM_BSP_PRIM_SPI_CLK_PIN,
    SPI_SDO = AM_BSP_PRIM_SPI_SDO_PIN,
    SPI_SDI = AM_BSP_PRIM_SPI_SDI_PIN,
    SPI_CS = AM_BSP_GPIO_SPI_CS,

    SPI1_CLK = AM_BSP_GPIO_SPI_SCK1,
    SPI1_SDI = AM_BSP_GPIO_SPI_SDI1,
    SPI1_SDO = AM_BSP_GPIO_SPI_SDO1,
    SPI1_CS = AM_BSP_GPIO_SPI_CS1,

    // UART
    SERIAL_TX = AM_BSP_PRIM_UART_TX_PIN,
    SERIAL_RX = AM_BSP_PRIM_UART_RX_PIN,
    USBTX = SERIAL_TX,
    USBRX = SERIAL_RX,

    // Not connected
    NC = NC_VAL
} PinName;
#define STDIO_UART_TX USBTX
#define STDIO_UART_RX USBRX

// ADC Defaults
#define ADCPIN A0

#ifdef __cplusplus
}
#endif

#endif
