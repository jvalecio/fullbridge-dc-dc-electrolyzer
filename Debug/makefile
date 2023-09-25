################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := C:/ti/ccs1240/ccs/tools/compiler/ti-cgt-c2000_22.6.0.LTS

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
"./lib/F2837xD_Adc.obj" \
"./lib/F2837xD_CodeStartBranch.obj" \
"./lib/F2837xD_CpuTimers.obj" \
"./lib/F2837xD_DBGIER.obj" \
"./lib/F2837xD_DefaultISR.obj" \
"./lib/F2837xD_Dma.obj" \
"./lib/F2837xD_ECap.obj" \
"./lib/F2837xD_EPwm.obj" \
"./lib/F2837xD_EQep.obj" \
"./lib/F2837xD_Emif.obj" \
"./lib/F2837xD_GlobalVariableDefs.obj" \
"./lib/F2837xD_Gpio.obj" \
"./lib/F2837xD_I2C.obj" \
"./lib/F2837xD_Ipc.obj" \
"./lib/F2837xD_Ipc_Driver.obj" \
"./lib/F2837xD_Ipc_Driver_Lite.obj" \
"./lib/F2837xD_Ipc_Driver_Util.obj" \
"./lib/F2837xD_Mcbsp.obj" \
"./lib/F2837xD_PieCtrl.obj" \
"./lib/F2837xD_PieVect.obj" \
"./lib/F2837xD_Sci.obj" \
"./lib/F2837xD_Spi.obj" \
"./lib/F2837xD_SysCtrl.obj" \
"./lib/F2837xD_TempSensorConv.obj" \
"./lib/F2837xD_Upp.obj" \
"./lib/F2837xD_can.obj" \
"./lib/F2837xD_sci_io.obj" \
"./lib/F2837xD_sdfm_drivers.obj" \
"./lib/F2837xD_struct.obj" \
"./lib/F2837xD_usDelay.obj" \
"./src/hal/blink.obj" \
"./src/hal/pwm.obj" \
"./src/main.obj" \
"./src/peripheral_config.obj" \
"./src/system_init.obj" \
"../2837xD_RAM_lnk_cpu1_USB.cmd" \
"../F2837xD_Headers_nonBIOS_cpu1.cmd" \
$(GEN_CMDS__FLAG) \
-llibc.a \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include lib/subdir_vars.mk
-include src/hal/subdir_vars.mk
-include src/subdir_vars.mk
-include subdir_rules.mk
-include lib/subdir_rules.mk
-include src/hal/subdir_rules.mk
-include src/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
fullbridge-dc-dc-electrolyzer.out \

EXE_OUTPUTS__QUOTED += \
"fullbridge-dc-dc-electrolyzer.out" \


# All Target
all: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@$(MAKE) --no-print-directory -Onone "fullbridge-dc-dc-electrolyzer.out"

# Tool invocations
fullbridge-dc-dc-electrolyzer.out: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@echo 'Building target: "$@"'
	@echo 'Invoking: C2000 Linker'
	"C:/ti/ccs1240/ccs/tools/compiler/ti-cgt-c2000_22.6.0.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla1 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu2 --advice:performance=all --define=CPU1 --define=_LAUNCHXL_F28379D -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=coffabi -z -m"fullbridge-dc-dc-electrolyzer.map" --stack_size=0x200 --warn_sections -i"C:/ti/ccs1240/ccs/tools/compiler/ti-cgt-c2000_22.6.0.LTS/lib" -i"C:/ti/ccs1240/ccs/tools/compiler/ti-cgt-c2000_22.6.0.LTS/include" --reread_libs --diag_wrap=off --display_error_number --xml_link_info="fullbridge-dc-dc-electrolyzer_linkInfo.xml" --rom_model -o "fullbridge-dc-dc-electrolyzer.out" $(ORDERED_OBJS)
	@echo 'Finished building target: "$@"'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXE_OUTPUTS__QUOTED)
	-$(RM) "lib\F2837xD_Adc.obj" "lib\F2837xD_CodeStartBranch.obj" "lib\F2837xD_CpuTimers.obj" "lib\F2837xD_DBGIER.obj" "lib\F2837xD_DefaultISR.obj" "lib\F2837xD_Dma.obj" "lib\F2837xD_ECap.obj" "lib\F2837xD_EPwm.obj" "lib\F2837xD_EQep.obj" "lib\F2837xD_Emif.obj" "lib\F2837xD_GlobalVariableDefs.obj" "lib\F2837xD_Gpio.obj" "lib\F2837xD_I2C.obj" "lib\F2837xD_Ipc.obj" "lib\F2837xD_Ipc_Driver.obj" "lib\F2837xD_Ipc_Driver_Lite.obj" "lib\F2837xD_Ipc_Driver_Util.obj" "lib\F2837xD_Mcbsp.obj" "lib\F2837xD_PieCtrl.obj" "lib\F2837xD_PieVect.obj" "lib\F2837xD_Sci.obj" "lib\F2837xD_Spi.obj" "lib\F2837xD_SysCtrl.obj" "lib\F2837xD_TempSensorConv.obj" "lib\F2837xD_Upp.obj" "lib\F2837xD_can.obj" "lib\F2837xD_sci_io.obj" "lib\F2837xD_sdfm_drivers.obj" "lib\F2837xD_struct.obj" "lib\F2837xD_usDelay.obj" "src\hal\blink.obj" "src\hal\pwm.obj" "src\main.obj" "src\peripheral_config.obj" "src\system_init.obj" 
	-$(RM) "lib\F2837xD_Adc.d" "lib\F2837xD_CpuTimers.d" "lib\F2837xD_DefaultISR.d" "lib\F2837xD_Dma.d" "lib\F2837xD_ECap.d" "lib\F2837xD_EPwm.d" "lib\F2837xD_EQep.d" "lib\F2837xD_Emif.d" "lib\F2837xD_GlobalVariableDefs.d" "lib\F2837xD_Gpio.d" "lib\F2837xD_I2C.d" "lib\F2837xD_Ipc.d" "lib\F2837xD_Ipc_Driver.d" "lib\F2837xD_Ipc_Driver_Lite.d" "lib\F2837xD_Ipc_Driver_Util.d" "lib\F2837xD_Mcbsp.d" "lib\F2837xD_PieCtrl.d" "lib\F2837xD_PieVect.d" "lib\F2837xD_Sci.d" "lib\F2837xD_Spi.d" "lib\F2837xD_SysCtrl.d" "lib\F2837xD_TempSensorConv.d" "lib\F2837xD_Upp.d" "lib\F2837xD_can.d" "lib\F2837xD_sci_io.d" "lib\F2837xD_sdfm_drivers.d" "lib\F2837xD_struct.d" "src\hal\blink.d" "src\hal\pwm.d" "src\main.d" "src\peripheral_config.d" "src\system_init.d" 
	-$(RM) "lib\F2837xD_CodeStartBranch.d" "lib\F2837xD_DBGIER.d" "lib\F2837xD_usDelay.d" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

