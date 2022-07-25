// LeapYear.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Leap Year rules are as follows:
/*
Before the year 1582, leap years followed the Julian Calendar where a leap year occured every 4th year
From 1582 and beyond, leap year rules follow the Gregorian Calendar, which conforms to other rules
    Leap years are any year that can be exactly divided by 4
        EXCEPT if it can be exactly divided by 100, then it ISN'T
            EXCEPT if it can be exactly divided by 400, then it IS
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Please enter the current year" << endl;
    int year;
    cin >> year;
    if (year <= 0) {
        cout << "Please enter a year after year 0" << endl;
        cin >> year;
    }
    //Julian Calendar
    if (year < 1582) {
        if (year % 4 == 0) {
            cout << year << " is a leap year!" << endl;
        }
        else {
            cout << year << " is NOT a leap year." << endl;
        }
    }
    //Gregorian Calendar
    else {
        if (year % 4 != 0) {
            cout << year << " is NOT a leap year." << endl;
        }
        else {
            if (year % 100 == 0) {
                if (year % 400 == 0) {
                    cout << year << " is a leap year!" << endl;
                }
                else {
                    cout << year << " is NOT a leap year." << endl;
                }

            }
            else {
                cout << year << " is a leap year!" << endl;
            }
        }
    }
   
}
