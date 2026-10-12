#include "driverlib.h"
#include "device.h"
#include "blink.h"

void ledBlink(void)
{
    // Slow blink
    GPIO_writePin(DEVICE_GPIO_PIN_LED1, 1);
    DEVICE_DELAY_US(1000000);

    GPIO_writePin(DEVICE_GPIO_PIN_LED1, 0);
    DEVICE_DELAY_US(1000000);

    // Fast blink
    GPIO_writePin(DEVICE_GPIO_PIN_LED1, 1);
    DEVICE_DELAY_US(200000);

    GPIO_writePin(DEVICE_GPIO_PIN_LED1, 0);
    DEVICE_DELAY_US(200000);

}