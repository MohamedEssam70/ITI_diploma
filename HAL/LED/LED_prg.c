/*
 * LED_prg.c
 *
 *  Created on: Aug 28, 2022
 *      Author: Mohamed Essam
 */

#include <util/delay.h>
#include "../../LIB/STD_Types.h"
#include "../../LIB/BIT_Utils.h"
#include "../../MCAL/DIO/DIO_int.h"
#include "LED_int.h"
#include "LED_prv.h"


//extern const u8 LED_u8_LED_NUMBER;
extern const u8 LED_u8_PORT_PIN [LED_u8_LED_NUMBER][2];
//extern const u8 LED_u8_SWITCHES [LED_u8_SWITCHES_NUMBER][2];



/*
 * Name: LED_vidInit
 * Description: initialize LEDs status
 * Arguments: void
 * Return:	void
*/
void LED_vidInit(void){
	DIO_vidInit();
}



/*
 * Name: LED_enuTurnOn
 * Description: Turn on or turn off a single LED
 * Arguments:
 * 				first Argument: Copy_u8_LedIndex, 			options (LED_u8_LED1, LED_u8_LED2, LED_u8_LED3, LED_u8_LED4,
 * 																	LED_u8_LED5, LED_u8_LED6, LED_u8_LED7, LED_u8_LED8)
 * 				second Argument: Copy_u8Status, 			options (LED_u8_TURN_OFF, LED_u8_TURN_ON)
 * Return:	Error Status -----> LED_OK , LED_NOK
*/
LED_tenuErrorStatus LED_enuTurnLedStatus(u8 Copy_u8_LedIndex, u8 Copy_u8Status){
	LED_tenuErrorStatus Local_enuErrorStatus = LED_OK;

	/*check arguments*/
	if ((Copy_u8_LedIndex > LED_u8_LED_ARRAY_INDEX) || (Copy_u8Status > LED_u8_TURN_ON)){
		Local_enuErrorStatus = LED_NOK;
	} else {

	/*****IMPLEMENTATION*****/
		DIO_enuSetPinValue(LED_u8_PORT_PIN[Copy_u8_LedIndex][LED_u8_LED_PORT], LED_u8_PORT_PIN[Copy_u8_LedIndex][LED_u8_LED_PIN], Copy_u8Status);

	}
	return Local_enuErrorStatus;
}



/******************///Complete this function///*******************/
/*
 * Name: LED_enuGetSwitchesValue
 * Description: Read the switches that responsible for the LEDs
 * Arguments:
 * 				first Argument: *Add_pu8SwitchesArray, 			options (Pass the address of switches array in "LED_cfg.c")
* 				second Argument: *Add_pu8SwitchesValue, 		options (Address to store the switches value)
 * Return:	Error Status -----> LED_OK , LED_NOK
*/
//LED_tenuErrorStatus LED_enuGetSwitchesValue(u8 *Add_pu8SwitchesArray, u8 *Add_pu8SwitchesValue){
//	LED_tenuErrorStatus Local_enuErrorStatus = LED_OK;
//	u8 Local_u8Iterator;
//	u8 Local_u8PinValue;
//
//		/*check arguments*/
//		if ((Add_pu8SwitchesArray == NULL) || (Add_pu8SwitchesValue == NULL)){
//			Local_enuErrorStatus = LED_NOK;
//		} else {
//
//		/*****IMPLEMENTATION*****/
//			for(Local_u8Iterator = 0; Local_u8Iterator < LED_u8_SWITCHES_NUMBER; Local_u8Iterator++){
//				DIO_enuGetPinValue(LED_u8_SWITCHES[Local_u8Iterator][LED_u8_SWITCH_PORT],
//									LED_u8_SWITCHES[Local_u8Iterator][LED_u8_SWITCH_PIN],
//									&Local_u8PinValue);
//				*Add_pu8SwitchesValue	//This location must refer to all switches value
//			}
//
//		}
//		return Local_enuErrorStatus;
//}



/*
 *
*/
LED_tenuErrorStatus LED_enuMode1(void){
	LED_tenuErrorStatus Local_enuErrorStatus = LED_OK;
	u8 Local_u8Iterator;

	for (Local_u8Iterator = 0; Local_u8Iterator < LED_u8_LED_NUMBER; Local_u8Iterator++){
		LED_enuTurnLedStatus(Local_u8Iterator, LED_u8_TURN_ON);
		_delay_ms(10);
		LED_enuTurnLedStatus(Local_u8Iterator, LED_u8_TURN_OFF);
	}

	return Local_enuErrorStatus;
}




