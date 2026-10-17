#include "driverlib.h"
#include "device.h"
#include "blink.h"

static void Short_Blink(void)
{
    GPIO_writePin(DEVICE_GPIO_PIN_LED1, 0);
    DEVICE_DELAY_US(200000);

    GPIO_writePin(DEVICE_GPIO_PIN_LED1, 1);
    DEVICE_DELAY_US(200000);
}

static void Long_Blink(void)
{
    GPIO_writePin(DEVICE_GPIO_PIN_LED1, 0);
    DEVICE_DELAY_US(600000);

    GPIO_writePin(DEVICE_GPIO_PIN_LED1, 1);
    DEVICE_DELAY_US(200000);
}
void ledBlink(void)
{
    int i;

    // S: three short blinks
    for(i = 0; i < 3; i++)
    {
        Short_Blink();
    }
    DEVICE_DELAY_US(400000);

    // O: three long blinks
    for(i = 0; i < 3; i++)
    {
        Long_Blink();
    }
    DEVICE_DELAY_US(400000);

    // S: three short blinks
    for(i = 0; i < 3; i++)
    {
        Short_Blink();
    }
    DEVICE_DELAY_US(2000000);
}

