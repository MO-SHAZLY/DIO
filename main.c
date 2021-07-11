
#include "BIT_MATH.h"
#include <util/delay.h>
#include "DIO_reg.h"
#include "DIO_INT_1.h"

int main(void)
{

	DIO_Init();
	u8 switch_1;
	u8 loop_counter;
	u8 switch_2;
	//_delay_ms(250);

	while(1)
	{
		switch_1= DIO_Readchannel(PORTD1);
		switch_2= DIO_Readchannel(PORTD2);


		if(switch_1==1)
		{
			for(loop_counter=0; loop_counter<8; loop_counter++)
			{
				DIO_WritePort(PORT_A,1 << loop_counter);
				//DIO_WritePort(PORT_A,255); // DIO_WritePort(PORT_A 1 =(1<<5)); // PIN 5 ON
				_delay_ms(100);
			}

			//else {
			//DIO_WritePort(PORT_A,0); // DIO_WritePort(PORT_A & =(~(1<<5)); // PIN 5 OFF
			//}
		}
		if(switch_2==1)
		{

			for(loop_counter=1; loop_counter<8; loop_counter++)
			{
				DIO_WritePort(PORT_A,0x80 >> loop_counter|0x80);
				//DIO_WritePort(PORT_A,255); // DIO_WritePort(PORT_A 1 =(1<<5)); // PIN 5 ON
				_delay_ms(100);
			}


		}}

	return 0;

}


