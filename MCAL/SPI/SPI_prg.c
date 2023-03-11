/*
 * SPI_prg.c
 *
 *  Created on: Sep 11, 2022
 *      Author: Mohamed Essam
 */
#include <util/delay.h>
#include "../../LIB/STD_Types.h"
#include "../../LIB/BIT_Utils.h"
#include "SPI_int.h"
#include "SPI_prv.h"
#include "../DIO/DIO_int.h"
#include "../GLOBAL_INT/GLOBAL_INT_int.h"

void SPI_vidSPIInit(u8 Copy_u8AssignNode){
	/*set node as master*/
	SPI_u8_SPCR_REG = Copy_u8AssignNode;
	/*enable the SPI interrupt and global interrupt*/
/*	SPI_u8_SPCR_REG |= SPI_u8_INTERRUPT_STATUS;
	GINT_vidEnable();	*/
	/*set the data order according to confg. file*/
	SPI_u8_SPCR_REG |= SPI_u8_DATA_ORDER;
	/*set the leading edge according to confg. file*/
	SPI_u8_SPCR_REG |= SPI_u8_CLOCK_POLARITY;
	/*set the phase at the leading edge according to config. file*/
	SPI_u8_SPCR_REG |= SPI_u8_CLOCK_PHASE;
	/*set clock prescaler according to config. file*/
	if(Copy_u8AssignNode == SPI_u8_ASSIGN_NODE_AS_MASTER){
		SPI_u8_SPCR_REG |= SPI_u8_CLOCK_RATE;
	} else{
		asm("NOP");
	}
	/*enable SPI*/
	SPI_u8_SPCR_REG |= SPI_u8_ENABLE;
}



u8 SPI_vidTransCeive(u8* Copy_pu8Data){
	/*set the data in SPDR in order to transmit it*/
	SPI_u8_SPDR_REG = *Copy_pu8Data;
	//_delay_ms(10);
	while((SPI_u8_SPSR_REG &= (~(0x80))) == 1);
	return SPI_u8_SPDR_REG;
}


void SPI_vidStopConnection(void){
	/*disable SPI*/
	SPI_u8_SPCR_REG &= (SPI_u8_DISABLE);
}


//void __vector_12(void) __attribute__((signal, used));
//void __vector_12(void){
	/*read the received data in a global variable*/
//	SPI_u8ReceivedData = SPI_u8_SPDR_REG;
//}
