/* 
   Avr Configuration and important librarries 
   needed in all codes
   by : Mohammed hemed 
*/


#ifndef AVR_CONFIG_H_
#define AVR_CONFIG_H_

/* CPU frequency */
#ifndef F_CPU
#define F_CPU 1000000
#endif

/* important libraries */
#include <avr\io.h>
#include <avr\interrupt.h> 
#include <util\delay.h>

/* data types shortcuts */
typedef signed char   	sint8 ;
typedef signed short  	sint16;
typedef signed long   	sint32;
typedef unsigned char 	uint8 ;
typedef unsigned short  uint16 ;
typedef unsigned long 	uint32;



#endif