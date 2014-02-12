// ICA04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Temperature.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string>
#include <conio.h>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	double input;
	Temperature temperature;

	cout << "Enter a kelvin temperature: ";
	cin >> input;
	temperature.setKelvin(input);
	temperature.display();
	cout << endl << endl;

	cout << "Enter a celsius temperature: ";
	cin >> input;
	temperature.setCelsius(input);
	temperature.display();
	cout << endl << endl;

	cout << "Enter a fahrenheit temperature: ";
	cin >> input;
	temperature.setFahrenheit(input);
	temperature.display();
	cout << endl;

	_getch();
	return 0;
}

