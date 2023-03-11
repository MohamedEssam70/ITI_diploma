/*
 * BIT_Utils.h
 *
 *  Created on: Aug 24, 2022
 *      Author: Mohamed Essam
 */

#ifndef LIB_BIT_UTILS_H_
#define LIB_BIT_UTILS_H_


/*******CONCATENATE METHODE******/
#define CONC(b7, b6, b5, b4, b3, b2, b1, b0)		CONC_HELP(b7, b6, b5, b4, b3, b2, b1, b0)
#define CONC_HELP(b7, b6, b5, b4, b3, b2, b1, b0)		0b##b7##b6##b5##b4##b3##b2##b1##b0



/*******BIT WISE OPERATIONS********/
#define SET_BIT(REG, VALUE)				(REG |= VALUE)
#define CLEAR_BIT(REG, VALUE)			(REG &= ~VALUE)
#define TOGGLE_BIT(REG, VALUE)			(REG ^= VALUE)



#endif /* LIB_BIT_UTILS_H_ */
