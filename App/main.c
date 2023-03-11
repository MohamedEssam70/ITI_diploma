/*
 * STD_Types.h
 *
 *  Created on: Aug 24, 2022
 *      Author: Mohamed Essam
 */

#include <util/delay.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include "../LIB/STD_Types.h"
#include "../LIB/BIT_Utils.h"
#include "../MCAL/DIO/DIO_int.h"

void main(void) {


//	DIO_vidInit();
//	while(TRUE){
//		u8 *val = 5;
//		DIO_enuGetPinValue(DIO_u8_PORTB,DIO_u8_PIN1, &val);
//		if(val == DIO_u8_LOW){
//			DIO_enuSetPinValue(DIO_u8_PORTB, DIO_u8_PIN0, DIO_u8_HIGH);
//		}else{
//			DIO_enuSetPinValue(DIO_u8_PORTB, DIO_u8_PIN0, DIO_u8_LOW);
//		}
//	}




}
/*	DIO_vidInit();

		GPT_vidConfigure(GPT_u8_TIMER0);
		GPT_vidStartTimer(GPT_u8_TIMER0, 1, 0);
		while(TRUE){
			asm("NOP");
		}
}
ISR(TIMER0_OVF_vect){
		static u16 counter = 0;
		static u16 counter2 = 0;
		counter ++;
		if(counter == GPT_u8countOVFtime){
			counter = GPT_u8preloadValue;
			PORTB ^= 0x02;
			counter2 ++;
			if(counter2 == 5) {
				GPT_vidStopTimer(GPT_u8_TIMER0);
			}
		}
	}*/


/*PWM*/
		//PWM_vidConfigure(PWM_u8_TIMER1, 20);
		//PWM_vidGeneratePWM(PWM_u8_TIMER1, 20);
	/*	ICR1 = 5000;
		TCCR1A |= 0x02;
		TCCR1B |= 0x18;
		TCCR1A |= 0x80;
		TCCR1B |= 0x03;
		OCR1A = 100;*/


	/*u32 freq;
	u8 duty;
	DIO_vidInit();
	ICU_enuConfigure(&testICU);
	ICU_enuGetFrequency(&freq);
	ICU_enuGetDutyCycle(&duty);

	while(TRUE){
		asm("NOP");
	}

}*/

/*	//GPT Test
	DIO_vidInit();

	GPT_vidConfigure(GPT_u8_TIMER0);
	GPT_vidStartTimer(GPT_u8_TIMER0, 1, 0);

	while(TRUE){
		asm("NOP");
	}



}

ISR(TIMER0_OVF_vect){
	static u16 counter = 0;
	counter ++;
	if(counter == GPT_u8countOVFtime){
		counter = GPT_u8preloadValue;

		PORTB ^= 0x01;
	}
}*/


	/*DIO_vidInit();

	u16 ADCresult = 0x00;

	ADC_vidConfigure (ADC_u8_AVCC_REFERENCE, ADC_u8_RIGHT_ADJUST_RESULT, ADC_u8_ADC0);

	while(TRUE){
		ADC_enuEnableADC(ADC_u8_START_CONVERSION, ADC_u8_INT_DISABLE,ADC_u8_PRESCALER_64);
		while(((ADC_u8_ADCSRA_REG >> 4) & 0x01) ==0);
		ADC_u8_ADCSRA_REG |= 0x40;
		ADC_enuConversionResult(&ADCresult);
		if(ADCresult > 512){
			DIO_enuSetPinValue(DIO_u8_PORTA, DIO_u8_PIN1, DIO_u8_HIGH);
		} else{
			DIO_enuSetPinValue(DIO_u8_PORTA, DIO_u8_PIN1, DIO_u8_LOW);
		}
	}*/




	/*********LED APPLICATION*************/
	/*
	u8 switch1;
	u8 switch2;
	u8 switch3;
	u8 switch4;
	u8 switch5;

	LED_vidInit();

	while (TRUE){
		DIO_enuGetPinValue(LED_u8_SWITCHE1_PORT, LED_u8_SWITCHE1_PIN, &switch1);
		DIO_enuGetPinValue(LED_u8_SWITCHE2_PORT, LED_u8_SWITCHE2_PIN, &switch2);
		DIO_enuGetPinValue(LED_u8_SWITCHE3_PORT, LED_u8_SWITCHE3_PIN, &switch3);
		DIO_enuGetPinValue(LED_u8_SWITCHE4_PORT, LED_u8_SWITCHE4_PIN, &switch4);
		DIO_enuGetPinValue(LED_u8_SWITCHE5_PORT, LED_u8_SWITCHE5_PIN, &switch5);

		if ((switch1 != 0) && (switch2 == 0) && (switch3 == 0) && (switch4 == 0) && (switch5 == 0)){
			LED_enuMode1();
		} else if ((switch1 == 0) && (switch2 != 0) && (switch3 == 0) && (switch4 == 0) && (switch5 == 0)){
			LED_enuMode2();
		} else if ((switch1 == 0) && (switch2 == 0) && (switch3 != 0) && (switch4 == 0) && (switch5 == 0)){
			LED_enuMode3();
		} else if ((switch1 == 0) && (switch2 == 0) && (switch3 == 0) && (switch4 != 0) && (switch5 == 0)){
			LED_enuMode4();
		} else if ((switch1 == 0) && (switch2 == 0) && (switch3 == 0) && (switch4 == 0) && (switch5 != 0)){
			LED_enuMode5();
		} else {
			LED_enuTurnLedStatus(LED_u8_LED1, LED_u8_TURN_OFF);
			LED_enuTurnLedStatus(LED_u8_LED2, LED_u8_TURN_OFF);
			LED_enuTurnLedStatus(LED_u8_LED3, LED_u8_TURN_OFF);
			LED_enuTurnLedStatus(LED_u8_LED4, LED_u8_TURN_OFF);
			LED_enuTurnLedStatus(LED_u8_LED5, LED_u8_TURN_OFF);
			LED_enuTurnLedStatus(LED_u8_LED6, LED_u8_TURN_OFF);
			LED_enuTurnLedStatus(LED_u8_LED7, LED_u8_TURN_OFF);
			LED_enuTurnLedStatus(LED_u8_LED8, LED_u8_TURN_OFF);
		}

	*/






	/*********LCD APPLICATION*************/


	/*
	u8 num = 123;
	u8 customChar[] = {
		0x11,
		0x1A,
		0x14,
		0x12,
		0x11,
		0x12,
		0x14,
		0x18
	};
	u8 String[8] = {'M', 'o', 'h', 'a', 'm', 'e', 'd', '\0'};

	LCD_vidInit();
	LCD_enuGoTo(LCD_u8_ROW0, LCD_u8_COLUMN0);
	LCD_enuSendSinusoidalString(String);



	LCD_enuSendNumber(num);

	_delay_ms(50);
	LCD_enuGoTo(LCD_u8_ROW0, LCD_u8_COLUMN15);
	LCD_enuSendCharacter('H');
	_delay_ms(50);

	LCD_enuGoTo(LCD_u8_ROW0, LCD_u8_COLUMN0);
	LCD_enuSendString(String);
	_delay_ms(50);

	LCD_enuSendCustomCharacter(customChar, LCD_u8_CGRAM_BLOCK_1, LCD_u8_ROW1, LCD_u8_COLUMN0);
	_delay_ms(50);

	while(TRUE){

	}*/






	/*********KEYPAD APPLICATION*************/
