/*
 * adcReadVoltage.c
 *
 * Created: 22/11/2017 02:01:28 م
 *  Author: Hemed
 */ 


#include "avr_config.h"
//volatile uint8 adcRead ;
int main(void)
{	
	/* make the wanted channel as input */
	
	/* make portD as output to display the result */
	DDRD = 0xff ;
	/* Enable ADC */
	ADCSRA |= (1<<ADEN) ;
    /* ADC clock = 1000 000 / 8 = 125KHz */
	/* so prescaler = 8*/
	ADCSRA |= (1 << ADPS0) | (1 << ADPS1);
	/* Enable 8-bit mode */
	ADMUX |= (1<<ADLAR);
	/* choose the channel */
	ADMUX |=(1<<MUX0); // select channel one 
    
	while(1)
    {
    // start conversion 
	ADCSRA |= (1<<ADSC); 
	/* Wait until finish the conversion */
	while (ADCSRA &(1<<ADSC));
	/* store or display the value in PORTD */
	PORTD = ADCH ;
	
	//adcRead = ADCH ; 
	//PORTD = adcRead ;
    
	}
}