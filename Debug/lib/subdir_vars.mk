################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Add inputs and outputs from these tool invocations to the build variables 
ASM_SRCS += \
../lib/F2837xD_CodeStartBranch.asm \
../lib/F2837xD_DBGIER.asm \
../lib/F2837xD_usDelay.asm 

C_SRCS += \
../lib/F2837xD_Adc.c \
../lib/F2837xD_CpuTimers.c \
../lib/F2837xD_DefaultISR.c \
../lib/F2837xD_Dma.c \
../lib/F2837xD_ECap.c \
../lib/F2837xD_EPwm.c \
../lib/F2837xD_EQep.c \
../lib/F2837xD_Emif.c \
../lib/F2837xD_GlobalVariableDefs.c \
../lib/F2837xD_Gpio.c \
../lib/F2837xD_I2C.c \
../lib/F2837xD_Ipc.c \
../lib/F2837xD_Ipc_Driver.c \
../lib/F2837xD_Ipc_Driver_Lite.c \
../lib/F2837xD_Ipc_Driver_Util.c \
../lib/F2837xD_Mcbsp.c \
../lib/F2837xD_PieCtrl.c \
../lib/F2837xD_PieVect.c \
../lib/F2837xD_Sci.c \
../lib/F2837xD_Spi.c \
../lib/F2837xD_SysCtrl.c \
../lib/F2837xD_TempSensorConv.c \
../lib/F2837xD_Upp.c \
../lib/F2837xD_can.c \
../lib/F2837xD_sci_io.c \
../lib/F2837xD_sdfm_drivers.c \
../lib/F2837xD_struct.c 

C_DEPS += \
./lib/F2837xD_Adc.d \
./lib/F2837xD_CpuTimers.d \
./lib/F2837xD_DefaultISR.d \
./lib/F2837xD_Dma.d \
./lib/F2837xD_ECap.d \
./lib/F2837xD_EPwm.d \
./lib/F2837xD_EQep.d \
./lib/F2837xD_Emif.d \
./lib/F2837xD_GlobalVariableDefs.d \
./lib/F2837xD_Gpio.d \
./lib/F2837xD_I2C.d \
./lib/F2837xD_Ipc.d \
./lib/F2837xD_Ipc_Driver.d \
./lib/F2837xD_Ipc_Driver_Lite.d \
./lib/F2837xD_Ipc_Driver_Util.d \
./lib/F2837xD_Mcbsp.d \
./lib/F2837xD_PieCtrl.d \
./lib/F2837xD_PieVect.d \
./lib/F2837xD_Sci.d \
./lib/F2837xD_Spi.d \
./lib/F2837xD_SysCtrl.d \
./lib/F2837xD_TempSensorConv.d \
./lib/F2837xD_Upp.d \
./lib/F2837xD_can.d \
./lib/F2837xD_sci_io.d \
./lib/F2837xD_sdfm_drivers.d \
./lib/F2837xD_struct.d 

OBJS += \
./lib/F2837xD_Adc.obj \
./lib/F2837xD_CodeStartBranch.obj \
./lib/F2837xD_CpuTimers.obj \
./lib/F2837xD_DBGIER.obj \
./lib/F2837xD_DefaultISR.obj \
./lib/F2837xD_Dma.obj \
./lib/F2837xD_ECap.obj \
./lib/F2837xD_EPwm.obj \
./lib/F2837xD_EQep.obj \
./lib/F2837xD_Emif.obj \
./lib/F2837xD_GlobalVariableDefs.obj \
./lib/F2837xD_Gpio.obj \
./lib/F2837xD_I2C.obj \
./lib/F2837xD_Ipc.obj \
./lib/F2837xD_Ipc_Driver.obj \
./lib/F2837xD_Ipc_Driver_Lite.obj \
./lib/F2837xD_Ipc_Driver_Util.obj \
./lib/F2837xD_Mcbsp.obj \
./lib/F2837xD_PieCtrl.obj \
./lib/F2837xD_PieVect.obj \
./lib/F2837xD_Sci.obj \
./lib/F2837xD_Spi.obj \
./lib/F2837xD_SysCtrl.obj \
./lib/F2837xD_TempSensorConv.obj \
./lib/F2837xD_Upp.obj \
./lib/F2837xD_can.obj \
./lib/F2837xD_sci_io.obj \
./lib/F2837xD_sdfm_drivers.obj \
./lib/F2837xD_struct.obj \
./lib/F2837xD_usDelay.obj 

ASM_DEPS += \
./lib/F2837xD_CodeStartBranch.d \
./lib/F2837xD_DBGIER.d \
./lib/F2837xD_usDelay.d 

