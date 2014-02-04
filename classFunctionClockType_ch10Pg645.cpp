// classFunctionClockType_ch10Pg645.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <conio.h>

using namespace std;

class clockType
{
public:
	void setTime(int, int, int);
	void getTime(int&, int&, int&) const;
	void printTime() const;
	void incrementSeconds();
	void incrementMinutes();
	void incrementHours();
	bool equalTime(const clockType&) const;
	clockType(int, int, int); // constructor with parameters
	clockType (); // constructor without parameters

private:
	int hr;
	int min;
	int sec;
};

int _tmain(int argc, _TCHAR* argv[])
{
	clockType myClock;
	clockType yourClock;

	int hours;
	int minutes;
	int seconds;

	myClock.setTime(5, 4, 30);

	cout << "myClock: ";
	myClock.printTime();
	cout << endl;

	cout << "yourClock: ";
	yourClock.printTime();
	cout << endl;

	yourClock.setTime(5, 45, 16);

	cout << "After setting, yourClock: ";
	yourClock.printTime();
	cout << endl;

	if (myClock.equalTime(yourClock))
		cout << "Both times are equal."
			 << endl;
	else
		cout << "The two times are not equal."
			 << endl;

	cout << "Enter the hours, minutes, and seconds: ";
	cin >> hours >> minutes >> seconds;
	cout << endl;

	myClock.setTime(hours, minutes, seconds);

	cout << "New myClock: ";
	myClock.printTime();
	cout << endl;

	myClock.incrementSeconds();

	cout << "After incrementing myClock by "
		 << "one second, myClock: ";
	myClock.printTime();
	cout << endl;

	myClock.getTime(hours, minutes, seconds);

	cout << "hours = " << hours
		 << ", minutes = " << minutes
		 << ", seconds = " << seconds << endl;

	_getch();
	return 0;
}

// All functions below should be in a separate header file,
// make separate header file for each later

void clockType::setTime(int hours, int minutes, int seconds) 
{
	if (0 <= hours && hours < 24)
		hr = hours;
	else 
		hr = 0;

	if  (0 <= minutes && minutes < 60)
		min = minutes;
	else 
		min = 0;

	if (0 <= seconds && seconds < 60)
		sec = seconds;
	else
		min = 0;
}

void clockType::getTime(int& hours, int& minutes, int& seconds) const
{
	hours = hr;
	minutes = min;
	seconds = sec;
}

void clockType::printTime() const
{
	if (hr < 10)
		cout << "0";
	cout << hr << ":";

	if (min < 10)
		cout << "0";
	cout << min << ":";

	if (sec < 10)
		cout << "0";
	cout << sec << ":";
}

void clockType::incrementHours()
{
	hr++;
	if (hr > 23)
		hr = 0;
}

void clockType::incrementMinutes()
{
	min++;
	if (min > 59)
	{
		min = 0;
		incrementHours();
	}
}

void clockType::incrementSeconds()
{
	sec++;
	if (sec > 59)
	{
		sec = 0;
		incrementMinutes();
	}
}

bool clockType::equalTime(const clockType& otherClock) const
{
	return (hr == otherClock.hr 
		&& min == otherClock.min
		&& sec == otherClock.sec);
}

clockType::clockType (int hours, int minutes, int seconds)
{
	if (0 <= hours && hours < 24)
		hr = hours;
	else
		hr = 0;
	if (0 <= minutes && minutes < 60)
		min = minutes;
	else
		min = 0;
	if (0 <= seconds && seconds < 60)
		sec = seconds;
	else
		sec = 0;

	setTime(hours, minutes, seconds);
}

clockType::clockType() // default constructor
{
	hr = 0;
	min = 0;
	sec = 0;
}
/*clockType::clockType(int hours, int minutes, int seconds)
{
	setTime(hours, minutes, seconds);
}*/

