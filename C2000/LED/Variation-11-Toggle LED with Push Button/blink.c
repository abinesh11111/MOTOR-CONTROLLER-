#include "driverlib.h"
#include "device.h"
#include "blink.h"

void ledBlink(void)
{
    static uint16_t previousButton = 1;
    uint16_t currentButton;

    GPIO_setDirectionMode(DEVICE_GPIO_PIN_LED1,GPIO_DIR_MODE_OUT);

    GPIO_setPadConfig(12, GPIO_PIN_TYPE_PULLUP);
    GPIO_setDirectionMode(12, GPIO_DIR_MODE_IN);
 
    currentButton = GPIO_readPin(12);

    if ((previousButton == 1) && (currentButton == 0))
    {
        GPIO_togglePin(DEVICE_GPIO_PIN_LED1);

        DEVICE_DELAY_US(20000);
    }

    previousButton = currentButton;
}

