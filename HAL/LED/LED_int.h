/*
 * LED_int.h
 *
 *  Created on: Aug 29, 2022
 *      Author: Mohamed Essam
 */

#ifndef HAL_LED_LED_INT_H_
#define HAL_LED_LED_INT_H_


#include "LED_prv.h"


typedef enum {
	LED_OK,
	LED_NOK
}LED_tenuErrorStatus;





/******************MACROS***********************/

/* macros for LED numbering */
#define LED_u8_LED_NUMBER		8
#define LED_u8_LED1				0
#define LED_u8_LED2				1
#define LED_u8_LED3				2
#define LED_u8_LED4				3
#define LED_u8_LED5				4
#define LED_u8_LED6				5
#define LED_u8_LED7				6
#define LED_u8_LED8				7

/* macros for LED PORT */
#define LED_u8_LED1_PORT		LED_u8_PORT_PIN [LED_u8_LED1][0]
#define LED_u8_LED2_PORT		LED_u8_PORT_PIN [LED_u8_LED2][0]
#define LED_u8_LED3_PORT		LED_u8_PORT_PIN [LED_u8_LED3][0]
#define LED_u8_LED4_PORT		LED_u8_PORT_PIN [LED_u8_LED4][0]
#define LED_u8_LED5_PORT		LED_u8_PORT_PIN [LED_u8_LED5][0]
#define LED_u8_LED6_PORT		LED_u8_PORT_PIN [LED_u8_LED6][0]
#define LED_u8_LED7_PORT		LED_u8_PORT_PIN [LED_u8_LED7][0]
#define LED_u8_LED8_PORT		LED_u8_PORT_PIN [LED_u8_LED8][0]

/* macros for LED PINS */
#define LED_u8_LED1_PIN		LED_u8_PORT_PIN [LED_u8_LED1][1]
#define LED_u8_LED2_PIN		LED_u8_PORT_PIN [LED_u8_LED2][1]
#define LED_u8_LED3_PIN		LED_u8_PORT_PIN [LED_u8_LED3][1]
#define LED_u8_LED4_PIN		LED_u8_PORT_PIN [LED_u8_LED4][1]
#define LED_u8_LED5_PIN		LED_u8_PORT_PIN [LED_u8_LED5][1]
#define LED_u8_LED6_PIN		LED_u8_PORT_PIN [LED_u8_LED6][1]
#define LED_u8_LED7_PIN		LED_u8_PORT_PIN [LED_u8_LED7][1]
#define LED_u8_LED8_PIN		LED_u8_PORT_PIN [LED_u8_LED8][1]


/* macros for LED status */
#define	LED_u8_TURN_OFF					DIO_u8_LOW
#define	LED_u8_TURN_ON					DIO_u8_HIGH




/* macros for switches numbering */
#define LED_u8_SWITCHES_NUMBER		5
#define LED_u8_SWITCH1				0
#define LED_u8_SWITCH2				1
#define LED_u8_SWITCH3				2
#define LED_u8_SWITCH4				3
#define LED_u8_SWITCH5				4

/* macros for switches PORT */
#define LED_u8_SWITCHE1_PORT		DIO_u8_PORTA
#define LED_u8_SWITCHE2_PORT		DIO_u8_PORTA
#define LED_u8_SWITCHE3_PORT		DIO_u8_PORTA
#define LED_u8_SWITCHE4_PORT		DIO_u8_PORTA
#define LED_u8_SWITCHE5_PORT		DIO_u8_PORTA

/* macros for switches PINS */
#define LED_u8_SWITCHE1_PIN		DIO_u8_PIN3
#define LED_u8_SWITCHE2_PIN		DIO_u8_PIN4
#define LED_u8_SWITCHE3_PIN		DIO_u8_PIN5
#define LED_u8_SWITCHE4_PIN		DIO_u8_PIN6
#define LED_u8_SWITCHE5_PIN		DIO_u8_PIN7




/*
 * Name: LED_vidInit
 * Description: initialize LEDs status
 * Arguments: void
 * Return:	void
*/
void LED_vidInit(void);





/*
 * Name: LED_enuTurnOn
 * Description: Turn on or turn off a single LED
 * Arguments:
 * 				first Argument: Copy_u8_LedIndex, 			options (LED_u8_LED1, LED_u8_LED2, LED_u8_LED3, LED_u8_LED4,
 * 																	LED_u8_LED5, LED_u8_LED6, LED_u8_LED7, LED_u8_LED8)
 * 				second Argument: Copy_u8Status, 			options (LED_u8_TURN_OFF, LED_u8_TURN_ON)
 * Return:	Error Status -----> LED_OK , LED_NOK
*/
LED_tenuErrorStatus LED_enuTurnLedStatus(u8 Copy_u8_LedIndex, u8 Copy_u8Status);




/*
 * Name: LED_enuGetSwitchesValue
 * Description: Read the switches that responsible for the LEDs
 * Arguments:
 * 				first Argument: *Add_pu8SwitchesArray, 			options (Pass the address of switches array in "LED_cfg.c")
* 				second Argument: *Add_pu8SwitchesValue, 		options (Address to store the switches value)
 * Return:	Error Status -----> LED_OK , LED_NOK
*/
//LED_tenuErrorStatus LED_enuGetSwitchesValue(u8 *Add_pu8SwitchesArray, u8 *Add_pu8SwitchesValue);





/*
 *
*/
LED_tenuErrorStatus LED_enuMode1(void);


/*
 *
*/
LED_tenuErrorStatus LED_enuMode2(void);




/*
 *
*/
LED_tenuErrorStatus LED_enuMode3(void);



/*
 *
*/
LED_tenuErrorStatus LED_enuMode4(void);




/*
 *
*/
LED_tenuErrorStatus LED_enuMode5(void);



#endif /* HAL_LED_LED_INT_H_ */
