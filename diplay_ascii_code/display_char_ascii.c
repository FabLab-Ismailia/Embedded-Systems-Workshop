/*
 *  display ASCII code of English letters (a : z ) on led bar 
 * Author: Hemed
 */ 

#include "avr_config.h"
int main(void)
{
	DDRD = 0xff ;			// make portd as output to display characters on led bar 
    DDRB &=(~(1<<PB0)) ;	// make pin b as input   
	
	/* english characters from a to z */
	uint8 characters [] = "abcdefghijklmnopqrstuvwxyz" ; 
	uint8 a = 0 ;
	while(1)
    {
	 	
	if (!(PINB & (1<<PB0))) 
	{
	 _delay_ms(30); 
	 PORTD = characters[a++];
	 _delay_ms(1000) ;			
	if (a == 26) a = 0 ; 
	}
	
  }
	
  }
