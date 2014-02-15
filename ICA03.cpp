// ICA03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Employee.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <conio.h>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{

	int count = 0;
	double sum = 0.0;
	double average = 0.0;
	double weeklyPay = 0.0;
	double totalCorpWeeklyPay = 0.0;

	Employee employee;

	ifstream fin;

	fin.open("input.dat");

	if (!fin)
	{
		cout << "Error opening file!" << endl;
		_getch();
		return -1;
	}

	while (!fin.eof())
	{
		fin >> employee.firstName;
		cout << "FILE RECORD: " << employee.firstName << " ";

		fin >> employee.lastName;
		cout << employee.lastName << " ";

		fin >> employee.hourlyRate;
		cout << employee.hourlyRate << " ";

		fin >> employee.weeklyHours;
		cout << employee.weeklyHours << " " << endl;

		count++;
		weeklyPay = employee.hourlyRate * employee.weeklyHours;
		sum += weeklyPay;

		cout << "WEEKLY PAY: $" << weeklyPay << endl << endl;
	}

	fin.close();

	totalCorpWeeklyPay += sum;
	cout << "\nTOTAL CORPORATE WEEKLY PAY: $" << totalCorpWeeklyPay;	

	_getch();
	return 0;
}