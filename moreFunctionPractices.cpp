// moreFunctionPractices.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <conio.h>

using namespace std;

void prompthoursWorked()
{
	cout << "Enter number of hours worked: ";
}

void promptpayRate()
{
	cout << "Enter amount paid per hour: ";
}

double gethoursWorked()
{
	double hoursWorked;
	cin >> hoursWorked;
	return hoursWorked;
}

double getpayRate()
{
	double payRate;
	cin >> payRate;
	return payRate;
}

double calculateIncome(double hoursWorked, double payRate)
{
	double income;
	income = hoursWorked * payRate;
	return income;
}

void displayIncomeOutput(double income)
{
	cout << fixed << showpoint << setprecision(2);
	cout << "Your income is " << income << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	string firstName, lastName;
	double hoursWorked = 0.0;
	double payRate = 0.0;
	double income = 0.0; 

		cout << "Enter first and last name: ";
		cin >> firstName >> lastName;

		prompthoursWorked();
		hoursWorked = gethoursWorked();

		promptpayRate();
		payRate = getpayRate();

		income = calculateIncome(hoursWorked, payRate);

		displayIncomeOutput(income);

	_getch();
	return 0;
}

