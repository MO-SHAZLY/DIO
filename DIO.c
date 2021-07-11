/*
 * DIO.c
 *
 *  Created on: Dec 13, 2020
 *      Author: DELL
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_INT_1.h"
#include "DIO_reg.h"
#include "DIO_CONFIG.h"

u8 i;
u8 ResultLocal;
u8 Result;

extern u8 DIO_PinConfiguration[LAST_PIN];


void DIO_Init(void)
{

	for(i=0; i<LAST_PIN; i++)
	{
		u8 divide=i/8;

		switch(DIO_PinConfiguration[i])
		{

		case OUTPUT:
			switch(divide)
			{
			case 0:SET_BIT(DDRA_Register,i%8); break;
			case 1:SET_BIT(DDRB_Register,i%8); break;
			case 2:SET_BIT(DDRC_Register,i%8); break;
			case 3:SET_BIT(DDRD_Register,i%8); break;

			default: break;
			}
			break;

			case INPUT_PULLUP:
				switch(divide)
				{
				case 0:CLR_BIT(DDRA_Register,i%8);
					   SET_BIT(PORTA_Register,i%8); break; 
				case 1:CLR_BIT(DDRB_Register,i%8);
				       SET_BIT(PORTB_Register,i%8); break; 
				case 2:CLR_BIT(DDRC_Register,i%8);
				       SET_BIT(PORTC_Register,i%8); break;
				case 3:CLR_BIT(DDRD_Register,i%8);
 				       SET_BIT(PORTD_Register,i%8); break; 
				default: break;
				}
		break;

		case INPUT_FLOATING:
			switch(divide)
			{
			case 0:CLR_BIT(DDRA_Register,i%8); 
			       CLR_BIT(PORTA_Register,i%8); break;
			case 1:CLR_BIT(DDRB_Register,i%8); 
			       CLR_BIT(PORTB_Register,i%8); break;
			case 2:CLR_BIT(DDRC_Register,i%8); 
			       CLR_BIT(PORTC_Register,i%8); break;
			case 3:CLR_BIT(DDRD_Register,i%8); 
			       CLR_BIT(PORTD_Register,i%8); break;
			}
			break;
		}
	}

}

void DIO_Writechannel( DIO_enuChannel PINID, u8 u8value)
{
	if(u8value==0){
		switch(PINID)
		{
		case PORTA0: CLR_BIT(PORTA_Register,0); break;
		case PORTA1: CLR_BIT(PORTA_Register,1); break;
		case PORTA2: CLR_BIT(PORTA_Register,2); break;
		case PORTA3: CLR_BIT(PORTA_Register,3); break;
		case PORTA4: CLR_BIT(PORTA_Register,4); break;
		case PORTA5: CLR_BIT(PORTA_Register,5); break;
		case PORTA6: CLR_BIT(PORTA_Register,6); break;
		case PORTA7: CLR_BIT(PORTA_Register,7); break;

		case PORTB0: CLR_BIT(PORTB_Register,0); break;
		case PORTB1: CLR_BIT(PORTB_Register,1); break;
		case PORTB2: CLR_BIT(PORTB_Register,2); break;
		case PORTB3: CLR_BIT(PORTB_Register,3); break;
		case PORTB4: CLR_BIT(PORTB_Register,4); break;
		case PORTB5: CLR_BIT(PORTB_Register,5); break;
		case PORTB6: CLR_BIT(PORTB_Register,6); break;
		case PORTB7: CLR_BIT(PORTB_Register,7); break;

		case PORTC0: CLR_BIT(PORTC_Register,0); break;
		case PORTC1: CLR_BIT(PORTC_Register,1); break;
		case PORTC2: CLR_BIT(PORTC_Register,2); break;
		case PORTC3: CLR_BIT(PORTC_Register,3); break;
		case PORTC4: CLR_BIT(PORTC_Register,4); break;
		case PORTC5: CLR_BIT(PORTC_Register,5); break;
		case PORTC6: CLR_BIT(PORTC_Register,6); break;
		case PORTC7: CLR_BIT(PORTC_Register,7); break;

		case PORTD0: CLR_BIT(PORTD_Register,0); break;
		case PORTD1: CLR_BIT(PORTD_Register,1); break;
		case PORTD2: CLR_BIT(PORTD_Register,2); break;
		case PORTD3: CLR_BIT(PORTD_Register,3); break;
		case PORTD4: CLR_BIT(PORTD_Register,4); break;
		case PORTD5: CLR_BIT(PORTD_Register,5); break;
		case PORTD6: CLR_BIT(PORTD_Register,6); break;
		case PORTD7: CLR_BIT(PORTD_Register,7); break;
		}
	}
	else if(u8value==1){
		switch(PINID)
		{
		case PORTA0: CLR_BIT(PORTA_Register,0); break;
		case PORTA1: CLR_BIT(PORTA_Register,1); break;
		case PORTA2: CLR_BIT(PORTA_Register,2); break;
		case PORTA3: CLR_BIT(PORTA_Register,3); break;
		case PORTA4: CLR_BIT(PORTA_Register,4); break;
		case PORTA5: CLR_BIT(PORTA_Register,5); break;
		case PORTA6: CLR_BIT(PORTA_Register,5); break;
		case PORTA7: CLR_BIT(PORTA_Register,6); break;

		case PORTB0: CLR_BIT(PORTB_Register,0); break;
		case PORTB1: CLR_BIT(PORTB_Register,1); break;
		case PORTB2: CLR_BIT(PORTB_Register,2); break;
		case PORTB3: CLR_BIT(PORTB_Register,3); break;
		case PORTB4: CLR_BIT(PORTB_Register,4); break;
		case PORTB5: CLR_BIT(PORTB_Register,5); break;
		case PORTB6: CLR_BIT(PORTB_Register,6); break;
		case PORTB7: CLR_BIT(PORTB_Register,7); break;

		case PORTC0: CLR_BIT(PORTC_Register,0); break;
		case PORTC1: CLR_BIT(PORTC_Register,1); break;
		case PORTC2: CLR_BIT(PORTC_Register,2); break;
		case PORTC3: CLR_BIT(PORTC_Register,3); break;
		case PORTC4: CLR_BIT(PORTC_Register,4); break;
		case PORTC5: CLR_BIT(PORTC_Register,5); break;
		case PORTC6: CLR_BIT(PORTC_Register,6); break;
		case PORTC7: CLR_BIT(PORTC_Register,7); break;

		case PORTD0: CLR_BIT(PORTD_Register,0); break;
		case PORTD1: CLR_BIT(PORTD_Register,1); break;
		case PORTD2: CLR_BIT(PORTD_Register,2); break;
		case PORTD3: CLR_BIT(PORTD_Register,3); break;
		case PORTD4: CLR_BIT(PORTD_Register,4); break;
		case PORTD5: CLR_BIT(PORTD_Register,5); break;
		case PORTD6: CLR_BIT(PORTD_Register,6); break;
		case PORTD7: CLR_BIT(PORTD_Register,7); break;
		}
	  }
	}
	void DIO_WritePort(DIO_enuPort PortID,u8 u8value)
	{
		switch(PortID)
		{
		case PORT_A: PORTA_Register=u8value; break;
		case PORT_B: PORTB_Register=u8value; break;
		case PORT_C: PORTC_Register=u8value; break;
		case PORT_D: PORTD_Register=u8value; break;

		}

	}

	u8  DIO_Readchannel ( DIO_enuChannel PIN_ID)
	{
		switch(PIN_ID)
		{
		case PORTA0:  ResultLocal = GET_BIT(PINA_Register,0); break;
		case PORTA1:  ResultLocal = GET_BIT(PINA_Register,1); break;
		case PORTA2:  ResultLocal = GET_BIT(PINA_Register,2); break;
		case PORTA3:  ResultLocal = GET_BIT(PINA_Register,3); break;
		case PORTA4:  ResultLocal = GET_BIT(PINA_Register,4); break;
		case PORTA5:  ResultLocal = GET_BIT(PINA_Register,5); break;
		case PORTA6:  ResultLocal = GET_BIT(PINA_Register,6); break;
		case PORTA7:  ResultLocal = GET_BIT(PINA_Register,7); break;

		case PORTB0:  ResultLocal = GET_BIT(PINB_Register,0); break;
		case PORTB1:  ResultLocal = GET_BIT(PINB_Register,1); break;
		case PORTB2:  ResultLocal = GET_BIT(PINB_Register,2); break;
		case PORTB3:  ResultLocal = GET_BIT(PINB_Register,3); break;
		case PORTB4:  ResultLocal = GET_BIT(PINB_Register,4); break;
		case PORTB5:  ResultLocal = GET_BIT(PINB_Register,5); break;
		case PORTB6:  ResultLocal = GET_BIT(PINB_Register,6); break;
		case PORTB7:  ResultLocal = GET_BIT(PINB_Register,7); break;

		case PORTC0:  ResultLocal = GET_BIT(PINC_Register,0); break;
		case PORTC1:  ResultLocal = GET_BIT(PINC_Register,1); break;
		case PORTC2:  ResultLocal = GET_BIT(PINC_Register,2); break;
		case PORTC3:  ResultLocal = GET_BIT(PINC_Register,3); break;
		case PORTC4:  ResultLocal = GET_BIT(PINC_Register,4); break;
		case PORTC5:  ResultLocal = GET_BIT(PINC_Register,5); break;
		case PORTC6:  ResultLocal = GET_BIT(PINC_Register,6); break;
		case PORTC7:  ResultLocal = GET_BIT(PINC_Register,7); break;

		case PORTD0:  ResultLocal = GET_BIT(PIND_Register,0); break;
		case PORTD1:  ResultLocal = GET_BIT(PIND_Register,1); break;
		case PORTD2:  ResultLocal = GET_BIT(PIND_Register,2); break;
		case PORTD3:  ResultLocal = GET_BIT(PIND_Register,3); break;
		case PORTD4:  ResultLocal = GET_BIT(PIND_Register,4); break;
		case PORTD5:  ResultLocal = GET_BIT(PIND_Register,5); break;
		case PORTD6:  ResultLocal = GET_BIT(PIND_Register,6); break;
		case PORTD7:  ResultLocal = GET_BIT(PIND_Register,7); break;

	}
		return ResultLocal;
}
	u8 DIO_ReadPort (DIO_enuPort Port_ID)
	{

		switch(Port_ID)
		{
		case PORT_A: Result = PINA_Register; break;
		case PORT_B: Result = PINB_Register; break;
		case PORT_C: Result = PINC_Register; break;
		case PORT_D: Result = PIND_Register; break;

		}

		return Result;
	}


