
 /* external int example using the library */
  /* MOHAMMED HEMED */ 


#include "ext_int_config.h"

int main(void)
{   
	
    DDRD |= (1<<PD0) ;  
	
	/*setIntPins(INT0);
	GICR |=(1<<INT0);
	sei();
	*/
	setIntPins(INT1);
	setIntPins(INT2);
	setIntMode(INT2,RISING); 
    setIntMode(INT0,FALLING);
	setIntMode(INT1,RISING) ;
	enableSpecificExternalINT(INT0);
    enableSpecificExternalINT(INT1);
	enableSpecificExternalINT(INT2);

	while(1)
    {
         
    }
}


ISR (INT0_vect)
{
 PORTD ^= (1<<PD0);	
}

ISR (INT1_vect)
{
	PORTD ^= (1<<PD0);
}

ISR (INT2_vect)
{
	PORTD ^= (1<<PD0);
}
