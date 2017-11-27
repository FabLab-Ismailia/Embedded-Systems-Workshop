/*
 * UART_uC_talk_to_PC.c
 *
 * Created: 25/11/2017 01:07:14 م
 *  Author: Hemed
 */ 


#include "avr_config.h"
volatile uint8 receivedData = 0 ;
void UART_init (uint16 baud);
#define RxLed   PB1 
int main(void)
{
	UART_init(9600);
	DDRB |= (1<<RxLed) ;
	DDRA = 0xff ; 
	sei();  
	//SREG |= (1<<7);     
	while(1)
    {
	/* if use polling */ 
    		
    /* 
       while (!(UCSRA & (1<<RXC))) ; 
	receivedData = UDR ;
	PORTB ^= 1<<RxLed ; 
    */
	
	
	}
	
}

void UART_init (uint16 baud)
{
	uint16 myBaudRate  ;
	/* baud rate configuration : */
	myBaudRate =(uint16)((F_CPU / (8L * baud)) -1 ) ; 
	/* casting uint16 to fit UBRRH - UBRRL */
	UBRRH = (uint8)(myBaudRate>>8);
	UBRRL = (uint8) myBaudRate;
	/* Double speed mode */
	UCSRA |= (1<<U2X); 
	/* Enable Rx - Tx - Enable interrupt */
	UCSRB |=(1<<RXCIE)|(1<<RXEN);
	/* Set frame format: 8data, 1stop bit */
	UCSRC |= (1<<URSEL) |(1<<UCSZ0) | (1<<UCSZ1) ;
}


ISR (USART_RXC_vect)
{
    	
	receivedData = UDR ;
	PORTB ^= 1<<RxLed ;			// Led indicator change its state if receive	
	if (receivedData == '1')        PORTA ^= 1<<PA0 ;    // led indicator 1
	else if  (receivedData == '2') PORTA ^= 1<<PA1 ;    // led indicator 2
	else if  (receivedData == '3')	  PORTA ^= 1<<PA2 ;   // led indicator 3
	else if(receivedData == '4')    PORTA ^= 1<<PA3 ;   // led indicator 4
	else if (receivedData == '5')   PORTA ^= 1<<PA4 ;   // led indicator 5
	 
}
