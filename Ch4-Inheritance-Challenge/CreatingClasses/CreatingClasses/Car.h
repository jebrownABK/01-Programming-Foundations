#pragma once
#include <string>
#include "Vehicle.h"

class Car : public Vehicle
{
	bool m_isParked;
public:
	//Constructors
	Car(int miles, int year, std::string brand);
	Car();

	//Destructor
	~Car();

	//Member functions
	void Drive(int miles, bool parkCar);
	void ParkCar();
};