/*
 * DCMOTOR_prg.c
 *
 *  Created on: Aug 31, 2022
 *      Author: Mohamed Essam
 */



#include <util/delay.h>
#include "../../LIB/STD_Types.h"
#include "../../LIB/BIT_Utils.h"
#include "../../MCAL/DIO/DIO_int.h"
#include "DCMOTOR_int.h"




void DCMOTOR_vidInit(void){
	DIO_vidInit();
}



/*DCMOTOR_tenuErrorStatus DCMOTOR_enuRotate(u8 Copy_u8Direction){
	DCMOTOR_tenuErrorStatus Local_enuErrorStatus = DCMOTOR_OK;

	if(Copy_u8Direction < DCMOTOR_u8_DIRECTION_ACW){
		Local_enuErrorStatus = DCMOTOR_NOK;
	} else{
		switch(DCMOTOR_u8_DIRECTION){
		case DCMOTOR_u8_DIRECTION_CW
		}
	}

	return Local_enuErrorStatus;
}
*/
