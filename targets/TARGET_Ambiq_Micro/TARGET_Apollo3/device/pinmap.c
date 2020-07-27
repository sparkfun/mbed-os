#include "mbed_assert.h"
#include "pinmap.h"
#include "mbed_error.h"

#include "am_mcu_apollo.h"

void pin_function(PinName pin, int function){
    am_hal_gpio_pincfg_t pincfg = {0};
    am_hal_gpio_pincfg_allow_t pincfg_enable = {0};

    pincfg_enable.funcSel = true;
    pincfg.uFuncSel = (uint32_t)function;

    MBED_ASSERT(AM_HAL_STATUS_SUCCESS == ap3_hal_gpio_pinconfig_partial(pin, pincfg, pincfg_enable));
}

void pin_mode(PinName pin, PinMode mode){
    am_hal_gpio_pincfg_t pincfg = {0};
    am_hal_gpio_pincfg_allow_t pincfg_enable = {0};

    if(mode & PowerSwNone){         pincfg_enable.powerSw = true; pincfg.ePowerSw = AM_HAL_GPIO_PIN_POWERSW_NONE;                   }
    if(mode & PowerSwVDD){          pincfg_enable.powerSw = true; pincfg.ePowerSw = AM_HAL_GPIO_PIN_POWERSW_VDD;                    }
    if(mode & PowerSwVSS){          pincfg_enable.powerSw = true; pincfg.ePowerSw = AM_HAL_GPIO_PIN_POWERSW_VSS;                    }

    if(mode & PullNone){            pincfg_enable.pullup = true; pincfg.ePullup = AM_HAL_GPIO_PIN_PULLUP_NONE;                      }
    if(mode & PullUp){              pincfg_enable.pullup = true; pincfg.ePullup = AM_HAL_GPIO_PIN_PULLUP_WEAK;                      }
    if(mode & PullDown){            pincfg_enable.pullup = true; pincfg.ePullup = AM_HAL_GPIO_PIN_PULLDOWN;                         }
    if(mode & PullUp1K5){           pincfg_enable.pullup = true; pincfg.ePullup = AM_HAL_GPIO_PIN_PULLUP_1_5K;                      }
    if(mode & PullUp6K){            pincfg_enable.pullup = true; pincfg.ePullup = AM_HAL_GPIO_PIN_PULLUP_6K;                        }
    if(mode & PullUp12K){           pincfg_enable.pullup = true; pincfg.ePullup = AM_HAL_GPIO_PIN_PULLUP_12K;                       }
    if(mode & PullUp24K){           pincfg_enable.pullup = true; pincfg.ePullup = AM_HAL_GPIO_PIN_PULLUP_24K;                       }

    if(mode & DriveStrength2mA){    pincfg_enable.driveStrength = true; pincfg.eDriveStrength = AM_HAL_GPIO_PIN_DRIVESTRENGTH_2MA;  }
    if(mode & DriveStrength4mA){    pincfg_enable.driveStrength = true; pincfg.eDriveStrength = AM_HAL_GPIO_PIN_DRIVESTRENGTH_4MA;  }
    if(mode & DriveStrength8mA){    pincfg_enable.driveStrength = true; pincfg.eDriveStrength = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA;  }
    if(mode & DriveStrength12mA){   pincfg_enable.driveStrength = true; pincfg.eDriveStrength = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA; }

    if(mode & OutDisable){          pincfg_enable.gpOutcfg = true; pincfg.eGPOutcfg = AM_HAL_GPIO_PIN_OUTCFG_DISABLE;               }
    if(mode & OutPushPull){         pincfg_enable.gpOutcfg = true; pincfg.eGPOutcfg = AM_HAL_GPIO_PIN_OUTCFG_PUSHPULL;              }
    if(mode & OutOpenDrain){        pincfg_enable.gpOutcfg = true; pincfg.eGPOutcfg = AM_HAL_GPIO_PIN_OUTCFG_OPENDRAIN;             }
    if(mode & OutTristate){         pincfg_enable.gpOutcfg = true; pincfg.eGPOutcfg = AM_HAL_GPIO_PIN_OUTCFG_TRISTATE;              }

    if(mode & InAuto){              pincfg_enable.gpInput = true; pincfg.eGPInput = AM_HAL_GPIO_PIN_INPUT_AUTO;                     }
    if(mode & InNone){              pincfg_enable.gpInput = true; pincfg.eGPInput = AM_HAL_GPIO_PIN_INPUT_NONE;                     }
    if(mode & InEnable){            pincfg_enable.gpInput = true; pincfg.eGPInput = AM_HAL_GPIO_PIN_INPUT_ENABLE;                   }

    if(mode & ReadPin){             pincfg_enable.gprdZero = true; pincfg.eGPRdZero = AM_HAL_GPIO_PIN_RDZERO_READPIN;               }
    if(mode & ReadZero){            pincfg_enable.gprdZero = true; pincfg.eGPRdZero = AM_HAL_GPIO_PIN_RDZERO_ZERO;                  }

    MBED_ASSERT(AM_HAL_STATUS_SUCCESS == ap3_hal_gpio_pinconfig_partial(pin, pincfg, pincfg_enable));
}
