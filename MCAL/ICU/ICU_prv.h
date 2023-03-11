/*
 * ICU_prg.h
 *
 *  Created on: Sep 6, 2022
 *      Author: Mohamed Essam
 */

#ifndef MCAL_ICU_ICU_PRV_H_
#define MCAL_ICU_ICU_PRV_H_


/**********REGISTER ADDRESSES TIMER0************/
/*TCCR0 REG*/
#define GPT_u8_TCCR0_REG				(*(volatile u8*) 0x53)

/*TCNT0 REG*/
#define GPT_u8_TCNT0_REG				(*(volatile u8*) 0x52)

/*OCR0 REG*/
#define GPT_u8_OCR0_REG					(*(volatile u8*) 0x5C)


/**********REGISTER ADDRESSES TIMER1************/
/*TCCR1 REG*/
#define GPT_u8_TCCR1A_REG				(*(volatile u8*) 0x4F)
#define GPT_u8_TCCR1B_REG				(*(volatile u8*) 0x4E)

/*TCNT1 REG*/
#define GPT_u8_TCNT1H_REG				(*(volatile u8*) 0x4D)
#define GPT_u8_TCNT1L_REG				(*(volatile u8*) 0x4C)

/*OCR1 REG*/
#define GPT_u8_OCRA1H_REG				(*(volatile u8*) 0x4B)
#define GPT_u8_OCRA1L_REG				(*(volatile u8*) 0x4A)
#define GPT_u8_OCRB1H_REG				(*(volatile u8*) 0x49)
#define GPT_u8_OCRB1L_REG				(*(volatile u8*) 0x48)





/**********REGISTER ADDRESSES FOR SEVERAL TIMER/COUNTER************/
/*TIMSK REG*/
#define GPT_u8_TIMSK_REG				(*(volatile u8*) 0x59)

/*TIFR REG*/
#define GPT_u8_TIFR_REG					(*(volatile u8*) 0x58)




#endif /* MCAL_ICU_ICU_PRV_H_ */
