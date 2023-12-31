/**
 * main application
 */

#include "system_init.h"
#include "g_defines.h"
#include "drivers/blink.h"
#include "drivers/pwm.h"

uint32_t phase_shift = 0;
uint32_t running_flag = 0;

int main(void)
{
    system_init();              //INITIALIZE ALL PERIPHERALS

    blink_setup(BLINK_DELAY);   //SETUP TIMER0 INTERRUPT
    blink_enable(1);            //ENABLE TIMER0 INTERRUPT

    while(42){
        pwm_phase_set(phase_shift);
        pwm_enable(running_flag);
    }

    return 0;
}
