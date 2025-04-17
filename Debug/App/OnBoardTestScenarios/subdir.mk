################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../App/OnBoardTestScenarios/obt_NullPtrArg.c \
../App/OnBoardTestScenarios/obt_divide_by_zero.c \
../App/OnBoardTestScenarios/obt_illegal_address_execution.c \
../App/OnBoardTestScenarios/obt_illegal_instruction_execution.c \
../App/OnBoardTestScenarios/obt_write_to_NULL.c 

OBJS += \
./App/OnBoardTestScenarios/obt_NullPtrArg.o \
./App/OnBoardTestScenarios/obt_divide_by_zero.o \
./App/OnBoardTestScenarios/obt_illegal_address_execution.o \
./App/OnBoardTestScenarios/obt_illegal_instruction_execution.o \
./App/OnBoardTestScenarios/obt_write_to_NULL.o 

C_DEPS += \
./App/OnBoardTestScenarios/obt_NullPtrArg.d \
./App/OnBoardTestScenarios/obt_divide_by_zero.d \
./App/OnBoardTestScenarios/obt_illegal_address_execution.d \
./App/OnBoardTestScenarios/obt_illegal_instruction_execution.d \
./App/OnBoardTestScenarios/obt_write_to_NULL.d 


# Each subdirectory must supply rules for building sources it contributes
App/OnBoardTestScenarios/%.o App/OnBoardTestScenarios/%.su App/OnBoardTestScenarios/%.cyclo: ../App/OnBoardTestScenarios/%.c App/OnBoardTestScenarios/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32G431xx -c -I../Core/Inc -I"/home/max/STM32CubeIDE/workspace_1.18.0/G431_ErrorScenarios/App/Common" -I"/home/max/STM32CubeIDE/workspace_1.18.0/G431_ErrorScenarios/App/OnBoardTest" -I"/home/max/STM32CubeIDE/workspace_1.18.0/G431_ErrorScenarios/App/OnBoardTestScenarios" -I"/home/max/STM32CubeIDE/workspace_1.18.0/G431_ErrorScenarios/App" -I../Drivers/STM32G4xx_HAL_Driver/Inc -I../Drivers/STM32G4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32G4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-App-2f-OnBoardTestScenarios

clean-App-2f-OnBoardTestScenarios:
	-$(RM) ./App/OnBoardTestScenarios/obt_NullPtrArg.cyclo ./App/OnBoardTestScenarios/obt_NullPtrArg.d ./App/OnBoardTestScenarios/obt_NullPtrArg.o ./App/OnBoardTestScenarios/obt_NullPtrArg.su ./App/OnBoardTestScenarios/obt_divide_by_zero.cyclo ./App/OnBoardTestScenarios/obt_divide_by_zero.d ./App/OnBoardTestScenarios/obt_divide_by_zero.o ./App/OnBoardTestScenarios/obt_divide_by_zero.su ./App/OnBoardTestScenarios/obt_illegal_address_execution.cyclo ./App/OnBoardTestScenarios/obt_illegal_address_execution.d ./App/OnBoardTestScenarios/obt_illegal_address_execution.o ./App/OnBoardTestScenarios/obt_illegal_address_execution.su ./App/OnBoardTestScenarios/obt_illegal_instruction_execution.cyclo ./App/OnBoardTestScenarios/obt_illegal_instruction_execution.d ./App/OnBoardTestScenarios/obt_illegal_instruction_execution.o ./App/OnBoardTestScenarios/obt_illegal_instruction_execution.su ./App/OnBoardTestScenarios/obt_write_to_NULL.cyclo ./App/OnBoardTestScenarios/obt_write_to_NULL.d ./App/OnBoardTestScenarios/obt_write_to_NULL.o ./App/OnBoardTestScenarios/obt_write_to_NULL.su

.PHONY: clean-App-2f-OnBoardTestScenarios

