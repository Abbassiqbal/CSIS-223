#ifndef _Temperature_H_
#define _Temperature_H_

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string>
#include <conio.h>
using namespace std;

class Temperature
{
private:
	double kelvin;
	double celsius;
	double fahrenheit;
public:
	Temperature();
	Temperature(double inKelvin, double inCelsius, double inFahrenheit);

	double getKelvin();
	double getCelsius();
	double getFahrenheit();
	void display();

	void setKelvin(double input);
	void setCelsius(double input);
	void setFahrenheit(double input);

	void convertKelvinToCelsius();
	void convertCelsiusToKelvin();
	void convertFahrenheitToCelsius();
	void Temperature::convertCelsiusToFahrenheit();
};

#endif _Temperature_H_