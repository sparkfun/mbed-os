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

#ifndef MBED_OBJECTS_SPI_H
#define MBED_OBJECTS_SPI_H

#include "objects_iom.h"

// class TestPins; // todo: remove. this is a bug https://github.com/ARMmbed/mbed-os/issues/13299
// class Se2435Pins; // todo: remove. this is a bug https://github.com/ARMmbed/mbed-os/issues/13299

#if DEVICE_SPI_ASYNCH
struct spi_s {
    ap3_iom_control_t *iom_control;
};
#else
struct spi_u {
	ap3_iom_control_t *iom_control;
};
struct spi_s {
	struct spi_u spi;
};
#endif // DEVICE_SPI_ASYNCH

#endif // MBED_OBJECTS_SPI_H
