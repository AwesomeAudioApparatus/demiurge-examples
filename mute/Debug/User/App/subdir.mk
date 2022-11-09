################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../User/App/app_user.c \
../User/App/user.c 

OBJS += \
./User/App/app_user.o \
./User/App/user.o 

C_DEPS += \
./User/App/app_user.d \
./User/App/user.d 


# Each subdirectory must supply rules for building sources it contributes
User/App/%.o User/App/%.su: ../User/App/%.c User/App/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F446xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../User -I../Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1 -I../Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4 -I../Middlewares/Third_Party/AwesomeAudioApparatus_Audio/Demiurge/inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-User-2f-App

clean-User-2f-App:
	-$(RM) ./User/App/app_user.d ./User/App/app_user.o ./User/App/app_user.su ./User/App/user.d ./User/App/user.o ./User/App/user.su

.PHONY: clean-User-2f-App

