#ifndef _LivingRoom_H_
#define _LivingRoom_H_

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <conio.h>
using namespace std;

class LivingRoom
{
private: 
	int tvSize;
	string sofaColor;
	string typeOfGameConsole;
public:
	LivingRoom(); // Default constructor
	LivingRoom(int inTvSize, string inSofaColor, string inGameConsole); // constructor with parameters 
	int getTvSize() const; // Function to return the value of the TV size
	string getSofaColor() const; // Function to return the value of the sofa color
	string getTypeOfGameConsole() const; // Function to return the value of type of game console
	void diplay() const; // Function to print out the values of each member variable

	void setTvSize(int intput); // Function to set the size of the TV
	void setSofaColor(string color); // Function to set the color of the sofa
	void setTypeOfGameConsole(string gameConsole); // Function to set the type of game console
	void LivingRoom::setLivingRoom(int inTvSize, string inSofaColor, string inGameConsole); // Function to set the value of the living room with appropiate member variables
};

#endif