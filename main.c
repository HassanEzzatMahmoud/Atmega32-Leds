#include"LIB/Types.h"
#include"LIB/util.h"
#include"DIO_int.h"
#define F_CPU 8000000UL			/* Define frequency here its 8MHz */
#include <util/delay.h>
#include"LED.h"
#define True 1




void main(void)
{
	/*Initialization of Port  */

	DIO_SetPortDirection(DIO_u8PORTA,DIO_u8OUTPUT);
	DIO_SetPortValue(DIO_u8PORTA,DIO_u8LOW);


	// write your code here
	while(True)
	{
		Func_Snack();
			_delay_ms(50);
		Func_PP();
			_delay_ms(50);
		Func_Increament();
		_delay_ms(50);
		Func_Decreament();
		_delay_ms(50);
	}


}







