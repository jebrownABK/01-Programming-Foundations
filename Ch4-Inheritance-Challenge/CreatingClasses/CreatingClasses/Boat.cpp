#include "Boat.h"
#include <iostream>

using namespace std;

Boat::Boat(int miles, int year, std::string brand)
	:Vehicle(miles, year, brand)
{
}

Boat::Boat()
	: Vehicle()
{
}

Boat::~Boat()
{
}

void Boat::Drive(int miles, bool dockBoat)
{
	cout << "~Sailing " << miles << " miles~" << endl;
	if (dockBoat)
	{
		DockBoat();
	}
	else
	{
		m_isDocked = false;
		cout << "Nothin like the fresh open sea..." << endl;
		cout << "..." << endl;
	}
}

void Boat::DockBoat()
{
	m_isDocked = true;
	cout << "Docking..." << endl;
}