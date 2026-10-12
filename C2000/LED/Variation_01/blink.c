#include "driverlib.h"
#include "device.h"
#include "blink.h"

void ledBlink(void)
{
    GPIO_togglePin(DEVICE_GPIO_PIN_LED1); //SWITCHES TO BOTH 0 AND 1 
    DEVICE_DELAY_US(500);

}