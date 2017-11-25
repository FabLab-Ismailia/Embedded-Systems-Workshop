/* Motors interfacing library */
/* this library work with 
   - DC motors 
   - SG90 9g micro servo 
   by : Mohammed hemed 
*/   
   

/* library name */
#ifndef MOTORS_H_
#define MOTORS_H_ 

/* define constants of the library */

#define motorPort   PORTD
#define DcMotor1Pin1 PD0
#define DcMotor1Pin2 PD1
#define DcMotor2Pin1 PD2
#define DcMotor2Pin2 PD3
#define servoSignal PD2

/* declare function prototypes */

void DCrotateClkwise (sint8 motorNum);
void DCrotateAntiClkwise (sint8 motorNum);
void DCstop (sint8 motorNum);
void setServoPosition (uint8 position);




#endif 