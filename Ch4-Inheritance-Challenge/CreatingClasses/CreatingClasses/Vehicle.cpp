#include "Vehicle.h"
#include <iostream>

using namespace std;

Vehicle::Vehicle(int miles, int year, std::string brand)
	: m_miles(miles)
	, m_year(year)
	, m_brand(brand)
{
}

Vehicle::Vehicle()
	: m_miles(0)
	, m_year(2022)
	, m_brand("undefined")
{
}

Vehicle::~Vehicle()
{
}

void Vehicle::Display()
{
	cout << "Year: " << m_year << endl;
	cout << "miles: " << m_miles << endl;
	cout << "Brand: " << m_brand << endl;
}
