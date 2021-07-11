/*
 * DIO_CONFIG.c
 *
 *  Created on: Dec 13, 2020
 *      Author: DELL
 */
#include "STD_TYPES.h"
#include "DIO_CONFIG.h"

#define OUTPUT         ((u8)0)
#define INPUT_PULLUP   ((u8)1)
#define INPUT_FLOATING ((u8)2)

u8 DIO_PinConfiguration[LAST_PIN]=

       {OUTPUT,OUTPUT,OUTPUT,OUTPUT,OUTPUT,OUTPUT,OUTPUT,OUTPUT,
		OUTPUT,OUTPUT,OUTPUT,OUTPUT,OUTPUT,OUTPUT,OUTPUT,OUTPUT,
		OUTPUT,OUTPUT,OUTPUT,OUTPUT,OUTPUT,OUTPUT,OUTPUT,OUTPUT,
		OUTPUT,INPUT_PULLUP,INPUT_PULLUP,OUTPUT,OUTPUT,OUTPUT,OUTPUT,OUTPUT };


//DDRA 1 = (1<<2) // pins 2 output
//DDRA 1 = (1<<3) // pins 3 output
//DDRA 1 = (1<<4) // pins 4 output
//DDRD & = (~(1<<7)) // pins 7 input




