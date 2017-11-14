/*
 * embeddedC_3.c
 *
 * Created: 14/11/2017 07:10:24 ص
 *  Author: Hemed
 */ 


#include "embeddedC.h"

int main(void)
{   
	/* make all ports output */
	ALL_PORTS_OUTPUT ; 
    
	/* loops */
	while(1)
    {
     for (int a = 0 ; a<8 ; a++) 
	 {
	 PORTB ^= (1<<a) ;
	 _delay_ms(500) ; 	 
	 }
	  
     
    }
}