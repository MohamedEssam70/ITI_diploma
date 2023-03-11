/*
 * PWM_prv.h
 *
 *  Created on: Sep 7, 2022
 *      Author: Mohamed Essam
 */




/**********REGISTER ADDRESSES TIMER0************/
/*TCCR0 REG*/
#define PWM_u8_TCCR0_REG				(*(volatile u8*) 0x53)

/*TCNT0 REG*/
#define PWM_u8_TCNT0_REG				(*(volatile u8*) 0x52)

/*OCR0 REG*/
#define PWM_u8_OCR0_REG					(*(volatile u8*) 0x5C)


/**********REGISTER ADDRESSES TIMER1************/
/*TCCR1 REG*/
#define PWM_u8_TCCR1A_REG				(*(volatile u8*) 0x4F)
#define PWM_u8_TCCR1B_REG				(*(volatile u8*) 0x4E)
#define PWM_u16_TCCR1_REG				(*(volatile u16*) 0x4F)

/*TCNT1 REG*/
#define PWM_u16_TCNT1_REG				(*(volatile u16*) 0x4C)

/*OCR1 REG*/
#define PWM_u16_OCRA1_REG				(*(volatile u16*) 0x4A)
#define PWM_u16_OCRB1_REG				(*(volatile u16*) 0x48)

/*ICR*/
#define PWM_u16_ICR1_REG				(*(volatile u16*) 0x46)

/**********REGISTER ADDRESSES TIMER2************/
/*TCCR2 REG*/
#define PWM_u8_TCCR2_REG				(*(volatile u8*) 0x45)

/*TCNT2 REG*/
#define PWM_u8_TCNT2_REG				(*(volatile u8*) 0x44)

/*OCR2 REG*/
#define PWM_u8_OCR2_REG					(*(volatile u8*) 0x43)


/**********REGISTER ADDRESSES FOR SEVERAL TIMER/COUNTER************/
/*TIMSK REG*/
#define PWM_u8_TIMSK_REG				(*(volatile u8*) 0x59)

/*TIFR REG*/
#define PWM_u8_TIFR_REG					(*(volatile u8*) 0x58)

