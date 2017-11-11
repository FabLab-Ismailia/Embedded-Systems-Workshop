



/* function declarations or function prototypes :*/ 
void blinkLed (void) ; 
void WantedblinkLed (int led ,int delay_time);
uint8 ReadPORTA (void);
int maxValue (int a , int b) ;

/*function with no arguements - no return type */
/* function body */
void blinkLed (void) {
PORTA |= (1<<PA0);
_delay_ms(500);
PORTA &=(~(1<<PA0)) ;
_delay_ms(500);
} 


/* function that take two arguements and - return nothing */
void WantedblinkLed (int led ,int delay_time) 
{
PORTA |= (1<<led);
_delay_ms(delay_time);
PORTA &=(~(1<<led)) ;
_delay_ms(delay_time);	
}

/* function that takes no arguements - and return int */
/* this function to know the state of PORTA */
uint8 ReadPORTA (void) {
return PORTA ; 
}

/* function that take two arguements and return the max */
int maxValue (int a , int b) 
{
if (a > b) return a ; 
else return  b ;
}


