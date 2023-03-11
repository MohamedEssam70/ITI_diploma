/*
 * PWM_cfg.h
 *
 *  Created on: Sep 7, 2022
 *      Author: Mohamed Essam
 */

#ifndef MCAL_PWM_PWM_CFG_H_
#define MCAL_PWM_PWM_CFG_H_


/***********GENERAL***************/
#define PWM_u8_MC_FREQUENCY				16



/**********************TIMER 0 CONFIGURATION**************************/






/**********************TIMER 1 CONFIGURATION**************************/
/*Wave generation mode options:
 * 				1-  PWM_u16_WAVE_FORM_PWM_PASE_CORRECT_8BIT
 * 				2-  PWM_u16_WAVE_FORM_PWM_PASE_CORRECT_9BIT
 * 				3-  PWM_u16_WAVE_FORM_PWM_PASE_CORRECT_10BIT
 * 				4-  PWM_u16_WAVE_FORM_FAST_PWM_8BIT
 * 				5-  PWM_u16_WAVE_FORM_FAST_PWM_9BIT
 * 				6-  PWM_u16_WAVE_FORM_FAST_PWM_10BIT
 * 				7-  PWM_u16_WAVE_FORM_PWM_PASE_AND_FREQUENCY_CORRECT_ICR1_TOP
 * 				8-  PWM_u16_WAVE_FORM_PWM_PASE_AND_FREQUENCY_CORRECT_OCR1A_TOP
 * 				9-  PWM_u16_WAVE_FORM_PWM_PASE_CORRECT_ICR1_TOP
 * 				10- PWM_u16_WAVE_FORM_PWM_PASE_CORRECT_OCR1A_TOP
 * 				11- PWM_u16_WAVE_FORM_FAST_PWM_1_ICR1_TOP
 * 				12- PWM_u16_WAVE_FORM_FAST_PWM_2_OCR1A_TOP
*/
#define PWM_u16_TIMER1_WAVE_GENERATION_MODE						PWM_u16_WAVE_FORM_FAST_PWM_1_ICR1_TOP

/*compare match mode unit A options:
 * 				1- PWM_u8_COM_A_NON_INVERTING
 *              2- PWM_u8_COM_A_INVERTING
 *              3- PWM_u8_COM_A_CLEAR_UP
 *              4- PWM_u8_COM_A_SET_UP
*/
#define PWM_u8_TIMER1_COM_A_MODE								PWM_u8_COM_A_NON_INVERTING

/*compare match mode unit B options:
 * 				1- PWM_u8_COM_B_NON_INVERTING
 *              2- PWM_u8_COM_B_INVERTING
 *              3- PWM_u8_COM_B_CLEAR_UP
 *              4- PWM_u8_COM_B_SET_UP
*/
#define PWM_u8_TIMER1_COM_B_MODE								PWM_u8_COM_B_NON_INVERTING



/*Clock Select Options
 *				1- PWM_u8_NO_CLOCK_SOURCE
 *				2- PWM_u8_NO_PRESCALING
 *				3- PWM_u8_PRESCALER8
 *				4- PWM_u8_PRESCALER64
 *				5- PWM_u8_PRESCALER256
 *				6- PWM_u8_PRESCALER1024
 *				7- PWM_u8_EXT_CLOCK_FALLING
 *				8- PWM_u8_EXT_CLOCK_RISING
 *
*/
#define PWM_u8_TIMER1_CLOCK_SELECTION							PWM_u8_PRESCALER64



/**********************TIMER 2 CONFIGURATION**************************/
















#endif /* MCAL_PWM_PWM_CFG_H_ */
