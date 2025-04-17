################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../App/OnBoardTest/OnBoardTest.c 

OBJS += \
./App/OnBoardTest/OnBoardTest.o 

C_DEPS += \
./App/OnBoardTest/OnBoardTest.d 


# Each subdirectory must supply rules for building sources it contributes
App/OnBoardTest/%.o App/OnBoardTest/%.su App/OnBoardTest/%.cyclo: ../App/OnBoardTest/%.c App/OnBoardTest/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32G431xx -c -I../Core/Inc -I"/home/max/STM32CubeIDE/workspace_1.18.0/G431_ErrorScenarios/App/Common" -I"/home/max/STM32CubeIDE/workspace_1.18.0/G431_ErrorScenarios/App/OnBoardTest" -I"/home/max/STM32CubeIDE/workspace_1.18.0/G431_ErrorScenarios/App/OnBoardTestScenarios" -I"/home/max/STM32CubeIDE/workspace_1.18.0/G431_ErrorScenarios/App" -I../Drivers/STM32G4xx_HAL_Driver/Inc -I../Drivers/STM32G4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32G4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-App-2f-OnBoardTest

clean-App-2f-OnBoardTest:
	-$(RM) ./App/OnBoardTest/OnBoardTest.cyclo ./App/OnBoardTest/OnBoardTest.d ./App/OnBoardTest/OnBoardTest.o ./App/OnBoardTest/OnBoardTest.su

.PHONY: clean-App-2f-OnBoardTest

