/*
 * external_interrupts1.c
 *
 * Created: 17/11/2017 02:45:40 ص
 *  Author: Hemed
 */ 

#include "avr_config.h"
#define interruptLed PD0
int main(void)
{   /* led indicator */
	DDRD |= (1<<interruptLed); 
	/* make interrupt pin as input */
	DDRD &= (~(1<<INT0));		
	/* enable pull up resistor */
	PORTD |= (1<<PD0); 
    GICR |=(1<<INT0);
	sei();
	while(1)
    {
     
    }
}

ISR (INT0_vect)
{
PORTD ^= (1<<interruptLed);	
}

