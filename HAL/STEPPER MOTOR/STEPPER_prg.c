/*
 * STEPPER_prg.c
 *
 *  Created on: Aug 31, 2022
 *      Author: Mohamed Essam
 */


#include <util/delay.h>
#include "../../LIB/STD_Types.h"
#include "../../LIB/BIT_Utils.h"
#include "../../MCAL/DIO/DIO_int.h"
#include "STEPPER_int.h"



void STEPPER_vidInit(void){
	DIO_vidInit();
}



STEPPER_tenuErrorStatus STEPPER_enuFullStep(u8 Copy_u8Angle){
	STEPPER_tenuErrorStatus Local_enuErrorStatus = STEPPER_OK;

	if(Copy_u8Angle < STEPPER_u8_MIN_ANGLE){
		Local_enuErrorStatus = STEPPER_NOK;
		}


	return Local_enuErrorStatus;
}
