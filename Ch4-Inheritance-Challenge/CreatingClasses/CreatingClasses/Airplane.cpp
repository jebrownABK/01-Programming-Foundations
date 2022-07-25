#include "Airplane.h"
#include <iostream>

using namespace std;

Airplane::Airplane(int miles, int year, std::string brand)
	: Vehicle(miles, year, brand)
	, m_isFlying(false)
{
}

Airplane::Airplane()
	: Vehicle()
	, m_isFlying(false)
{
}

Airplane::~Airplane()
{
}

void Airplane::Fly(int miles, bool isFlying)
{
	cout << "~Flying " << miles << " miles~" << endl;
	if (isFlying) {
		cout << "Oh look, a bird!" << endl;
		cout << "..." << endl;
	}
	else
	{
		LandPlane();
	}
	
}

void Airplane::LandPlane()
{
	m_isFlying = false;
	cout << "Landing..." << endl;
}
