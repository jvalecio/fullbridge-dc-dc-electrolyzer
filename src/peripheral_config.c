/*
 * peripheral_config.c
 *
 *  Created on: 23 de set de 2023
 *      Author: jv_32
 */
#include "peripheral_config.h"

#define DEADTIME_CL 20

#include "F28x_Project.h"
#include "g_defines.h"

void peripheral_init(){
    GPIO_init();
    ePWM_init();
    PIE_init();
}

void ePWM_init(void){
    int period = 500;
    int duty = 230;

    /* pwma e pwmb

    EALLOW;
    CpuSysRegs.PCLKCR2.bit.EPWM1 = 1;
    CpuSysRegs.PCLKCR0.bit.TBCLKSYNC =0;

    EPwm1Regs.TBPRD = period;
    EPwm1Regs.CMPA.bit.CMPA = duty;

    EPwm1Regs.TBPHS.bit.TBPHS = 0;                  // Phase is 0
    EPwm1Regs.TBCTL.bit.SYNCOSEL = TB_CTR_ZERO;

    EPwm1Regs.TBCTR = 0x0000;
    EPwm1Regs.TBCTL.bit.CTRMODE = TB_COUNT_UPDOWN;
    EPwm1Regs.TBCTL.bit.PHSEN = TB_DISABLE;
    EPwm1Regs.TBCTL.bit.HSPCLKDIV = TB_DIV1;
    EPwm1Regs.TBCTL.bit.CLKDIV = TB_DIV1;

    EPwm1Regs.CMPCTL.bit.SHDWAMODE = CC_SHADOW;
    EPwm1Regs.CMPCTL.bit.LOADAMODE = CC_CTR_ZERO;
    EPwm1Regs.CMPCTL.bit.SHDWBMODE = CC_SHADOW;
    EPwm1Regs.CMPCTL.bit.LOADBMODE = CC_CTR_ZERO;

    EPwm1Regs.AQCTLA.bit.PRD = AQ_NO_ACTION;
    EPwm1Regs.AQCTLA.bit.ZRO = AQ_NO_ACTION;
    EPwm1Regs.AQCTLA.bit.CAU = AQ_CLEAR;
    EPwm1Regs.AQCTLA.bit.CAD = AQ_SET;

    EPwm1Regs.DBCTL.bit.POLSEL = DB_ACTV_HIC;
    EPwm1Regs.DBCTL.bit.OUT_MODE = DB_FULL_ENABLE;
    EPwm1Regs.DBFED.bit.DBFED = DEADTIME_CL;
    EPwm1Regs.DBRED.bit.DBRED = DEADTIME_CL;



    CpuSysRegs.PCLKCR2.bit.EPWM2 = 1;

    EPwm2Regs.TBPRD = period;
    EPwm2Regs.CMPA.bit.CMPA = duty;

    EPwm2Regs.TBPHS.bit.TBPHS =  0;                  // Phase is 0
    EPwm2Regs.TBCTL.bit.SYNCOSEL = TB_SYNC_IN;

    EPwm2Regs.TBCTR = 0x0000;
    EPwm2Regs.TBCTL.bit.CTRMODE = TB_COUNT_UPDOWN;
    EPwm2Regs.TBCTL.bit.PHSEN = TB_ENABLE;

    EPwm2Regs.TBCTL.bit.PHSDIR = 1;

    EPwm2Regs.TBCTL.bit.HSPCLKDIV = TB_DIV1;
    EPwm2Regs.TBCTL.bit.CLKDIV = TB_DIV1;

    EPwm2Regs.CMPCTL.bit.SHDWAMODE = CC_SHADOW;
    EPwm2Regs.CMPCTL.bit.LOADAMODE = CC_CTR_ZERO;
    EPwm2Regs.CMPCTL.bit.SHDWBMODE = CC_SHADOW;
    EPwm2Regs.CMPCTL.bit.LOADBMODE = CC_CTR_ZERO;

    EPwm2Regs.AQCTLA.bit.PRD = AQ_NO_ACTION;
    EPwm2Regs.AQCTLA.bit.ZRO = AQ_NO_ACTION;
    EPwm2Regs.AQCTLA.bit.CAU = AQ_CLEAR;
    EPwm2Regs.AQCTLA.bit.CAD = AQ_SET;

    EPwm2Regs.DBCTL.bit.POLSEL = DB_ACTV_HIC;
    EPwm2Regs.DBCTL.bit.OUT_MODE = DB_FULL_ENABLE;
    EPwm2Regs.DBFED.bit.DBFED = DEADTIME_CL;
    EPwm2Regs.DBRED.bit.DBRED = DEADTIME_CL;

    CpuSysRegs.PCLKCR0.bit.TBCLKSYNC = 1;

    EDIS;
    */
    //pwmb e pwmc
    EALLOW;
        CpuSysRegs.PCLKCR2.bit.EPWM1 = 1;
        CpuSysRegs.PCLKCR0.bit.TBCLKSYNC =0;

        EPwm2Regs.TBPRD = period;
        EPwm2Regs.CMPA.bit.CMPA = duty;

        EPwm2Regs.TBPHS.bit.TBPHS = 0;                  // Phase is 0
        EPwm2Regs.TBCTL.bit.SYNCOSEL = TB_CTR_ZERO;

        EPwm2Regs.TBCTR = 0x0000;
        EPwm2Regs.TBCTL.bit.CTRMODE = TB_COUNT_UPDOWN;
        EPwm2Regs.TBCTL.bit.PHSEN = TB_DISABLE;
        EPwm2Regs.TBCTL.bit.HSPCLKDIV = TB_DIV1;
        EPwm2Regs.TBCTL.bit.CLKDIV = TB_DIV1;

        EPwm2Regs.CMPCTL.bit.SHDWAMODE = CC_SHADOW;
        EPwm2Regs.CMPCTL.bit.LOADAMODE = CC_CTR_ZERO;
        EPwm2Regs.CMPCTL.bit.SHDWBMODE = CC_SHADOW;
        EPwm2Regs.CMPCTL.bit.LOADBMODE = CC_CTR_ZERO;

        EPwm2Regs.AQCTLA.bit.PRD = AQ_NO_ACTION;
        EPwm2Regs.AQCTLA.bit.ZRO = AQ_NO_ACTION;
        EPwm2Regs.AQCTLA.bit.CAU = AQ_CLEAR;
        EPwm2Regs.AQCTLA.bit.CAD = AQ_SET;

        EPwm2Regs.DBCTL.bit.POLSEL = DB_ACTV_HIC;
        EPwm2Regs.DBCTL.bit.OUT_MODE = DB_FULL_ENABLE;
        EPwm2Regs.DBFED.bit.DBFED = DEADTIME_CL;
        EPwm2Regs.DBRED.bit.DBRED = DEADTIME_CL;



        CpuSysRegs.PCLKCR2.bit.EPWM2 = 1;

        EPwm3Regs.TBPRD = period;
        EPwm3Regs.CMPA.bit.CMPA = duty;

        EPwm3Regs.TBPHS.bit.TBPHS =  0;                  // Phase is 0
        EPwm3Regs.TBCTL.bit.SYNCOSEL = TB_SYNC_IN;

        EPwm3Regs.TBCTR = 0x0000;
        EPwm3Regs.TBCTL.bit.CTRMODE = TB_COUNT_UPDOWN;
        EPwm3Regs.TBCTL.bit.PHSEN = TB_ENABLE;

        EPwm3Regs.TBCTL.bit.PHSDIR = 1;

        EPwm3Regs.TBCTL.bit.HSPCLKDIV = TB_DIV1;
        EPwm3Regs.TBCTL.bit.CLKDIV = TB_DIV1;

        EPwm3Regs.CMPCTL.bit.SHDWAMODE = CC_SHADOW;
        EPwm3Regs.CMPCTL.bit.LOADAMODE = CC_CTR_ZERO;
        EPwm3Regs.CMPCTL.bit.SHDWBMODE = CC_SHADOW;
        EPwm3Regs.CMPCTL.bit.LOADBMODE = CC_CTR_ZERO;

        EPwm3Regs.AQCTLA.bit.PRD = AQ_NO_ACTION;
        EPwm3Regs.AQCTLA.bit.ZRO = AQ_NO_ACTION;
        EPwm3Regs.AQCTLA.bit.CAU = AQ_CLEAR;
        EPwm3Regs.AQCTLA.bit.CAD = AQ_SET;

        EPwm3Regs.DBCTL.bit.POLSEL = DB_ACTV_HIC;
        EPwm3Regs.DBCTL.bit.OUT_MODE = DB_FULL_ENABLE;
        EPwm3Regs.DBFED.bit.DBFED = DEADTIME_CL;
        EPwm3Regs.DBRED.bit.DBRED = DEADTIME_CL;

        CpuSysRegs.PCLKCR0.bit.TBCLKSYNC = 1;

        EDIS;
}

