// coderStokesSolution.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "LivingRoom.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <conio.h>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	LivingRoom myLivingRoom;

	cout << fixed << showpoint << endl;
	cout << setw(45) << "coderStokes Living Room" << endl << endl;

	myLivingRoom.setLivingRoom(40, "brown", "Xbox360");
	myLivingRoom.diplay();

	_getch();
	return 0;
}

