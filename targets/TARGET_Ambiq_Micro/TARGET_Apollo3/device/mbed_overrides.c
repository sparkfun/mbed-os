#include "am_mcu_apollo.h"

// called before main
void mbed_sdk_init()
{
    am_hal_interrupt_master_enable();
}
