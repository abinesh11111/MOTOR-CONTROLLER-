#include "driverlib.h"
#include "device.h"
#include "blink_led.h"

void main(void)
{
    Device_init();

    Device_init_GPIO();

    GPIO_setPadConfig(DEVICE_GPIO_PIN_LED1, GPIO_PIN_TYPE_STD);
    GPIO_setDirectionMode(DEVICE_GPIO_PIN_LED1, GPIO_DIR_MODE_OUT);

    Interrupt_initModule();
    Interrupt_initVectorTable();

    EINT;
    ERTM;

    for(;;)
    {
        ledblink();
    }
}
