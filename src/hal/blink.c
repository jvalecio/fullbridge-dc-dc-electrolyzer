/*
 * blink.c
 *
 *  Created on: 23 de set de 2023
 *      Author: jv_32
 */

#include "blink.h"

#include "../g_defines.h"
#include "F28x_Project.h"


__interrupt void isr_cpu_timer0(void){
    GpioDataRegs.GPATOGGLE.bit.GPIO31 = 1;
    GpioDataRegs.GPBTOGGLE.bit.GPIO34 = 1;
    PieCtrlRegs.PIEACK.all = PIEACK_GROUP1;
}

void blink_setup(uint32_t blink_period){
    EALLOW;
    PieVectTable.TIMER0_INT = &isr_cpu_timer0;

    //PieCtrlRegs.PIEIER1.bit.INTx7 = 1;
    //IER |= M_INT1;

    EDIS;

    ConfigCpuTimer(&CpuTimer0, SYS_CLK_FREQ, blink_period);
    CpuTimer0Regs.TCR.all = 0x4001;
}

void blink_enable(int arg){
    if(arg == 1){
        PieCtrlRegs.PIEIER1.bit.INTx7 = 1;
        IER |= M_INT1;
    }else if(arg == 0){
        PieCtrlRegs.PIEIER1.bit.INTx7 = 1;
        IER &= !M_INT1;
    }
}

