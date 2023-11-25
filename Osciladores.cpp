/*
  arquivo cpp

*/

#include "Arduino.h"
#include "Osciladores.h"


Osciladores::Osciladores(int pin)
{
	pinMode(pin, OUTPUT);
	_pin = pin;
}

void Osciladores::osc_1k()
{
	digitalWrite(_pin, HIGH);
	delayMicroseconds(500);
	digitalWrite(_pin, LOW);
	delayMicroseconds(500);
}

void Osciladores::osc_5k()
{
	digitalWrite(_pin, HIGH);
	delayMicroseconds(100);
	digitalWrite(_pin, LOW);
	delayMicroseconds(100);
}

void Osciladores::osc_10k()
{
	digitalWrite(_pin, HIGH);
	delayMicroseconds(50);
	digitalWrite(_pin, LOW);
	delayMicroseconds(50);
}

void Osciladores::osc_50k()
{
	digitalWrite(_pin, HIGH);
	delayMicroseconds(10);
	digitalWrite(_pin, LOW);
	delayMicroseconds(10);
}




