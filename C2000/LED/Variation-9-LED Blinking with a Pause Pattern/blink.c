#include "driverlib.h"
#include "device.h"
#include "blink.h"

void ledBlink(void)
{

    int i;

    for(i = 0; i < 3; i++)
    {
        GPIO_writePin(DEVICE_GPIO_PIN_LED1, 0);
        DEVICE_DELAY_US(200000);

        GPIO_writePin(DEVICE_GPIO_PIN_LED1, 1);
        DEVICE_DELAY_US(200000);
    }

    // Long pause before repeating
    DEVICE_DELAY_US(3000000);
}

