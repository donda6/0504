/*
 * new.cpp
 *
 * Created: 2018-05-04 오전 10:05:42
 *  Author: stc_19
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>

extern void aaa();
extern void bbb();
extern void ccc();
int main()
{
	int a;
	printf("0, 90, 180 중 한 각도를 입력하세요 : \n");
	scanf("%d",&a);
	if(a == 0)
	{
		 void aaa();
	}		
	else if(a == 90)
	{
		 void bbb();	
	}
	else if(a == 180)
	{
		 void ccc();
	}	
	else
	{
		printf("0, 90, 180 중에 입력하세요\n");
	}
	
}