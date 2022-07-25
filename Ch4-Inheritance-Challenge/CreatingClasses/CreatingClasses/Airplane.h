#pragma once
#include "Vehicle.h"

class Airplane : public Vehicle
{
	bool m_isFlying;
public:
	Airplane(int miles, int year, std::string brand);
	Airplane();
	~Airplane();

	void Fly(int miles, bool isFlying);
	void LandPlane();
};