
#include "blink_interrupt.h"

void Blink_Init(void)
{
    GPIO_setInterruptType(GPIO_INT_XINT1,
                          GPIO_INT_TYPE_BOTH_EDGE);

    GPIO_setInterruptPin(myGPIOInputInterrupt0,
                         GPIO_INT_XINT1);

    GPIO_enableInterrupt(GPIO_INT_XINT1);

    Interrupt_register(INT_XINT1, &gpioInterruptHandler);

    Interrupt_enable(INT_XINT1);
}

__interrupt void gpioInterruptHandler(void)
{
    GPIO_togglePin(myGPIOOutput0);

    Interrupt_clearACKGroup(INTERRUPT_ACK_GROUP1);
}
