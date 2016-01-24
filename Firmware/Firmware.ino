#include "Global.h"

void setup() 
{
	Serial.begin(9600);
	Serial.println("start");
	
	motor.setMicroSteps(fullStep);
	
}

void loop() 
{	
	int sample = potentiometer.read(); //read potentiometer value
	
	int direction = (sample > 512); //divide the 12 bits range to 2 parts
	int steps = 10;	//number of stepper steps each time
	int interval = map(abs(512 - sample), 0, 512, 8000, 2000); //Faster when far from midpoint. in uS
	
	motor.write(direction, steps, interval);
		
	delay(20);
  
}
