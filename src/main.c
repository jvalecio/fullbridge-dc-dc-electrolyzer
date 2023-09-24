

/**
 * main application
 */

#include "system_init.h"

uint32_t count = 0;

int main(void)
{
    system_init();

    GpioDataRegs.GPBDAT.bit.GPIO34 = 1;
    GpioDataRegs.GPADAT.bit.GPIO31 = 1;
    //pwm enable
    GpioDataRegs.GPASET.bit.GPIO16 = 1;
    GpioDataRegs.GPASET.bit.GPIO24 = 1;

    while(42){
        GpioDataRegs.GPBTOGGLE.bit.GPIO34 = 1;
        for(count = 0; count<0x00FFFFFF; count++){

        }
       // GpioDataRegs.GPATOGGLE.bit.GPIO16 = 1;

        GpioDataRegs.GPATOGGLE.bit.GPIO31 = 1;

    }
    return 0;
}
