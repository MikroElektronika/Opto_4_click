/*
    __opto4_driver.h

-----------------------------------------------------------------------------

  This file is part of mikroSDK.
  
  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

/**
@file   __opto4_driver.h
@brief    Opto4 Driver
@mainpage Opto4 Click
@{

@image html libstock_fb_view.jpg

@}

@defgroup   OPTO4
@brief      Opto4 Click Driver
@{

| Global Library Prefix | **OPTO4** |
|:---------------------:|:-----------------:|
| Version               | **1.0.0**    |
| Date                  | **okt 2018.**      |
| Developer             | **Katarina Perendic**     |

*/
/* -------------------------------------------------------------------------- */

#include "stdint.h"

#ifndef _OPTO4_H_
#define _OPTO4_H_

/** 
 * @macro T_OPTO4_P
 * @brief Driver Abstract type 
 */
#define T_OPTO4_P    const uint8_t*

/** @defgroup OPTO4_COMPILE Compilation Config */              /** @{ */

//  #define   __OPTO4_DRV_SPI__                            /**<     @macro __OPTO4_DRV_SPI__  @brief SPI driver selector */
//  #define   __OPTO4_DRV_I2C__                            /**<     @macro __OPTO4_DRV_I2C__  @brief I2C driver selector */                                          
// #define   __OPTO4_DRV_UART__                           /**<     @macro __OPTO4_DRV_UART__ @brief UART driver selector */ 

                                                                       /** @} */
/** @defgroup OPTO4_VAR Variables */                           /** @{ */

extern const uint8_t _OPTO4_OUTPUT_ENABLE;
extern const uint8_t _OPTO4_OUTPUT_DISABLE;

                                                                       /** @} */
#ifdef __cplusplus
extern "C"{
#endif

/** @defgroup OPTO4_INIT Driver Initialization */              /** @{ */

#ifdef   __OPTO4_DRV_SPI__
void opto4_spiDriverInit(T_OPTO4_P gpioObj, T_OPTO4_P spiObj);
#endif
#ifdef   __OPTO4_DRV_I2C__
void opto4_i2cDriverInit(T_OPTO4_P gpioObj, T_OPTO4_P i2cObj, uint8_t slave);
#endif
#ifdef   __OPTO4_DRV_UART__
void opto4_uartDriverInit(T_OPTO4_P gpioObj, T_OPTO4_P uartObj);
#endif

// GPIO Only Drivers - remove in other cases
void opto4_gpioDriverInit(T_OPTO4_P gpioObj);
                                                                       /** @} */
/** @defgroup OPTO4_FUNC Driver Functions */                   /** @{ */

/**
 * @brief Function for output enable or disable
 */
void opto4_outputEnable(uint8_t enable);





                                                                       /** @} */
#ifdef __cplusplus
} // extern "C"
#endif
#endif

/**
    @example Click_Opto4_STM.c
    @example Click_Opto4_TIVA.c
    @example Click_Opto4_CEC.c
    @example Click_Opto4_KINETIS.c
    @example Click_Opto4_MSP.c
    @example Click_Opto4_PIC.c
    @example Click_Opto4_PIC32.c
    @example Click_Opto4_DSPIC.c
    @example Click_Opto4_AVR.c
    @example Click_Opto4_FT90x.c
    @example Click_Opto4_STM.mbas
    @example Click_Opto4_TIVA.mbas
    @example Click_Opto4_CEC.mbas
    @example Click_Opto4_KINETIS.mbas
    @example Click_Opto4_MSP.mbas
    @example Click_Opto4_PIC.mbas
    @example Click_Opto4_PIC32.mbas
    @example Click_Opto4_DSPIC.mbas
    @example Click_Opto4_AVR.mbas
    @example Click_Opto4_FT90x.mbas
    @example Click_Opto4_STM.mpas
    @example Click_Opto4_TIVA.mpas
    @example Click_Opto4_CEC.mpas
    @example Click_Opto4_KINETIS.mpas
    @example Click_Opto4_MSP.mpas
    @example Click_Opto4_PIC.mpas
    @example Click_Opto4_PIC32.mpas
    @example Click_Opto4_DSPIC.mpas
    @example Click_Opto4_AVR.mpas
    @example Click_Opto4_FT90x.mpas
*/                                                                     /** @} */
/* -------------------------------------------------------------------------- */
/*
  __opto4_driver.h

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

3. All advertising materials mentioning features or use of this software
   must display the following acknowledgement:
   This product includes software developed by the MikroElektonika.

4. Neither the name of the MikroElektonika nor the
   names of its contributors may be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY MIKROELEKTRONIKA ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL MIKROELEKTRONIKA BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

----------------------------------------------------------------------------- */