/*
 *
*/
LED_tenuErrorStatus LED_enuMode2(void){
	LED_tenuErrorStatus Local_enuErrorStatus = LED_OK;
		u8 Local_u8Iterator;

		for (Local_u8Iterator = LED_u8_LED_ARRAY_INDEX; Local_u8Iterator >= 0; Local_u8Iterator--){
			LED_enuTurnLedStatus(Local_u8Iterator, LED_u8_TURN_ON);
			_delay_ms(10);
			LED_enuTurnLedStatus(Local_u8Iterator, LED_u8_TURN_OFF);
		}

		return Local_enuErrorStatus;
}



/*
 *
*/
LED_tenuErrorStatus LED_enuMode3(void){
	LED_tenuErrorStatus Local_enuErrorStatus = LED_OK;

		LED_enuTurnLedStatus(LED_u8_LED1, LED_u8_TURN_ON);
		LED_enuTurnLedStatus(LED_u8_LED2, LED_u8_TURN_ON);
		LED_enuTurnLedStatus(LED_u8_LED3, LED_u8_TURN_ON);
		LED_enuTurnLedStatus(LED_u8_LED4, LED_u8_TURN_ON);
		LED_enuTurnLedStatus(LED_u8_LED5, LED_u8_TURN_ON);
		LED_enuTurnLedStatus(LED_u8_LED6, LED_u8_TURN_ON);
		LED_enuTurnLedStatus(LED_u8_LED7, LED_u8_TURN_ON);
		LED_enuTurnLedStatus(LED_u8_LED8, LED_u8_TURN_ON);
		_delay_ms(50);
		LED_enuTurnLedStatus(LED_u8_LED1, LED_u8_TURN_OFF);
		LED_enuTurnLedStatus(LED_u8_LED2, LED_u8_TURN_OFF);
		LED_enuTurnLedStatus(LED_u8_LED3, LED_u8_TURN_OFF);
		LED_enuTurnLedStatus(LED_u8_LED4, LED_u8_TURN_OFF);
		LED_enuTurnLedStatus(LED_u8_LED5, LED_u8_TURN_OFF);
		LED_enuTurnLedStatus(LED_u8_LED6, LED_u8_TURN_OFF);
		LED_enuTurnLedStatus(LED_u8_LED7, LED_u8_TURN_OFF);
		LED_enuTurnLedStatus(LED_u8_LED8, LED_u8_TURN_OFF);
		_delay_ms(50);

		return Local_enuErrorStatus;
}




/*
 *
*/
LED_tenuErrorStatus LED_enuMode4(void){
	LED_tenuErrorStatus Local_enuErrorStatus = LED_OK;
	u8 Local_u8Iterator;
	u8 Local_u8Incriment = LED_u8_LED_ARRAY_INDEX;

	for (Local_u8Iterator = 0; Local_u8Iterator < (LED_u8_LED_NUMBER/2); Local_u8Iterator++){
		LED_enuTurnLedStatus(Local_u8Iterator, LED_u8_TURN_ON);
		LED_enuTurnLedStatus(Local_u8Incriment, LED_u8_TURN_ON);
		_delay_ms(50);
		LED_enuTurnLedStatus(Local_u8Iterator, LED_u8_TURN_OFF);
		LED_enuTurnLedStatus(Local_u8Incriment, LED_u8_TURN_OFF);
		Local_u8Incriment--;
	}

	return Local_enuErrorStatus;
}




/*
 *
*/
LED_tenuErrorStatus LED_enuMode5(void){
	LED_tenuErrorStatus Local_enuErrorStatus = LED_OK;
	u8 Local_u8Iterator;
	u8 Local_u8Decriment = LED_u8_LED_NUMBER/2;

	for (Local_u8Iterator = ((LED_u8_LED_NUMBER/2)-1); Local_u8Iterator >= 0; Local_u8Iterator--){
		LED_enuTurnLedStatus(Local_u8Iterator, LED_u8_TURN_ON);
		LED_enuTurnLedStatus(Local_u8Decriment, LED_u8_TURN_ON);
		_delay_ms(50);
		LED_enuTurnLedStatus(Local_u8Iterator, LED_u8_TURN_OFF);
		LED_enuTurnLedStatus(Local_u8Decriment, LED_u8_TURN_OFF);
		Local_u8Decriment++;
	}

	return Local_enuErrorStatus;
}










