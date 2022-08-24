/**************************************************/
/*				Author:Youssef ElGendy			  */	
/*				Date: 14-8-2022					  */
/*				Version: 1.1					  */
/*				Module:DIO_PROGRAM				  */
/**************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_Register.h"
#include "DIO_int.h"
#include "DIO_config.h"
#include "DIO_private.h"

void DIO_VoidSetPortDirection(void)
{
	DDRA=DIO_U8_PORTA_DIR;
	DDRB=DIO_U8_PORTB_DIR;
	DDRC=DIO_U8_PORTC_DIR;
	DDRD=DIO_U8_PORTD_DIR;
}
void DIO_VoidSetPinValue (u8 Copy_u8PortName,u8 Copy_u8Pin,u8 Copy_u8Value)
{	
	if(Copy_u8PortName=='A'||Copy_u8PortName=='a'){
		
		switch(Copy_u8Value)
		{
			case DIO_U8_HIGH: SET_BIT(PORTA,Copy_u8Pin);
								break;
			case DIO_U8_LOW:  CLR_BIT(PORTA,Copy_u8Pin);
								break;
		}
	}
	else if(Copy_u8PortName=='B'||Copy_u8PortName=='b'){
		
		switch(Copy_u8Value)
		{
			case DIO_U8_HIGH: SET_BIT(PORTB,Copy_u8Pin);
								break;
			case DIO_U8_LOW:  CLR_BIT(PORTB,Copy_u8Pin);
								break;
		}
	}	
	else if(Copy_u8PortName=='C'||Copy_u8PortName=='c'){
		
		switch(Copy_u8Value)
		{
			case DIO_U8_HIGH: SET_BIT(PORTB,Copy_u8Pin);
								break;
			case DIO_U8_LOW:  CLR_BIT(PORTB,Copy_u8Pin);
								break;
		}
	}
	
	else if(Copy_u8PortName=='D'||Copy_u8PortName=='d'){
		
		switch(Copy_u8Value)
		{
			case DIO_U8_HIGH: SET_BIT(PORTB,Copy_u8Pin);
								break;
			case DIO_U8_LOW:  CLR_BIT(PORTB,Copy_u8Pin);
								break;
		}
	}	
	else{
		//error
	}
}



void DIO_VoidSetPortValue		(u8 Copy_u8PortName,u8 Copy_u8Value)
{
		if(Copy_u8PortName=='A'||Copy_u8PortName=='a'){
			SET_PORT(DIO_U8_PORTA_VAL,Copy_u8Value);
		}
		else if(Copy_u8PortName=='B'||Copy_u8PortName=='b'){
			SET_PORT(DIO_U8_PORTB_VAL,Copy_u8Value);
		}
		else if(Copy_u8PortName=='C'||Copy_u8PortName=='c'){
			SET_PORT(DIO_U8_PORTC_VAL,Copy_u8Value);
		}
		else if(Copy_u8PortName=='D'||Copy_u8PortName=='d'){
			SET_PORT(DIO_U8_PORTD_VAL,Copy_u8Value);
		}
		else{
		//error}
}}

u8 	 DIO_u8GetPinValue			(u8 Copy_u8PortName,u8 Copy_u8Pin){
	u8 Local_u8Value=DIO_U8_LOW;
	if(Copy_u8PortName=='A'||Copy_u8PortName=='a'){
			u8Local_u8Value=GET_BIT(*PORTA,Copy_u8Pin);
		}
		else if(Copy_u8PortName=='B'||Copy_u8PortName=='b'){
			u8Local_u8Value=GET_BIT(*PORTB,Copy_u8Pin);
		}
		else if(Copy_u8PortName=='C'||Copy_u8PortName=='c'){
			u8Local_u8Value=GET_BIT(*PORTC,Copy_u8Pin);
		}
		else if(Copy_u8PortName=='D'||Copy_u8PortName=='d'){
			u8Local_u8Value=GET_BIT(*PORTD,Copy_u8Pin);
		}
		else{
			//error
		}
		return Local_u8Value;
}


	
	

