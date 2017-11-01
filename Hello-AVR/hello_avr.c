/*
 * hello avr :) code
 * Created: 11/08/2017 05:05:53 م
 *  Author: Hemed
 */ 

#include "avr_config.h"
int main(void)
{   
	sint8 led = PD6 ; 
	DDRD |= 1<<led ; 
    while(1)
    {
	PORTD |= 1<<led ; 	
	_delay_ms(100);
    PORTD &=(~(1<<led));
	_delay_ms(100);
	}
}

