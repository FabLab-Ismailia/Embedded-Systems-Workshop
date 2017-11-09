  /*
  debuncing solving problem
  mohammed hemed
  */
 
 #include "avr_config.h" 
 /* write some macros to simplify the code  */
 #define switch_not_pressed  1
 #define switch_pressed      0
 sint8 test_press (void); 
  
  int main(void) {
  
  DDRD |= (1<<PD0) ;		// make pin0 output  
  DDRD &=(~(1<<PD1)) ;		// make pin1 input 
  PORTD |=(1<<PD1);			// Enable internal pull up resistor
  sint8 test_sw1 = 0 ;		// variable to store the return value of test press function
  DDRD |= (1<<PD2); 
  PORTD |=(1<<PD2); 
 while(1)
  {
  test_sw1 = test_press() ;
  if (test_sw1 == switch_pressed )  PORTD |= (1<<PD0);
  else  PORTD &=(~(1<<PD0)) ;
  }

  }
  sint8 test_press (void)
  {
	  sint8 switch_state  = switch_not_pressed ;
	  if ((PIND & (1<<PD1)) == switch_pressed )  _delay_ms(20) ;
	  if ((PIND & (1<<PD1)) == switch_pressed )  switch_state = switch_pressed ;
	  return switch_state ;
  }