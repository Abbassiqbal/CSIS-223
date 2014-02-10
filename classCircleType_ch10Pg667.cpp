// classCircleType_ch10Pg667.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "circleType.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <conio.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	circleType circle1(8);
	circleType circle2;

	double radius;

	cout << fixed << showpoint << setprecision(2);

	cout << "circle1 - radius: " << circle1.getRadius()
		 << ", area: " << circle1.area() << ", circumference: "
		 << circle1.circumference() << endl;

	cout << "circle2 - radius" << circle2.getRadius()
		 << ", area: " << circle2.area()
		 << ", circumference: " << circle2.circumference()
		 << endl << endl;

	cout << "Enter the radius of a circle: ";
	cin >> radius;
	cout << endl;

	circle2.setRadius(radius);

	cout << "After setting the radius." << endl;
	cout << "circle2 - radius: " << circle2.getRadius()
		 << ", area: " << circle2.area()
		 << ", circumference: " << circle2.circumference()
		 << endl; 

	_getch();
	return 0;
}

