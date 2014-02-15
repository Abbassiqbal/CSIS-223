#include "stdafx.h"
#include "LivingRoom.h"

LivingRoom::LivingRoom()
{
	tvSize = 0;
	sofaColor = "";
	typeOfGameConsole = "";
}

LivingRoom::LivingRoom(int inTvSize, string inSofaColor, string inGameConsole)
{

}

int LivingRoom::getTvSize() const
{
	return tvSize;
}

string LivingRoom::getSofaColor() const
{
	return sofaColor;
}

string LivingRoom::getTypeOfGameConsole() const
{
	return typeOfGameConsole;
}

void LivingRoom::diplay() const
{

	cout << "In my living room I have a " << tvSize << " inch flat screen TV and " << endl;
	cout << "a sofa that is " << sofaColor << " with an " << typeOfGameConsole << " for my "
	     << "gaming pleasure" << endl;
}

void LivingRoom::setTvSize(int input)
{
	tvSize = input;
}

void LivingRoom::setSofaColor(string color)
{
	sofaColor = color;
}

void LivingRoom::setTypeOfGameConsole(string gameConsole)
{
	typeOfGameConsole = gameConsole;
}

void LivingRoom::setLivingRoom(int inTvSize, string inSofaColor, string inGameConsole)
{
	setTvSize(inTvSize);
	setSofaColor (inSofaColor);
	setTypeOfGameConsole(inGameConsole);
}