/*

\ * DIO_INT_1.h
 *
 *  Created on: Dec 13, 2020
 *      Author: DELL
 */
#include "STD_TYPES.h"
#include "DIO_CONFIG.h"

#ifndef DIO_INT_1_H_
#define DIO_INT_1_H_

void DIO_Init(void);

void DIO_Writechannel( DIO_enuChannel PINID, u8 u8value);
void DIO_WritePort(  DIO_enuPort PortID, u8  u8value);

u8 DIO_Readchannel( DIO_enuChannel PIN_ID);


 u8  DIO_ReadPort ( DIO_enuPort Port_ID);


#endif /* DIO_INT_1_H_ */
