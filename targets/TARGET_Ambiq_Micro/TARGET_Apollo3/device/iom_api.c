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

#include "iom_api.h"
#include "mbed_assert.h"

void iom_init(ap3_iom_control_t* iom){
    MBED_ASSERT(iom);

    if(iom->handle){
        iom_deinit(iom);
    }

    MBED_ASSERT(AM_HAL_STATUS_SUCCESS == am_hal_iom_initialize(iom->inst, &iom->handle));
    MBED_ASSERT(AM_HAL_STATUS_SUCCESS == am_hal_iom_power_ctrl(iom->handle, AM_HAL_SYSCTRL_WAKE, false));
    MBED_ASSERT(AM_HAL_STATUS_SUCCESS == am_hal_iom_configure(iom->handle, &iom->cfg));
    MBED_ASSERT(AM_HAL_STATUS_SUCCESS == am_hal_iom_enable(iom->handle));

    // this merely configures the internal peripheral - the desired pins still need to be configured
}

void iom_deinit(ap3_iom_control_t* iom){
    if(!iom->handle){
        return;
    }

    MBED_ASSERT(AM_HAL_STATUS_SUCCESS == am_hal_iom_disable(iom->handle));
    MBED_ASSERT(AM_HAL_STATUS_SUCCESS == am_hal_iom_power_ctrl(iom->handle, AM_HAL_SYSCTRL_DEEPSLEEP, false));
    MBED_ASSERT(AM_HAL_STATUS_SUCCESS == am_hal_iom_uninitialize(iom->handle));

    iom->handle = NULL;
}
