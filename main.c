

/**
 * main.c
 */
#define _LAUNCHXL_F28379D
#define CPU1

#include "F28x_Project.h"
uint32_t count = 0;


void Setup_ePWM(void){
    int period = 500;
    int duty = 200;

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
    EPwm1Regs.DBFED.bit.DBFED = 80;
    EPwm1Regs.DBRED.bit.DBRED = 80;



    CpuSysRegs.PCLKCR2.bit.EPWM2 = 1;

    EPwm2Regs.TBPRD = period;
    EPwm2Regs.CMPA.bit.CMPA = duty;

    EPwm2Regs.TBPHS.bit.TBPHS =  0;                  // Phase is 0
    EPwm2Regs.TBCTL.bit.SYNCOSEL = TB_SYNC_IN;

    EPwm2Regs.TBCTR = 0x0000;
    EPwm2Regs.TBCTL.bit.CTRMODE = TB_COUNT_UPDOWN;
    EPwm2Regs.TBCTL.bit.PHSEN = TB_ENABLE;
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
    EPwm2Regs.DBFED.bit.DBFED = 80;
    EPwm2Regs.DBRED.bit.DBRED = 80;

    CpuSysRegs.PCLKCR0.bit.TBCLKSYNC = 1;

    EDIS;

}

void Setup_GPIO(void){
    EALLOW;

    //PWM 1A e 1B
    GpioCtrlRegs.GPAGMUX1.bit.GPIO0 = 0;
    GpioCtrlRegs.GPAMUX1.bit.GPIO0 = 1;
    GpioCtrlRegs.GPAPUD.bit.GPIO0 = 1;

    GpioCtrlRegs.GPAGMUX1.bit.GPIO1 = 0;
    GpioCtrlRegs.GPAMUX1.bit.GPIO1 = 1;
    GpioCtrlRegs.GPAPUD.bit.GPIO1 = 1;

    //
    //PWM 1A e 1B
    GpioCtrlRegs.GPAGMUX1.bit.GPIO2 = 0;
    GpioCtrlRegs.GPAMUX1.bit.GPIO2 = 1;
    GpioCtrlRegs.GPAPUD.bit.GPIO2 = 1;

    GpioCtrlRegs.GPAGMUX1.bit.GPIO3 = 0;
    GpioCtrlRegs.GPAMUX1.bit.GPIO3 = 1;
    GpioCtrlRegs.GPAPUD.bit.GPIO3 = 1;

    //LEDS
    GpioCtrlRegs.GPAMUX2.bit.GPIO31 = 0;
    GpioCtrlRegs.GPADIR.bit.GPIO31 = 1;

    GpioCtrlRegs.GPBMUX1.bit.GPIO34 = 0;
    GpioCtrlRegs.GPBDIR.bit.GPIO34 = 1;

    //PWM ENABLE
    //GpioCtrlRegs.GPAGMUX2.bit.GPIO16 = 0;
    GpioCtrlRegs.GPAMUX2.bit.GPIO16 = 0;
    GpioCtrlRegs.GPADIR.bit.GPIO16 = 1;

    GpioCtrlRegs.GPAMUX2.bit.GPIO24 = 0;
    GpioCtrlRegs.GPADIR.bit.GPIO24 = 1;

    EDIS;
}

int main(void)
{
    DINT;
    InitPieCtrl();
    IER = 0x0000;
    IFR = 0X0000;
    InitPieVectTable();
    InitCpuTimers();
    InitSysCtrl();

    Setup_GPIO();
    Setup_ePWM();
    EINT;
    ERTM;

    GpioDataRegs.GPBDAT.bit.GPIO34 = 1;
    GpioDataRegs.GPADAT.bit.GPIO31 = 1;
    //pwm enable
    GpioDataRegs.GPASET.bit.GPIO16 = 1;
    GpioDataRegs.GPASET.bit.GPIO24 = 1;

    EALLOW;

    while(42){
        GpioDataRegs.GPBTOGGLE.bit.GPIO34 = 1;
        for(count = 0; count<0x00FFFFFF; count++){

        }
       // GpioDataRegs.GPATOGGLE.bit.GPIO16 = 1;

        GpioDataRegs.GPATOGGLE.bit.GPIO31 = 1;

    }
    return 0;
}
