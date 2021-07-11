/*
 * DIO_CONFG.h
 *
 *  Created on: Dec 13, 2020
 *      Author: DELL
 */

#ifndef DIO_CONFG_H_
#define DIO_CONFG_H_

#define OUTPUT        ((u8)0) /*LOW_VALUE*/
#define INPUT_PULLUP  ((u8)1) /*HIGH_VALUE*/
#define INPUT_FLOATING ((u8)2)


/* PIN Defines */
/*
#define PIN0   0
#define PIN1   1
#define PIN2   2
#define PIN3   3
#define PIN4   4
#define PIN5   5
#define PIN6   6
#define PIN7   7
*/

typedef enum {
	PORTA0=0, PORTA1,PORTA2,PORTA3,PORTA4,PORTA5,PORTA6,PORTA7,
	PORTB0,PORTB1,PORTB2,PORTB3,PORTB4,PORTB5,PORTB6,PORTB7,
	PORTC0,PORTC1,PORTC2,PORTC3,PORTC4,PORTC5,PORTC6,PORTC7,
	PORTD0,PORTD1,PORTD2,PORTD3,PORTD4,PORTD5,PORTD6,PORTD7,LAST_PIN}

DIO_enuChannel;



/* Port Defines */
/*
#define PORTA    0
#define PORTB    1
#define PORTC    2
#define PORTD    3
*/

typedef enum{

	PORT_A=0,PORT_B,PORT_C,PORT_D,LAST_PORT}

DIO_enuPort;


#endif /* DIO_CONFG_H_ */
