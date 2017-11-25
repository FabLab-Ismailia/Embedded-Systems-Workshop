/* SevenSegment library 
   comAndoe - comKathode types
   mohammed hemed 
*/
#include "avr_config.h"
#ifndef SevenSegment_H_
#define SevenSegment_H_

#define sevenSegPort    PORTD 
#define enablePort      PORTC
#define enableDigit1    PC0 
#define enableDigit2    PC1 

void sevSegComAnode(char number);
void sevSegComKathode(char number); 

#endif   