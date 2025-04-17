################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../App/app.c 

OBJS += \
./App/app.o 

C_DEPS += \
./App/app.d 


# Each subdirectory must supply rules for building sources it contributes
App/%.o App/%.su App/%.cyclo: ../App/%.c App/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32G431xx -c -I../Core/Inc -I"/home/max/STM32CubeIDE/workspace_1.18.0/G431_ErrorScenarios/App/Common" -I"/home/max/STM32CubeIDE/workspace_1.18.0/G431_ErrorScenarios/App/OnBoardTest" -I"/home/max/STM32CubeIDE/workspace_1.18.0/G431_ErrorScenarios/App/OnBoardTestScenarios" -I"/home/max/STM32CubeIDE/workspace_1.18.0/G431_ErrorScenarios/App" -I../Drivers/STM32G4xx_HAL_Driver/Inc -I../Drivers/STM32G4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32G4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-App

clean-App:
	-$(RM) ./App/app.cyclo ./App/app.d ./App/app.o ./App/app.su

.PHONY: clean-App

