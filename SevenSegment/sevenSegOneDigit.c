/*
 * sevenSegOneDigit.c
 * Created: 06/11/2017 10:14:07 م
 *  Author: Hemed
 */ 


#include "avr_config.h"
#define sevenSegPort	 PORTD 
void sevSegComAnode(char number) ;
void sevSegComKathode(char number) ;       
int main(void)
{
	DDRD = 0xff ;
	sevenSegPort = 0 ;		/* initialize seven segment port = 0 */ 			
	while(1)
    { 	
    for (int a = 0 ; a<=9 ; a++)
    {
	sevSegComAnode(a)  ; 
	_delay_ms(1000);	
    }
        
    }
}

     /* A function to pass the digit number 
      and display on the seven segment .
	********************************************/
	void sevSegComKathode (char number)
	   {   
		
		switch (number)
		{
			case 0:  sevenSegPort = 0b00111111 ;
			break ;
			case 1 : sevenSegPort = 0b00110000 ;
			break ;
			case 2 : sevenSegPort = 0b01011011 ;
			break ;
			case 3 : sevenSegPort = 0b01001111 ;
			break ;
			case 4 : sevenSegPort = 0b01100110 ;
			break ;
			case 5:  sevenSegPort = 0b01101101 ;
			break ;
			case 6 : sevenSegPort = 0b01111101 ;
			break ;
			case 7 : sevenSegPort = 0b00000111 ;
			break ;
			case 8 : sevenSegPort = 0b11111111 ;
			break ;
			case 9 : sevenSegPort = 0b01101111 ;
			break ;
			default : sevenSegPort = 0x00 ;
		}
	}
	
	void sevSegComAnode (char number)
	{
		
		switch (number)
		{
			case 0:  sevenSegPort = (~(0b00111111)) ;
			break ;
			case 1 : sevenSegPort = (~(0b00110000)) ;
			break ;
			case 2 : sevenSegPort = (~(0b01011011)) ;
			break ;
			case 3 : sevenSegPort = (~(0b01001111)) ;
			break ;
			case 4 : sevenSegPort = (~(0b01100110)) ;
			break ;
			case 5:  sevenSegPort = (~(0b01101101)) ;
			break ;
			case 6 : sevenSegPort = (~(0b01111101)) ;
			break ;
			case 7 : sevenSegPort = (~(0b00000111)) ;
			break ;
			case 8 : sevenSegPort = (~(0b11111111)) ;
			break ;
			case 9 : sevenSegPort = (~(0b01101111));
			break ;
			default : sevenSegPort = 0x00 ;
		}
	}