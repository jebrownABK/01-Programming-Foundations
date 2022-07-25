#pragma once
#include "Vehicle.h"

class Boat : public Vehicle
{
	bool m_isDocked;
public:
	Boat(int miles, int year, std::string brand);
	Boat();
	~Boat();

	void Drive(int miles, bool dockBoat);
	void DockBoat();
};