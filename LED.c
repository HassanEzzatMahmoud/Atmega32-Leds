/*
 * LED.c
 *
 *  Created on: ???/???/????
 *      Author: hassan
 */
#include"LIB/Types.h"
#include"LIB/util.h"
#include"LED.h"
#include"DIO_int.h"
#define F_CPU 8000000UL
#include<util/delay.h>

u8 i=0;

void Func_Snack()
{

	for(i=0; i<8; i++)
	{

		DIO_SetPinValue(DIO_u8PORTA,i,DIO_u8HIGH);
		_delay_ms(10);

	}

	for(i=0; i<8; i++)
	{

		DIO_SetPinValue(DIO_u8PORTA,i,DIO_u8LOW);
		_delay_ms(10);

	}


}

void Func_Increament()
{

	for(i=0; i<8; i++)
	{

		DIO_SetPinValue(DIO_u8PORTA,i,DIO_u8HIGH);
		_delay_ms(20);
		DIO_SetPinValue(DIO_u8PORTA,i,DIO_u8LOW);
		_delay_ms(20);
	}



}
void Func_Decreament()
{

	for(i=7; i>=0; i--)
	{

		DIO_SetPinValue(DIO_u8PORTA,i,DIO_u8HIGH);
		_delay_ms(20);
		DIO_SetPinValue(DIO_u8PORTA,i,DIO_u8LOW);
		_delay_ms(20);
	}
}

void Func_PP()
{
	for(i=0; i<4; i++)
	{

		DIO_SetPortValue(DIO_u8PORTA,((8>>i)|(16<<i)));
		_delay_ms(5);
		DIO_SetPortValue(DIO_u8PORTA,((8>>i)|(16<<i)));
		_delay_ms(5);

	}
	for(i=0; i<4; i++)
	{

		DIO_SetPortValue(DIO_u8PORTA,((128>>i)|(1<<i)));
		_delay_ms(5);
		DIO_SetPortValue(DIO_u8PORTA,((128>>i)|(1<<i)));
		_delay_ms(5);

	}
	DIO_SetPortValue(DIO_u8PORTA,DIO_u8LOW);



}


