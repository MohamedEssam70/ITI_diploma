/*
 * DCMOTOR_int.h
 *
 *  Created on: Aug 31, 2022
 *      Author: Mohamed Essam
 */

#ifndef HAL_DC_MOTOR_DCMOTOR_INT_H_
#define HAL_DC_MOTOR_DCMOTOR_INT_H_

#include "DCMOTOR_cfg.h"


/* error status*/
typedef enum{
	DCMOTOR_OK,
	DCMOTOR_NOK
}DCMOTOR_tenuErrorStatus;



/* macros */
#define DCMOTOR_u8_DIRECTION_CW					0
#define DCMOTOR_u8_DIRECTION_ACW				1






/*Functions*/

/*
 *
*/
void DCMOTOR_vidInit(void);


/*
 *
*/
DCMOTOR_tenuErrorStatus DCMOTOR_enuRotate(u8 Copy_u8Direction);






#endif /* HAL_DC_MOTOR_DCMOTOR_INT_H_ */
