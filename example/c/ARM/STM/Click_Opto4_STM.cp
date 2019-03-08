#line 1 "D:/Clicks_git/O/Opto_4_click/SW/example/c/ARM/STM/Click_Opto4_STM.c"
#line 1 "d:/clicks_git/o/opto_4_click/sw/example/c/arm/stm/click_opto4_types.h"
#line 1 "c:/users/public/documents/mikroelektronika/mikroc pro for arm/include/stdint.h"





typedef signed char int8_t;
typedef signed int int16_t;
typedef signed long int int32_t;
typedef signed long long int64_t;


typedef unsigned char uint8_t;
typedef unsigned int uint16_t;
typedef unsigned long int uint32_t;
typedef unsigned long long uint64_t;


typedef signed char int_least8_t;
typedef signed int int_least16_t;
typedef signed long int int_least32_t;
typedef signed long long int_least64_t;


typedef unsigned char uint_least8_t;
typedef unsigned int uint_least16_t;
typedef unsigned long int uint_least32_t;
typedef unsigned long long uint_least64_t;



typedef signed long int int_fast8_t;
typedef signed long int int_fast16_t;
typedef signed long int int_fast32_t;
typedef signed long long int_fast64_t;


typedef unsigned long int uint_fast8_t;
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long long uint_fast64_t;


typedef signed long int intptr_t;
typedef unsigned long int uintptr_t;


typedef signed long long intmax_t;
typedef unsigned long long uintmax_t;
#line 1 "d:/clicks_git/o/opto_4_click/sw/example/c/arm/stm/click_opto4_config.h"
#line 1 "d:/clicks_git/o/opto_4_click/sw/example/c/arm/stm/click_opto4_types.h"
#line 1 "d:/clicks_git/o/opto_4_click/sw/library/__opto4_driver.h"
#line 1 "c:/users/public/documents/mikroelektronika/mikroc pro for arm/include/stdint.h"
#line 57 "d:/clicks_git/o/opto_4_click/sw/library/__opto4_driver.h"
extern const uint8_t _OPTO4_OUTPUT_ENABLE;
extern const uint8_t _OPTO4_OUTPUT_DISABLE;
#line 78 "d:/clicks_git/o/opto_4_click/sw/library/__opto4_driver.h"
void opto4_gpioDriverInit( const uint8_t*  gpioObj);



void opto4_outputEnable(uint8_t enable);
#line 29 "D:/Clicks_git/O/Opto_4_click/SW/example/c/ARM/STM/Click_Opto4_STM.c"
void systemInit()
{
 mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_CS_PIN, _GPIO_OUTPUT );
 mikrobus_logInit( _LOG_USBUART_A, 9600 );
 Delay_ms( 100 );
}

void applicationInit()
{
 opto4_gpioDriverInit( ( const uint8_t* )&_MIKROBUS1_GPIO );
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
