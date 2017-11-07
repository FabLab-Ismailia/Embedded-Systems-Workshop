/* C sourc file of motor library 
	by mohammed hemed 
*/
#include "avr_config.h"
#include "motors.h"

void DCrotateClkwise (sint8 motorNum)
{
if (motorNum==1)
{	
motorPort |= (1<<DcMotor1Pin1);  
motorPort &=(~(1<<DcMotor1Pin2));
}
else if (motorNum == 2)
{
motorPort |= (1<<DcMotor2Pin1);
motorPort &=(~(1<<DcMotor2Pin2));	
}
}

void DCrotateAntiClkwise (sint8 motorNum)
{
	if (motorNum==1)
	{
		motorPort |= (1<<DcMotor1Pin2);
		motorPort &=(~(1<<DcMotor1Pin1));
	}
	else if (motorNum == 2)
	{
		motorPort |= (1<<DcMotor2Pin2);
		motorPort &=(~(1<<DcMotor2Pin1));
	}
}



void DCstop (sint8 motorNum)
{
if (motorNum == 1)
{
	motorPort &=(~(1<<DcMotor1Pin1));
	motorPort &=(~(1<<DcMotor1Pin2));
}
else if (motorNum == 2)
{
    motorPort &=(~(1<<DcMotor2Pin1));
	motorPort &=(~(1<<DcMotor2Pin2));
}
	
}


void servoPosition (uint8 position) 
{
if (position == 90) 
{
for (int x = 0 ; x <=50 ; x++)
{
	motorPort |= (1<<servoSignal);
    _delay_ms(1); 
	motorPort &=(~(1<<servoSignal));
	_delay_ms(19);
}
}
else if (position == 180) 
{
for (int x = 0 ; x <=50 ; x++)
{
	motorPort |= (1<<servoSignal);
    _delay_ms(2); 
	motorPort &=(~(1<<servoSignal));
	_delay_ms(18);
}	
}
else if (position == 0)
{
for (int x = 0 ; x <=50 ; x++)
{
	motorPort |= (1<<servoSignal);
    _delay_us(1500); 
	motorPort &=(~(1<<servoSignal));
	_delay_us(18500);
}		
}	
}
