// NumberCubed.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int cubeNumber(int num, int exponent);

int main()
{
    cout << "Welcome!\n";
    cout << "Enter a number and Ill cube it for ya!\n";
    int num = 0;
    cin >> num;

    cout << "The cube of " << num << " is " << cubeNumber(num, 3);
}

int cubeNumber(int num, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }
    else {
        return num * cubeNumber(num, exponent - 1);
    }
}
