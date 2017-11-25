#include "ext_int_config.h"

void setIntPins (uint8 intNum) {
if (intNum == INT0) 
{
DDRD &=(~(1<<PD2));   // int0
PORTD |= (1<<PD2) ;   // Enable the internal pull up resistor
}	
else if (intNum == INT1)
{
DDRD &=(~(1<<PD3));   // int1
PORTD |= (1<<PD3) ;   // Enable the internal pull up resistor
}	
else if (intNum == INT2) 
{
DDRB &=(~(1<<PB2));   // int2
PORTB |= (1<<PB2) ;   // Enable the internal pull up resistor 
}	
}

void enableSpecificExternalINT (uint8 intNum) 
{
sei();	
if (intNum == INT0)  			GICR |= (1<<INT0) ;  
else if (intNum == INT1) 		GICR |= (1<<INT1) ;
else if (intNum == INT2)		GICR |= (1<<INT2) ;
}

void setIntMode (uint8 intNum , uint8 intMode)
{
/* INT0 */
if 		 ((intNum == INT0 ) && (intMode == FALLING))		MCUCR |= (1<<ISC01) ; 
else if  ((intNum == INT0 ) && (intMode == RISING))  	    MCUCR |= (1<<ISC01) |(1<<ISC00); 
else if  ((intNum == INT0 ) && (intMode == ANY_CHANGE))     MCUCR |= (1<<ISC00) ; 
/* By default it's state is low */
else if  ((intNum == INT0 ) && (intMode == LOW)) 		MCUCR &= ((~(1<<ISC00))|(~(1<<ISC01))) ; 
/*INT1*/
else if  ((intNum == INT1 ) && (intMode == ANY_CHANGE))  MCUCR |= (1<<ISC10) ; 
else if  ((intNum == INT1 ) && (intMode == LOW))		 MCUCR &= ((~(1<<ISC10))|(~(1<<ISC11))) ;
else if  ((intNum == INT1 ) && (intMode == RISING))		 MCUCR |= (1<<ISC10) |(1<<ISC11);  
else if  ((intNum == INT1 ) && (intMode == FALLING))	 MCUCR |= (1<<ISC11) ; 
/* INT2 */
else if ((intNum == INT2 ) && (intMode == FALLING))      MCUCSR &=(~(1<<ISC2)) ;
else if ((intNum == INT2 ) && (intMode == RISING))		 MCUCSR |=(1<<ISC2) ;
}
