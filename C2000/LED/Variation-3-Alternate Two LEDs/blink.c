#include "driverlib.h"
#include "device.h"
#include "blink.h"

void ledBlink(void)
{
    GPIO_writePin(DEVICE_GPIO_PIN_LED1, 1);
    GPIO_writePin(DEVICE_GPIO_PIN_LED2, 0);
    DEVICE_DELAY_US(500000);

    GPIO_writePin(DEVICE_GPIO_PIN_LED1, 0);
    GPIO_writePin(DEVICE_GPIO_PIN_LED2, 1);
    DEVICE_DELAY_US(500000);
}
