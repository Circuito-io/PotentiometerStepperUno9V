#ifndef POTENTIOMETER
#define POTENTIOMETER

#include "arduino.h"

class Potentiometer
{
	public:
		Potentiometer(int pin);
		int read(); 
		
	private:
		const int analogPin;
		
};
#endif //POTENTIOMETER
