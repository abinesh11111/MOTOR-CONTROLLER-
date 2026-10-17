#include "driverlib.h"
#include "device.h"
#include "blink.h"

void ledBlink(void)
{
    int delay_us;

    // Fast blink
    delay_us = 200000;
    GPIO_writePin(DEVICE_GPIO_PIN_LED1, 1);
    DEVICE_DELAY_US(delay_us);
    GPIO_writePin(DEVICE_GPIO_PIN_LED1, 0);
    DEVICE_DELAY_US(delay_us);

    // Medium blink
    delay_us = 500000;
    GPIO_writePin(DEVICE_GPIO_PIN_LED1, 1);
    DEVICE_DELAY_US(delay_us);
    GPIO_writePin(DEVICE_GPIO_PIN_LED1, 0);
    DEVICE_DELAY_US(delay_us);

    // Slow blink
    delay_us = 1000000;
    GPIO_writePin(DEVICE_GPIO_PIN_LED1, 1);
    DEVICE_DELAY_US(delay_us);
    GPIO_writePin(DEVICE_GPIO_PIN_LED1, 0);
    DEVICE_DELAY_US(delay_us);
}