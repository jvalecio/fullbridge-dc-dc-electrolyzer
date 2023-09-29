/*
 * pwm.c
 *
 *  Created on: 24 de set de 2023
 *      Author: jv_32
 */

#include <stdbool.h>
#include "../g_defines.h"
#include "F28x_Project.h"
#include "pwm.h"

void pwm_enable(int arg){
    if(arg == 0){
        GpioDataRegs.GPDSET.bit.GPIO124 = 1;
    }else if(arg == 1){
        GpioDataRegs.GPDCLEAR.bit.GPIO124 = 1;
    }
}

void pwm_phase_set(int phase){
    if((phase >= LOWER_PHASE_LIMIT) && (phase <= UPPER_PHASE_LIMIT)){
        EPwm3Regs.TBPHS.bit.TBPHS = phase;
    }
}
void pwm_phase_step(int dph, bool dir){
    // PWM_FREQ = 100Khz -> phase resolution = 0.36 degree
    uint16_t curr_phase = EPwm2Regs.TBPHS.bit.TBPHS;
    if(dir == 0){
        if((curr_phase - dph) > LOWER_PHASE_LIMIT){
            EPwm3Regs.TBPHS.bit.TBPHS -= dph;
        }

    }else if(dir == 1){
        if((curr_phase + dph) < UPPER_PHASE_LIMIT){
            EPwm3Regs.TBPHS.bit.TBPHS += dph;
        }
    }


}

