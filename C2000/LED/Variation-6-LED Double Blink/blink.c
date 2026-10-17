#include "driverlib.h"
#include "device.h"
#include "blink.h"

void ledBlink(void)
{
    // Configure LED GPIO as output
    GPIO_setPadConfig(DEVICE_GPIO_PIN_LED1, GPIO_PIN_TYPE_STD);
    GPIO_setDirectionMode(DEVICE_GPIO_PIN_LED1, GPIO_DIR_MODE_OUT);

    // First flash
    GPIO_writePin(DEVICE_GPIO_PIN_LED1, 0);
    DEVICE_DELAY_US(150000);

    GPIO_writePin(DEVICE_GPIO_PIN_LED1, 1);
    DEVICE_DELAY_US(150000);

    // Second flash
    GPIO_writePin(DEVICE_GPIO_PIN_LED1, 0);
    DEVICE_DELAY_US(150000);

    GPIO_writePin(DEVICE_GPIO_PIN_LED1, 1);
    DEVICE_DELAY_US(1000000);
}