/*
	u8 Local_u8PressedKey = KEYPAD_u8_INITIAL_VALUE;
	u8 Local_u8LCD_Column;

	LCD_vidInit();


	while(TRUE){
	//	Local_u8LCD_Column = 0;
	//	while(Local_u8LCD_Column<16){
			KEYPAD_vidGetPressedKey(&Local_u8PressedKey);
			if(Local_u8PressedKey != KEYPAD_u8_INITIAL_VALUE){
				LCD_enuGoTo(LCD_u8_ROW0, ++Local_u8LCD_Column);
				LCD_enuSendCharacter(Local_u8PressedKey);
			}
	//	}
	//	LCD_enuSendInstruction(LCD_u8_CLEAR_DISPLAY);
	//	LCD_enuGoTo(LCD_u8_ROW0, LCD_u8_COLUMN0);
	}
*/











	/*************DC MOTOR************/
	/*		//LAB1
		DIO_vidInit();
		while(TRUE){
			DIO_enuSetPinValue(DIO_u8_PORTB, DIO_u8_PIN4, DIO_u8_HIGH);
			_delay_ms(50);
			DIO_enuSetPinValue(DIO_u8_PORTB, DIO_u8_PIN4, DIO_u8_LOW);
		}
	*/

	/*		//LAB2
	u8 Direction_CW[10] = {'C', 'L', 'O', 'C', 'K', 'W', 'i', 'S', 'E', '\0'};
	u8 Direction_ACW[15] = {'A', 'N', 'T', 'I', '-', 'C', 'L', 'O', 'C', 'K', 'W', 'i', 'S', 'E', '\0'};
	u8 value1 = 5;
	u8 value2 = 5;
	LCD_vidInit();


	while(TRUE){
		DIO_enuGetPinValue(DIO_u8_PORTA, DIO_u8_PIN3, &value1);
		if(value1 == DIO_u8_HIGH){
			LCD_enuGoTo(LCD_u8_ROW0, LCD_u8_COLUMN0);
			LCD_enuSendString(Direction_ACW);
		}
		DIO_enuGetPinValue(DIO_u8_PORTA, DIO_u8_PIN4, &value2);
		if(value2 == DIO_u8_HIGH){
			LCD_enuGoTo(LCD_u8_ROW0, LCD_u8_COLUMN0);
			LCD_enuSendString(Direction_CW);
		}
		if(value1 == DIO_u8_LOW && value2 == DIO_u8_LOW){
			LCD_enuSendInstruction(LCD_u8_CLEAR_DISPLAY);
		}
	}

	 */



