#include "driverlib.h"
#include "device.h"
#include "blink.h"

void ledBlink(void)
{
    int count;
    int i;

    for(count = 1; count <= 3; count++)
    {
        for(i = 0; i < count; i++)
        {
            GPIO_writePin(DEVICE_GPIO_PIN_LED1, 0);
            DEVICE_DELAY_US(200000);

            GPIO_writePin(DEVICE_GPIO_PIN_LED1, 1);
            DEVICE_DELAY_US(200000);
        }
        DEVICE_DELAY_US(1000000);
    }
}

