/*
 * STEPPER_int.h
 *
 *  Created on: Aug 31, 2022
 *      Author: Mohamed Essam
 */

#ifndef HAL_STEPPER_MOTOR_STEPPER_INT_H_
#define HAL_STEPPER_MOTOR_STEPPER_INT_H_


#include "STEPPER_cfg.h"




/* error status*/
typedef enum{
	STEPPER_OK,
	STEPPER_NOK
}STEPPER_tenuErrorStatus;



/* macros */
#define STEPPER_u8_MIN_ANGLE			(4*STEPPER_u8_STEP_ANGLE)






/*Functions*/

/*
 *
*/
void STEPPER_vidInit(void);


/*
 *
*/
STEPPER_tenuErrorStatus STEPPER_enuFullStep(u8 Copy_u8Angle);


/*
 *
*/
STEPPER_tenuErrorStatus STEPPER_enuHalfStep(u8 Copy_u8Angle);


#endif /* HAL_STEPPER_MOTOR_STEPPER_INT_H_ */
