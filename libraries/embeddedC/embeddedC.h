#ifndef EMBEDDEDC_H_
#define EMBEDDEDC_H_ 

#include "avr_config.h"

#define ALL_PORTS_OUTPUT (DDRA = DDRB = DDRC = DDRD = 0xff) 
#define ALL_PORTS_INPUT  (DDRA = DDRB = DDRC = DDRD = 0x00)
#define ALL_LEDS_ON  (PORTA = PORTB = PORTC = PORTD = 0xff) 
#define ALL_LEDS_OFF (PORTA = PORTB = PORTC = PORTD = 0x00)

/* function declarations or function prototypes :*/ 
void blinkLed (void) ; 

void toggleSpecificLed (sint8 portx ,sint8 ledNum ) ;
void setSpecificLed (sint8 portx ,sint8 ledNum) ;

uint8 ReadPORTA (void);

uint8 maxValue (uint8 a , uint8 b) ;
uint8 ReadSpecificPort (sint8 portx);






#endif