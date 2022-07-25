#pragma once
#include <string>

class Vehicle
{
	int m_year;
	int m_miles;
	std::string m_brand;

public:
	Vehicle(int miles, int year, std::string brand);
	Vehicle();
	~Vehicle();

	virtual void Drive(int miles) { };
	void Display();

	
};