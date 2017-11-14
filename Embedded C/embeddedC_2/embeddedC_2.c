/*
 * embeddedC_2.c
 *
 * Created: 14/11/2017 06:59:55 ص
 *  Author: Hemed
 */ 



#include "embeddedC.h"

int main(void)
{
    while(1)
    {
    ALL_PORTS_OUTPUT ; 

	ALL_LEDS_ON ; 
	_delay_ms(500);
	ALL_LEDS_OFF ; 
	_delay_ms(500);
    }
}