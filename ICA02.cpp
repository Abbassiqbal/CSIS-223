4// ICA02.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <conio.h>
using namespace std;

enum Shape
{
	Circle,
	Square
};

void promptCircRadius()
{
	cout << "Enter the circle's radius: ";
}

void promptSqareLength()
{
	cout << "Enter the sqaure's side: ";
}

double getCircRadius()
{
	double radius = 0.0;
	cin >> radius;
	return radius;
}

double getSquareLength()
{
	double length = 0.0;
	cin >> length;
	return length;
}

double calculateCircArea(double radius)
{
	const double PIE = 3.14159;
	double circArea;
	circArea = PIE * radius * radius;
	return circArea;
}

double calculateSquareArea(double length)
{
	double squareArea;
	squareArea = length * length;
	return squareArea;
}

void displayTotalOutputArea(double circArea, double squareArea)
{
	cout << fixed << showpoint << setprecision(3);
	cout << "\nThe area total is : " << circArea + squareArea << endl; // Sum of the totals of circle and square areas
}

int _tmain(int argc, _TCHAR* argv[])
{
	Shape myShape;
	myShape = Circle;
	int inputShape = 0;
	double radius = 0.0;
	double length = 0.0;
	double circArea = 0.0;
	double squareArea = 0.0;
	double TotalOutputArea = 0.0;

	do
	{
		cout << "Enter a shape type (0=Circle / 1=Square / ANy OTHER=Quit): ";
		cin >> inputShape; 

		if (inputShape == 0)
		{
			myShape = Circle;
			promptCircRadius();
			radius = getCircRadius();
		}

		else if (inputShape == 1)
		{
			myShape = Square;
			promptSqareLength();
			length = getSquareLength();
		}

		else
		{
			displayTotalOutputArea(circArea, squareArea);
		}

		circArea += calculateCircArea(radius);  // Calculating the running total of the area of the circle
		squareArea += calculateSquareArea(length);  // Calculating the running total of the area of the square

	} while (inputShape == Circle || inputShape == Square);

	_getch();
	return 0;
}