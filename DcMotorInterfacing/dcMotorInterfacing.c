/*
 * dcMotorInterfacing.c
 *
 * Created: 07/11/2017 02:09:22 م
 *  Author: Hemed
 */ 


#include "avr_config.h"
#include "motors.h"
int main(void)
{   
	DDRD |= (1<<PD0) | (1<<PD1) | (1<<PD2) | (1<<PD3); 
    while(1)
    {
    DCrotateClkwise(1);			// rotate motor1 clkwise 
	_delay_ms(5000) ;			// wait 5 seconds
	DCrotateAntiClkwise(1);		// rotate motor1 anticlkwise 
	_delay_ms(5000);			// wait 5 seconds 
	DCstop(1);					// stop motor1 
	_delay_ms(3000) ;			// wait 3 seconds 			
    
	DCrotateClkwise(2);			// rotate motor2 clkwise
	_delay_ms(5000) ;			// wait 5 seconds
	DCrotateAntiClkwise(2);		// rotate motor2 anticlkwise
	_delay_ms(5000);			// wait 5 seconds
	DCstop(2);					// stop motor2
	_delay_ms(3000) ;
	}
}