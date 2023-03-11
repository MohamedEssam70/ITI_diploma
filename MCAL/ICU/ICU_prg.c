/*
 * ICU_prg.c
 *
 *  Created on: Sep 6, 2022
 *      Author: Mohamed Essam
 */


#include "../../LIB/STD_Types.h"
#include "../../LIB/BIT_Utils.h"
#include <avr/io.h>
#include "ICU_int.h"


static u8 ICU_u8Prescaler;
static u16 ICU_u16OVFCount;

static u16 ICU_u16OVFCounterTon;
static u16 ICU_u16OVFCounterTotal;

static u16 ICU_u16FirstSnapShot;
static u16 ICU_u16SecondSnapShot;
static u16 ICU_u16ThirdSnapShot;

/**/
typedef enum{
	ICU_FirstRising,
	ICU_FirstFalling,
	ICU_SecondRising
}ICU_tenuStateMachine;

ICU_tenuErrorStatus ICU_enuConfigure(ICU_tstrCongig *Add_pstrConfig){
	ICU_tenuErrorStatus Local_enuErrorStatus = ICU_OK;
	/* check arguments */

	/* set noise canceler */
	TCCR1B = Add_pstrConfig -> ICU_u8NoiseCanceller;

	/* set edge select mode ------> rising edge */
	TCCR1B |= 0x40;

	/* set the interrupt */
	TIMSK |= 0x24;

	/* buffer the prescaler */
	ICU_u8Prescaler = Add_pstrConfig -> ICU_u8Prescaler;


	return Local_enuErrorStatus;
}





/*
 * In Hz
*/
ICU_tenuErrorStatus ICU_enuGetFrequency(u32 *Add_pu32Frequency){
	ICU_tenuErrorStatus Local_enuErrorStatus = ICU_OK;

	u32 Local_u32TotalCounts = 0;
	u16 Local_u16RealPrescaler = 0;

	/*check arguments*/

	Local_u32TotalCounts = (ICU_u16ThirdSnapShot - ICU_u16FirstSnapShot) + (ICU_u16OVFCounterTotal * 65535);

	switch(ICU_u8Prescaler){
	case GPT_u8_NO_CLOCK_SOURCE:
		Local_u16RealPrescaler = 0;
		break;
	case GPT_u8_PRESCALER1:
		Local_u16RealPrescaler = 1;
		break;
	case GPT_u8_PRESCALER8:
		Local_u16RealPrescaler = 8;
		break;
	case GPT_u8_PRESCALER64:
		Local_u16RealPrescaler = 64;
		break;
	case GPT_u8_PRESCALER256:
		Local_u16RealPrescaler = 256;
		break;
	case GPT_u8_PRESCALER1024:
		Local_u16RealPrescaler = 1024;
		break;
	}


	*Add_pu32Frequency = (u32)(F_CPU) / ((u32)(Local_u16RealPrescaler * Local_u32TotalCounts));


	return Local_enuErrorStatus;
}



/*
 *
*/
ICU_tenuErrorStatus ICU_enuGetDutyCycle(u8 *Add_pu8DutyCycle){
	ICU_tenuErrorStatus Local_enuErrorStatus = ICU_OK;

	u32 Local_u32TotalCounts = 0;
	u32 Local_u32TonCounts = 0;

	/*check arguments*/

	Local_u32TotalCounts = (ICU_u16ThirdSnapShot - ICU_u16FirstSnapShot) + (ICU_u16OVFCounterTotal * 65535);
	Local_u32TonCounts = (ICU_u16SecondSnapShot - ICU_u16FirstSnapShot) + (ICU_u16OVFCounterTon * 65535);

	*Add_pu8DutyCycle = (u8)(Local_u32TonCounts * 100) / (Local_u32TotalCounts);

	return Local_enuErrorStatus;
}

/* OVF */
void __vector_9(void)  __attribute__((signal, used));
void __vector_9(void){
	ICU_u16OVFCount++;
}

/* capture event */
void __vector_6(void)  __attribute__((signal, used));
void __vector_6(void){
	static ICU_tenuStateMachine Local_enuState = ICU_FirstRising;

	switch(Local_enuState){
		case ICU_FirstRising:
			/* start timer */
			TCCR1B |= ICU_u8Prescaler;
			/* tack the first snapshot */
			ICU_u16FirstSnapShot = ICR1;
			/* change state */
			Local_enuState = ICU_FirstFalling;
			/* set edge select mode ------> falling edge*/
			TCCR1B &= 0xBF;
			break;
		case ICU_FirstFalling:
			/* tack the second snapshot */
			ICU_u16SecondSnapShot = ICR1;

			ICU_u16OVFCounterTotal = ICU_u16OVFCount;
			/* change state */
			Local_enuState = ICU_SecondRising;
			/* set edge select mode ------> rising edge */
			TCCR1B |= 0x40;
			ICU_u16OVFCounterTon = ICU_u16OVFCount;
			break;
		case ICU_SecondRising:
			/* tack the third snapshot */
			ICU_u16ThirdSnapShot = ICR1;
			/* stop & clear timer */
			TCCR1B &= 0xF8;
			TCNT1 = 0;
			/* change state */
			Local_enuState = ICU_FirstFalling;

			ICU_u16OVFCount = 0;

			break;
	}
}
