// BiggestNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void populateArray(int theArray[], int size);
int getBiggest(int theArray[], int size);
void displayArray(int theArray[], int size);

int main()
{
	constexpr int arrSize = 5;
	int myArr[5];
	cout << "Welcome! Please enter 5 integers for the array." << endl;
	populateArray(myArr, arrSize);

	cout << "The array you've created is ";
	displayArray(myArr, arrSize);
	cout << endl;

	int biggestNumber = getBiggest(myArr, arrSize);
	cout << "The largest number in the array is " << biggestNumber << endl;
}

void populateArray(int theArray[], int size) {
	for (int i = 0; i < size; i++) {
		cin >> theArray[i];
	}
}

int getBiggest(int theArray[], int size) {
	int biggest = theArray[0];
	for (int i = 0; i < size; i++) {
		if (theArray[i] > biggest) {
			biggest = theArray[i];
		}
	}
	return biggest;
}

void displayArray(int theArray[], int size) {
	for (int i = 0; i < size; i++) {
		cout << theArray[i] << " ";
	}
}