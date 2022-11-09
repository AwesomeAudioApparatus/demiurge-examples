################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-adc.c \
../Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-button.c \
../Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-dac.c \
../Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-gate.c \
../Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-led.c \
../Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-pot.c \
../Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-testpoints.c \
../Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-timer.c \
../Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4.c 

OBJS += \
./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-adc.o \
./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-button.o \
./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-dac.o \
./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-gate.o \
./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-led.o \
./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-pot.o \
./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-testpoints.o \
./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-timer.o \
./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4.o 

C_DEPS += \
./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-adc.d \
./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-button.d \
./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-dac.d \
./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-gate.d \
./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-led.d \
./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-pot.d \
./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-testpoints.d \
./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-timer.d \
./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/%.o Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/%.su: ../Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/%.c Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F446xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../User -I../Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1 -I../Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4 -I../Middlewares/Third_Party/AwesomeAudioApparatus_Audio/Demiurge/inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-BSP-2f-AwesomeAudioApparatus_board-2f-Demiurge1-2f-demi1-2d-stm32f4

clean-Drivers-2f-BSP-2f-AwesomeAudioApparatus_board-2f-Demiurge1-2f-demi1-2d-stm32f4:
	-$(RM) ./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-adc.d ./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-adc.o ./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-adc.su ./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-button.d ./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-button.o ./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-button.su ./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-dac.d ./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-dac.o ./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-dac.su ./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-gate.d ./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-gate.o ./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-gate.su ./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-led.d ./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-led.o ./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-led.su ./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-pot.d ./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-pot.o ./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-pot.su ./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-testpoints.d ./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-testpoints.o ./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-testpoints.su ./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-timer.d ./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-timer.o ./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4-timer.su ./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4.d ./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4.o ./Drivers/BSP/AwesomeAudioApparatus_board/Demiurge1/demi1-stm32f4/stm32f4.su

.PHONY: clean-Drivers-2f-BSP-2f-AwesomeAudioApparatus_board-2f-Demiurge1-2f-demi1-2d-stm32f4

