#include "stdafx.h"
#include "Temperature.h"



Temperature::Temperature()
{
	kelvin = 0;
	celsius = kelvin - 273.15;
	fahrenheit = celsius * 9.0 / 5.0 + 32.0;
}

Temperature::Temperature(double inKelvin, double inCelsius, double inFahrenheit)
{
	kelvin = inKelvin;
	celsius = inCelsius;
	fahrenheit = inFahrenheit;
}

double Temperature::getKelvin()
{
	return kelvin;
}

double Temperature::getCelsius()
{
	return celsius;
}

double Temperature::getFahrenheit()
{
	return fahrenheit;
}

void Temperature::display()
{
	cout << "TEMPERATURE::  K: " << kelvin << "  C: " << celsius << "  F: " << fahrenheit;
}

void Temperature::setKelvin(double input)
{
	kelvin = input;
	convertKelvinToCelsius();
	convertCelsiusToFahrenheit();
}

void Temperature::setCelsius(double input)
{
	celsius = input;
	convertCelsiusToKelvin();
	convertCelsiusToFahrenheit();
}

void Temperature::setFahrenheit(double input)
{
	fahrenheit = input;
	convertFahrenheitToCelsius();
	convertCelsiusToKelvin();
}

void Temperature::convertKelvinToCelsius()
{
	celsius = kelvin - 273.15;
}

void Temperature::convertCelsiusToKelvin()
{
	kelvin = celsius + 273.15;
}

void Temperature::convertFahrenheitToCelsius()
{
	celsius = (fahrenheit - 32.0) * 5.0 / 9.0;		
}

void Temperature::convertCelsiusToFahrenheit()
{
	fahrenheit = celsius * 9.0 / 5.0 + 32.0;
}