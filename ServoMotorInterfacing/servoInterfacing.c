/*
 * servoInterfacing.c
 *
 * Created: 07/11/2017 02:50:23 م
 *  Author: Hemed
 */ 


#include "avr_config.h"
#include "motors.h"

int main(void)
{   
	DDRD |= (1<<PD5);
    while(1)
    {
        setServoPosition(0);
		_delay_ms(3000) ;
		setServoPosition(90);
		_delay_ms(3000);
		setServoPosition(180); 
		_delay_ms(3000);
    }
}