void GPIO_init(void){
    EALLOW;
    //LEDS
    GpioCtrlRegs.GPAMUX2.bit.GPIO31 = 0;
    GpioCtrlRegs.GPADIR.bit.GPIO31 = 1;
    GpioDataRegs.GPACLEAR.bit.GPIO31 = 1;

    GpioCtrlRegs.GPBMUX1.bit.GPIO34 = 0;
    GpioCtrlRegs.GPBDIR.bit.GPIO34 = 1;
    GpioDataRegs.GPBSET.bit.GPIO34 = 1;

    //PWM 1A e 1B
    GpioCtrlRegs.GPAGMUX1.bit.GPIO0 = 0;
    GpioCtrlRegs.GPAMUX1.bit.GPIO0 = 1;
    GpioCtrlRegs.GPAPUD.bit.GPIO0 = 1;

    GpioCtrlRegs.GPAGMUX1.bit.GPIO1 = 0;
    GpioCtrlRegs.GPAMUX1.bit.GPIO1 = 1;
    GpioCtrlRegs.GPAPUD.bit.GPIO1 = 1;

    //
    //PWM 2A e 2B
    GpioCtrlRegs.GPAGMUX1.bit.GPIO2 = 0;
    GpioCtrlRegs.GPAMUX1.bit.GPIO2 = 1;
    GpioCtrlRegs.GPAPUD.bit.GPIO2 = 1;

    GpioCtrlRegs.GPAGMUX1.bit.GPIO3 = 0;
    GpioCtrlRegs.GPAMUX1.bit.GPIO3 = 1;
    GpioCtrlRegs.GPAPUD.bit.GPIO3 = 1;

    //PWM 3A e 3B
    GpioCtrlRegs.GPAGMUX1.bit.GPIO4 = 0;
    GpioCtrlRegs.GPAMUX1.bit.GPIO4 = 1;
    GpioCtrlRegs.GPAPUD.bit.GPIO4 = 1;

    GpioCtrlRegs.GPAGMUX1.bit.GPIO5 = 0;
    GpioCtrlRegs.GPAMUX1.bit.GPIO5 = 1;
    GpioCtrlRegs.GPAPUD.bit.GPIO5 = 1;



    //PWM ENABLE
    //GpioCtrlRegs.GPAGMUX2.bit.GPIO16 = 0;
    GpioCtrlRegs.GPDMUX2.bit.GPIO124 = 0;
    GpioCtrlRegs.GPDDIR.bit.GPIO124 = 1;

    EDIS;
}

void PIE_init(){


}



