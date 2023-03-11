/*
 * ICU_int.h
 *
 *  Created on: Sep 6, 2022
 *      Author: Mohamed Essam
 */

#ifndef MCAL_ICU_ICU_INT_H_
#define MCAL_ICU_ICU_INT_H_




/*error status*/
typedef enum{
	ICU_OK,
	ICU_NOK
}ICU_tenuErrorStatus;


/* configuration structure */
typedef struct {
	u8 ICU_u8Prescaler;
//	u8 ICU_u8EdgeSelect;
	u8 ICU_u8NoiseCanceller;
}ICU_tstrCongig;




#define F_CPU											16000000

/****************** Options Macros *************************/

/*Prescaler*/
#define GPT_u8_NO_CLOCK_SOURCE							0x00
#define GPT_u8_PRESCALER1								0x01
#define GPT_u8_PRESCALER8								0x02
#define GPT_u8_PRESCALER64								0x03
#define GPT_u8_PRESCALER256								0x04
#define GPT_u8_PRESCALER1024							0x05
#define GPT_u8_EXT_CLOCK_FALLING						0x06
#define GPT_u8_EXT_CLOCK_RISING							0x07

/*Edge Select*/
//#define ICU_u8_EDGE_SELECT_FALLING					0x00
#define ICU_u8_EDGE_SELECT_RISING						0x40


/*Noise Canceller*/
#define ICU_u8_NOISE_CANCELLER_ACTIVATE					0x80
#define ICU_u8_NOISE_CANCELLER_DEACTIVATE				0x00


/*
 *Name: ICU_enuConfigure
 *Arguments: first Argument, *Add_pstrConfig			(options: address to a struct ICU_tstrCongig)
 *return: ICU_tenuErrorStatus
*/
ICU_tenuErrorStatus ICU_enuConfigure(ICU_tstrCongig *Add_pstrConfig);





/*
 * In Hz
*/
ICU_tenuErrorStatus ICU_enuGetFrequency(u32 *Add_pu32Frequency);



/*
 *
*/
ICU_tenuErrorStatus ICU_enuGetDutyCycle(u8 *Add_pu8DutyCycle);






#endif /* MCAL_ICU_ICU_INT_H_ */
