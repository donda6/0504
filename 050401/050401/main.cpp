/*
 * 050401.cpp
 *
 * Created: 2018-05-04 오전 9:40:20
 * Author : stc_19
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
void aaa(int angle);

int main()
{
	DDRA = 0xff;
	PORTA = 0xff;
	while(1)
	{
		aaa(0);
		aaa(45);
		aaa(90);
		break;
		
	}	
}

void aaa(int angle)
{
	int temp = 0;
	temp = (11.1111*angle)+500;
	
		for(int i = 0; i <= 100; i++)//0도
		{
			for(int j = 0; j <=temp; j++)
			{
				PORTA |= (1<<PA0);
				_delay_us(1);
			}
			
			PORTA &= ~(1<<PA0);
			_delay_us(20);
		}
	
}



