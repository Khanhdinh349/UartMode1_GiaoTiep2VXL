#include<main.h>
#include<..\lib\UartMode1.h"
#include<..\lib\Delay.h"

void main()
{
	Uart_Init();

	while(1)
	{
		if(P1_0==0)
		{
		 	Delay_ms(20);
			Uart_Write(0x01);
			while(P1_0==0);
		}

		if(P1_1==0)
		{
		 	Delay_ms(20);
			Uart_Write(0x00);
			while(P1_1==0);
		}
	}
}