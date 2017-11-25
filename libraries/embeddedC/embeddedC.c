
/* implementation file of embedded C library */
#include "embeddedC.h"

/*function with no arguements - no return type */
/* function body */
void blinkLed (void) {
PORTA |= (1<<PA0);
_delay_ms(500);
PORTA &=(~(1<<PA0)) ;
_delay_ms(500);
} 



/* function that take two arguements and - return nothing */
void toggleSpecificLed (sint8 portx ,sint8 ledNum ) 
{
if (portx == 1)   		PORTA ^= (1<<ledNum); 
else if (portx == 2 ) 	PORTB ^= (1<<ledNum);
else if (portx == 3 ) 	PORTC ^= (1<<ledNum);
else if (portx == 4 )   PORTD ^= (1<<ledNum);
}

void setSpecificLed (sint8 portx ,sint8 ledNum) 
{
if (portx == 1)   		PORTA |= (1<<ledNum); 
else if (portx == 2 ) 	PORTB |= (1<<ledNum);
else if (portx == 3 ) 	PORTC |= (1<<ledNum);
else if (portx == 4 )   PORTD |= (1<<ledNum);
}


/* function that takes no arguements - and return int */
/* this function to know the state of PORTA */
uint8 ReadPORTA (void) {
return PORTA ; 
}


/* function that take two arguements and return the max */
uint8 maxValue (uint8 a , uint8 b) 
{
if (a > b) return a ; 
else return  b ;
}


uint8 ReadSpecificPort (sint8 portx) {
if (portx == 1 ) 		return PORTA ; 
else if (portx == 2)    return PORTB ; 
else if (portx == 3)    return PORTC ; 
else if (portx == 4) 	return PORTD ;

}
