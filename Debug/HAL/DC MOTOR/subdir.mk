################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/DC\ MOTOR/DCMOTOR_prg.c 

OBJS += \
./HAL/DC\ MOTOR/DCMOTOR_prg.o 

C_DEPS += \
./HAL/DC\ MOTOR/DCMOTOR_prg.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/DC\ MOTOR/DCMOTOR_prg.o: ../HAL/DC\ MOTOR/DCMOTOR_prg.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"HAL/DC MOTOR/DCMOTOR_prg.d" -MT"HAL/DC\ MOTOR/DCMOTOR_prg.d" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


