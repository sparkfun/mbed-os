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

#if DEVICE_SPI

#include "spi_api.h"
#include "iom_api.h"
#include "PeripheralPins.h"
#include "mbed_assert.h"

void spi_init(spi_t *obj, PinName mosi, PinName miso, PinName sclk, PinName ssel){
    MBED_ASSERT(0);
}

void spi_free(spi_t *obj){
    MBED_ASSERT(0);
}

void spi_format(spi_t *obj, int bits, int mode, int slave){
    MBED_ASSERT(0);
}

void spi_frequency(spi_t *obj, int hz) {
    MBED_ASSERT(0);
}

int spi_master_write(spi_t *obj, int value) {
    MBED_ASSERT(0);
    return 0;
}

int spi_master_block_write(spi_t *obj, const char *tx_buffer, int tx_length, char *rx_buffer, int rx_length, char write_fill){
    MBED_ASSERT(0);
    return 0;
}

int spi_slave_receive(spi_t *obj) {
    MBED_ASSERT(0);
    return 0;
}

int spi_slave_read(spi_t *obj) {
    MBED_ASSERT(0);
    return 0;
}

void spi_slave_write(spi_t *obj, int value) {
    MBED_ASSERT(0);
}

int spi_busy(spi_t *obj) {
    MBED_ASSERT(0);
    return 0;
}

const PinMap *spi_master_mosi_pinmap(){
    return PinMap_SPI_MOSI;
}

const PinMap *spi_master_miso_pinmap(){
    return PinMap_SPI_MISO;
}

const PinMap *spi_master_clk_pinmap(){
    return PinMap_SPI_SCLK;
}

const PinMap *spi_master_cs_pinmap(){
    return PinMap_SPI_SSEL;
}

const PinMap *spi_slave_mosi_pinmap(){
    return PinMap_SPI_MOSI;
}

const PinMap *spi_slave_miso_pinmap(){
    return PinMap_SPI_MISO;
}

const PinMap *spi_slave_clk_pinmap(){
    return PinMap_SPI_SCLK;
}

const PinMap *spi_slave_cs_pinmap(){
    return PinMap_SPI_SSEL;
}

#endif // DEVICE_SPI
