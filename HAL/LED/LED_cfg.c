/*
 * LED_cfg.c
 *
 *  Created on: Aug 29, 2022
 *      Author: Mohamed Essam
 */


#include "../../LIB/STD_Types.h"
#include "../../MCAL/DIO/DIO_int.h"
#include "LED_int.h"


const u8 LED_u8_PORT_PIN [LED_u8_LED_NUMBER][2] =
{
		{DIO_u8_PORTB, DIO_u8_PIN0},
		{DIO_u8_PORTB, DIO_u8_PIN1},
		{DIO_u8_PORTB, DIO_u8_PIN2},
		{DIO_u8_PORTB, DIO_u8_PIN3},
		{DIO_u8_PORTB, DIO_u8_PIN4},
		{DIO_u8_PORTB, DIO_u8_PIN5},
		{DIO_u8_PORTB, DIO_u8_PIN6},
		{DIO_u8_PORTB, DIO_u8_PIN7}
};


/*
const u8 LED_u8_SWITCHES [LED_u8_SWITCHES_NUMBER][2] =
{
		{DIO_u8_PORTA, DIO_u8_PIN3},
		{DIO_u8_PORTA, DIO_u8_PIN4},
		{DIO_u8_PORTA, DIO_u8_PIN5},
		{DIO_u8_PORTA, DIO_u8_PIN6},
		{DIO_u8_PORTA, DIO_u8_PIN7}
};
*/
