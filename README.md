![MikroE](http://www.mikroe.com/img/designs/beta/logo_small.png)

---

# Opto4 Click

- **CIC Prefix**  : OPTO4
- **Author**      : Katarina Perendic
- **Verison**     : 1.0.0
- **Date**        : okt 2018.

---

### Software Support

We provide a library for the Opto4 Click on our [LibStock](https://libstock.mikroe.com/projects/view/2625/opto-4-click) 
page, as well as a demo application (example), developed using MikroElektronika 
[compilers](http://shop.mikroe.com/compilers). The demo can run on all the main 
MikroElektronika [development boards](http://shop.mikroe.com/development-boards).

**Library Description**

The library contains a function for enabling or disabling the output voltage.

Key functions :

- ``` void opto4_outputEnable(uint8_t enable) ``` - Function for output enable or disable

**Examples Description**

The application is composed of three sections :

- System Initialization - Sets CS pin as OUTPUT
- Application Initialization - Initialization driver init
- Application Task - (code snippet) - The Output voltage enable and disable every 3 sec.


```.c
void applicationTask()
{
    opto4_outputEnable(_OPTO4_OUTPUT_ENABLE);
    Delay_ms( 3000 );
    opto4_outputEnable(_OPTO4_OUTPUT_DISABLE);
    Delay_ms( 3000 );
}
```

The full application code, and ready to use projects can be found on our 
[LibStock](https://libstock.mikroe.com/projects/view/2625/opto-4-click) page.

Other mikroE Libraries used in the example:

- GPIO

**Additional notes and informations**

Depending on the development board you are using, you may need 
[USB UART click](http://shop.mikroe.com/usb-uart-click), 
[USB UART 2 Click](http://shop.mikroe.com/usb-uart-2-click) or 
[RS232 Click](http://shop.mikroe.com/rs232-click) to connect to your PC, for 
development systems with no UART to USB interface available on the board. The 
terminal available in all Mikroelektronika 
[compilers](http://shop.mikroe.com/compilers), or any other terminal application 
of your choice, can be used to read the message.

---
---
