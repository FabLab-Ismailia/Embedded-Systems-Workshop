/* interrupt library header file */
/* mohammed hemed */
#include "avr_config.h"

#ifndef EXT_INT_CONFIG_H_
#define EXT_INT_CONFIG_H_ 


#define LOW        1 
#define RISING     2 
#define FALLING    3 
#define ANY_CHANGE 4


/* FunctionS prototypes  */

void setIntPins (uint8 intNum); 

void enableSpecificExternalINT (uint8 intNum) ;

void setIntMode (uint8 intNum , uint8 intMode);


#endif 
