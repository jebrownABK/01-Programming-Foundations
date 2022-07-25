// CreatingClasses.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Car.h"
#include "Vehicle.h"
#include "Boat.h"
#include "Airplane.h"

using namespace std;

int main()
{
	Car myCar(0, 2022, "Volkswagon");
	myCar.Display();
	cout << "Let's take a drive!" << endl;
	myCar.Drive(75, false);
	cout << "Let's finish this drive already!" << endl;
	myCar.Drive(300, true);
	myCar.Display();

	cout << endl;

	Boat myBoat(90, 2000, "Shippy");
	myBoat.Display();
	cout << "Let's go for a ride!" << endl;
	myBoat.Drive(15, false);
	cout << "Time to head back!" << endl;
	myBoat.Drive(15, true);
	myBoat.Display();

	cout << endl;

	Airplane myAirplane(5000000, 2012, "Delta");
	myAirplane.Display();
	cout << "Let's take a flight!" << endl;
	myAirplane.Fly(30000, true);
	cout << "Flight attendants, prepare for landing..." << endl;
	myAirplane.Fly(2000, false);
	myAirplane.Display();

}