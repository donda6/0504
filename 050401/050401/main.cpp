/*
 * 050401.cpp
 *
 * Created: 2018-05-04 오전 9:40:20
 * Author : stc_19
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>



void aaa()
{
	while(1)
	{
		for(int i = 0; i <= 100; i++)//0도
		{
			PORTA |= (1<<PA0);
			_delay_us(500);
			PORTA &= ~(1<<PA0);
			_delay_us(19500);
		}
	}
}
void bbb()
{
	while(1)
	{	
		for(int i = 0; i <= 100; i++)//90도
		{
			PORTA |= (1<<PA0);
			_delay_us(1500);
			PORTA &= ~(1<<PA0);
			_delay_us(18500);
		}
	}
}
void ccc()
{
	while(1)
	{
		for(int i = 0; i <= 100; i++)//180도
		{
			PORTA |= (1<<PA0);
			_delay_us(2500);
			PORTA &= ~(1<<PA0);
			_delay_us(17500);
		}
	}
}


