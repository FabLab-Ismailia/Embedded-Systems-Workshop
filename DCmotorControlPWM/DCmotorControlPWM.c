/*
 * DCmotorControlPWM.c
 * Created: 10/11/2017 12:54:02 ص
 *  Author: Hemed
 */ 


#include "avr_config.h"
#define motor   PD0
#define switch1 PD1 
#define switch2 PD2
#define switch3 PD3
#define PRESSED 0
#define FullSpeed 100 
#define HalfSpeed 50 
#define quarterSpeed 25
void controlSpeedPWM (sint8 speed);
int main(void)
{
	DDRD |= (1<<motor) ;			// make pind0 as output to the motor 	
    DDRD &=(~(1<<switch1));			//  switch 1 
	DDRD &=(~(1<<switch2));			//  switch 2 
	DDRD &=(~(1<<switch3));			//	switch 3
	/* Enable pull-up resistors */
	PORTD |=(1<<switch1) ; 
	PORTD |=(1<<switch2) ; 
	PORTD |=(1<<switch3) ; 
	
	while(1)
    {
	if (((PIND & (1<<switch1)) == PRESSED)) controlSpeedPWM(FullSpeed);    		
    else if (((PIND & (1<<switch2)) == PRESSED)) controlSpeedPWM(HalfSpeed);
	else if (((PIND & (1<<switch3)) == PRESSED)) controlSpeedPWM(quarterSpeed);
	else PORTD &=(~(1<<motor));    
    }
}

void controlSpeedPWM (sint8 speed)
{
if (speed == 100)
{
PORTD |= (1<<motor);
}	

else if (speed == 50)
{
PORTD |= (1<<motor);
_delay_ms(50);
PORTD &=(~(1<<motor));
_delay_ms(50);	
}

else if (speed == 25)
{
	PORTD |= (1<<motor);
	_delay_ms(25);
	PORTD &=(~(1<<motor));
	_delay_ms(75);
}

}



