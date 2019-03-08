/*
Example for Opto4 Click

    Date          : okt 2018.
    Author        : Katarina Perendic

Test configuration STM32 :
    
    MCU              : STM32F107VCT6
    Dev. Board       : EasyMx PRO v7 for STM32
    ARM Compiler ver : v6.0.0.0

---

Description :

The application is composed of three sections :

- System Initialization - Sets CS pin as OUTPUT
- Application Initialization - Initialization driver init
- Application Task - (code snippet) - The Output voltage enable and disable every 3 sec.
*/

#include "Click_Opto4_types.h"
#include "Click_Opto4_config.h"

void systemInit()
{
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_CS_PIN, _GPIO_OUTPUT );
    Delay_ms( 100 );
}

void applicationInit()
{
    opto4_gpioDriverInit( (T_OPTO4_P)&_MIKROBUS1_GPIO );
}

void applicationTask()
{
    opto4_outputEnable(_OPTO4_OUTPUT_ENABLE);
    Delay_ms( 3000 );
    opto4_outputEnable(_OPTO4_OUTPUT_DISABLE);
    Delay_ms( 3000 );
}

void main()
{
    systemInit();
    applicationInit();

    while (1)
    {
        applicationTask();
    }
}