OBJS__QUOTED += \
"lib\F2837xD_Adc.obj" \
"lib\F2837xD_CodeStartBranch.obj" \
"lib\F2837xD_CpuTimers.obj" \
"lib\F2837xD_DBGIER.obj" \
"lib\F2837xD_DefaultISR.obj" \
"lib\F2837xD_Dma.obj" \
"lib\F2837xD_ECap.obj" \
"lib\F2837xD_EPwm.obj" \
"lib\F2837xD_EQep.obj" \
"lib\F2837xD_Emif.obj" \
"lib\F2837xD_GlobalVariableDefs.obj" \
"lib\F2837xD_Gpio.obj" \
"lib\F2837xD_I2C.obj" \
"lib\F2837xD_Ipc.obj" \
"lib\F2837xD_Ipc_Driver.obj" \
"lib\F2837xD_Ipc_Driver_Lite.obj" \
"lib\F2837xD_Ipc_Driver_Util.obj" \
"lib\F2837xD_Mcbsp.obj" \
"lib\F2837xD_PieCtrl.obj" \
"lib\F2837xD_PieVect.obj" \
"lib\F2837xD_Sci.obj" \
"lib\F2837xD_Spi.obj" \
"lib\F2837xD_SysCtrl.obj" \
"lib\F2837xD_TempSensorConv.obj" \
"lib\F2837xD_Upp.obj" \
"lib\F2837xD_can.obj" \
"lib\F2837xD_sci_io.obj" \
"lib\F2837xD_sdfm_drivers.obj" \
"lib\F2837xD_struct.obj" \
"lib\F2837xD_usDelay.obj" 

C_DEPS__QUOTED += \
"lib\F2837xD_Adc.d" \
"lib\F2837xD_CpuTimers.d" \
"lib\F2837xD_DefaultISR.d" \
"lib\F2837xD_Dma.d" \
"lib\F2837xD_ECap.d" \
"lib\F2837xD_EPwm.d" \
"lib\F2837xD_EQep.d" \
"lib\F2837xD_Emif.d" \
"lib\F2837xD_GlobalVariableDefs.d" \
"lib\F2837xD_Gpio.d" \
"lib\F2837xD_I2C.d" \
"lib\F2837xD_Ipc.d" \
"lib\F2837xD_Ipc_Driver.d" \
"lib\F2837xD_Ipc_Driver_Lite.d" \
"lib\F2837xD_Ipc_Driver_Util.d" \
"lib\F2837xD_Mcbsp.d" \
"lib\F2837xD_PieCtrl.d" \
"lib\F2837xD_PieVect.d" \
"lib\F2837xD_Sci.d" \
"lib\F2837xD_Spi.d" \
"lib\F2837xD_SysCtrl.d" \
"lib\F2837xD_TempSensorConv.d" \
"lib\F2837xD_Upp.d" \
"lib\F2837xD_can.d" \
"lib\F2837xD_sci_io.d" \
"lib\F2837xD_sdfm_drivers.d" \
"lib\F2837xD_struct.d" 

ASM_DEPS__QUOTED += \
"lib\F2837xD_CodeStartBranch.d" \
"lib\F2837xD_DBGIER.d" \
"lib\F2837xD_usDelay.d" 

C_SRCS__QUOTED += \
"../lib/F2837xD_Adc.c" \
"../lib/F2837xD_CpuTimers.c" \
"../lib/F2837xD_DefaultISR.c" \
"../lib/F2837xD_Dma.c" \
"../lib/F2837xD_ECap.c" \
"../lib/F2837xD_EPwm.c" \
"../lib/F2837xD_EQep.c" \
"../lib/F2837xD_Emif.c" \
"../lib/F2837xD_GlobalVariableDefs.c" \
"../lib/F2837xD_Gpio.c" \
"../lib/F2837xD_I2C.c" \
"../lib/F2837xD_Ipc.c" \
"../lib/F2837xD_Ipc_Driver.c" \
"../lib/F2837xD_Ipc_Driver_Lite.c" \
"../lib/F2837xD_Ipc_Driver_Util.c" \
"../lib/F2837xD_Mcbsp.c" \
"../lib/F2837xD_PieCtrl.c" \
"../lib/F2837xD_PieVect.c" \
"../lib/F2837xD_Sci.c" \
"../lib/F2837xD_Spi.c" \
"../lib/F2837xD_SysCtrl.c" \
"../lib/F2837xD_TempSensorConv.c" \
"../lib/F2837xD_Upp.c" \
"../lib/F2837xD_can.c" \
"../lib/F2837xD_sci_io.c" \
"../lib/F2837xD_sdfm_drivers.c" \
"../lib/F2837xD_struct.c" 

ASM_SRCS__QUOTED += \
"../lib/F2837xD_CodeStartBranch.asm" \
"../lib/F2837xD_DBGIER.asm" \
"../lib/F2837xD_usDelay.asm" 


