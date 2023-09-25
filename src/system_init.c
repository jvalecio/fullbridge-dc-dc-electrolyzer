/*
 * system_config.c
 *
 *  Created on: 23 de set de 2023
 *      Author: jv_32
 */

#include "F28x_Project.h"

#include "system_init.h"
#include "peripheral_config.h"

void system_init(){
    DINT;

    InitPieCtrl();
    IER = 0x0000;
    IFR = 0X0000;
    InitPieVectTable();
    InitCpuTimers();
    InitSysCtrl();

    EINT;
    ERTM;

    peripheral_init();

}
