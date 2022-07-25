#include "Car.h"
#include <iostream>

using namespace std;

Car::Car(int miles, int year, std::string brand)
	: Vehicle(miles, year, brand)
	, m_isParked(false)
{
}

Car::Car()
	: Vehicle()
	, m_isParked(true)
{
}

Car::~Car()
{
}

void Car::Drive(int miles, bool parkCar)
{
	cout << "~Driving " << miles << " miles~" << endl;
	if (parkCar)
	{
		ParkCar();
	}
	else
	{
		m_isParked = false;
		cout << "Are we there yet?" << endl;
		cout << "..." << endl;
	}
	
}

void Car::ParkCar()
{
	m_isParked = true;
	cout << "Parking..." << endl;
}