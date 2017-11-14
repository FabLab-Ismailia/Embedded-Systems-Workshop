/*
 * embeddedC.c
 *
 * Created: 13/11/2017 01:21:21 م
 *  Author: Hemed
 */ 


#include "avr_config.h"
void setSpecificBit (sint8 portx ,sint8 ledNum);
void toggleSpecificBit (sint8 portx ,sint8 ledNum); 
void toggleSpecificBitTime (sint8 portx ,sint8 ledNum , uint32 delay_time); 
int main(void)
{   
	/* make all ports output ports */
	DDRB = DDRC= DDRD= DDRA = 0xff ;
	/*
	you can do that in the same manner 
	DDRA = 0xff ; 
	DDRB = 0xff ; 
	DDRC = 0xff ; 
	DDRD = 0xff ; 
	*/ 
    while(1)
    {							
        setSpecificBit(1,7) ;		// set portA bit 7 
		setSpecificBit(2,6) ;		// set portB bit 6 
		setSpecificBit(3,5) ;		// set portC bit 5 
		setSpecificBit(4,0) ;		// set portD bit 0
		toggleSpecificBit(1,5) ;    // toggle portA bit 5  
		toggleSpecificBit(2,5) ;	// toggle portB bit 5 
		toggleSpecificBitTime(1,5,1000); 
		 
    }
}


void setSpecificBit (sint8 portx ,sint8 ledNum)
{
	if (portx == 1)   		PORTA |= (1<<ledNum);
	else if (portx == 2 ) 	PORTB |= (1<<ledNum);
	else if (portx == 3 ) 	PORTC |= (1<<ledNum);
	else if (portx == 4 )   PORTD |= (1<<ledNum);
}


void toggleSpecificBit (sint8 portx ,sint8 ledNum)
{
	if (portx == 1)   		PORTA ^= (1<<ledNum);
	else if (portx == 2 ) 	PORTB ^= (1<<ledNum);
	else if (portx == 3 ) 	PORTC ^= (1<<ledNum);
	else if (portx == 4 )   PORTD ^= (1<<ledNum);
	_delay_ms(500);
}

/* function that take three arguements and - return nothing */
void toggleSpecificBitTime (sint8 portx ,sint8 ledNum , uint32 delay_time)
{
	if (portx == 1)   		PORTA ^= (1<<ledNum);
	else if (portx == 2 ) 	PORTB ^= (1<<ledNum);
	else if (portx == 3 ) 	PORTC ^= (1<<ledNum);
	else if (portx == 4 )   PORTD ^= (1<<ledNum);
	_delay_ms (delay_time);
}
