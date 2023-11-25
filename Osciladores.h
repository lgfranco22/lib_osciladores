/*
  osciladores.h

  arquivo header
*/


#ifndef Osciladores_h
#define Osciladores_h

#include "Arduino.h"

class Osciladores
{
  public:
	Osciladores(int pin);
	void osc_1k();
	void osc_2k();
	void osc_5k();
	void osc_10k();
	void osc_50k();

  private:
	int _pin;
};




#endif