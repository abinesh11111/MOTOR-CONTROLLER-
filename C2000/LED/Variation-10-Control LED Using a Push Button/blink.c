#include "driverlib.h"
#include "device.h"
#include "blink.h"

void ledBlink(void)
{
 // Configure LED output
    GPIO_setDirectionMode(DEVICE_GPIO_PIN_LED1,
                          GPIO_DIR_MODE_OUT);

    // Configure button input with pull-up
    GPIO_setPadConfig(12, GPIO_PIN_TYPE_PULLUP);
    GPIO_setDirectionMode(12, GPIO_DIR_MODE_IN);

    while(1)
    {
        if(GPIO_readPin(12) == 0)
        {
            // Button pressed
            GPIO_writePin(DEVICE_GPIO_PIN_LED1, 0);
        }
        else
        {
            // Button released
            GPIO_writePin(DEVICE_GPIO_PIN_LED1, 1);
        }
    }
}

