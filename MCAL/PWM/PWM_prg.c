/*
 * PWM_prg.c
 *
 *  Created on: Sep 7, 2022
 *      Author: Mohamed Essam
 */


#include "../../LIB/STD_Types.h"
#include "../../LIB/BIT_Utils.h"
#include "PWM_int.h"
#include "PWM_prv.h"
#include "../DIO/DIO_int.h"


u16 PWM_u16RealPrescaler = 0;

void PWM_vidConfigure(u8 Copy_u8timer, u16 Copy_u16periodTime_ms){
	switch(Copy_u8timer){
		case PWM_u8_TIMER0:
			break;
		case PWM_u8_TIMER1:
			/*set the count of tick time in the whole period*/
			PWM_vidGetPrescalerValue(PWM_u8_TIMER1);
			PWM_u16_ICR1_REG = ((Copy_u16periodTime_ms*1000)/(PWM_u16RealPrescaler/PWM_u8_MC_FREQUENCY));
			PWM_u8_TCCR1A_REG = 0x02;
			PWM_u8_TCCR1B_REG = 0x18;
			PWM_u8_TCCR1A_REG |= PWM_u8_COM_A_NON_INVERTING;
			PWM_u8_TCCR1B_REG |= PWM_u8_TIMER1_CLOCK_SELECTION;
			PWM_u16_OCRA1_REG = 1000;
			/*set the PWM mode*/
			//

			/*set COM mode*/

			break;
		case PWM_u8_TIMER2:
			break;
	}
}



void PWM_vidGeneratePWM(u8 Copy_u8timer, u8 Copy_u8periodTime_ms){
	switch(Copy_u8timer){
		case PWM_u8_TIMER0:
			break;
		case PWM_u8_TIMER1:
			DIO_enuSetPinValue(DIO_u8_PORTB, DIO_u8_PIN3, DIO_u8_HIGH);
			/*set ICR1 value*/
			//PWM_vidGetPrescalerValue(PWM_u8_TIMER1);
			PWM_u16_ICR1_REG = 5000;
			/*set prescaler*/
			PWM_u8_TCCR1B_REG |= PWM_u8_TIMER1_CLOCK_SELECTION;
			/*set OCR1 value*/
			//((((u16)(Copy_u8periodTime_ms))*1000)/(PWM_u16RealPrescaler/PWM_u16_MC_FREQUENCY))
			PWM_u16_OCRA1_REG = 500;
			break;
		case PWM_u8_TIMER2:
			break;
	}
}



void PWM_vidGetPrescalerValue(u8 Copy_u8timer){
	if(Copy_u8timer == PWM_u8_TIMER1){
		switch(PWM_u8_TIMER1_CLOCK_SELECTION){
			case PWM_u8_NO_CLOCK_SOURCE:
				PWM_u16RealPrescaler = 0;
				break;
			case PWM_u8_NO_PRESCALING:
				PWM_u16RealPrescaler = 1;
				break;
			case PWM_u8_PRESCALER8:
				PWM_u16RealPrescaler = 8;
				break;
			case PWM_u8_PRESCALER64:
				PWM_u16RealPrescaler = 64;
				break;
			case PWM_u8_PRESCALER256:
				PWM_u16RealPrescaler = 256;
				break;
			case PWM_u8_PRESCALER1024:
				PWM_u16RealPrescaler = 1024;
				break;
		}
	} else{
		asm("NOP");
	}
}
