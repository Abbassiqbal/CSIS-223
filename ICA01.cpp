// ICA01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <conio.h>
#include <cmath>
using namespace std; 

const double PI = 3.14;

int _tmain(int argc, _TCHAR* argv[])
{
	double recWidth, recLength, circRadius;
	double recPerm, recArea;
	double circCum, circArea;

	cout << fixed << showpoint << setprecision(2);

	cout << "Enter the width of the rectangle: ";
	cin >> recWidth;

	cout << "Enter the length of the rectangle: ";
	cin >> recLength;

	cout << "Enter the radius of the circle: "; 
	cin >> circRadius; 
	cout << endl;

	recPerm = ((2 * recWidth) + (2 * recLength)); 
	recArea = recWidth * recLength;

	cout << fixed << showpoint << setprecision(4);
	circCum = PI * (2 * circRadius);
	circArea = PI * circRadius * circRadius;

	cout << "The rectangle perimeter is: " << static_cast<int>(recPerm) << endl;
	cout << "The rectangle area is: " << recArea << endl;
	cout << "The circle circumference is: " << circCum << endl;
	cout << "The circle area is : " << circArea << endl; 

	_getch();
	return 0;
}

