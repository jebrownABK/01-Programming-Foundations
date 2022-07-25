// DisplayFactors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	cout << "Welcome! Give me a number and I'll give you its factors." << endl;
	int num;
	cin >> num;
	if (num <= 0) {
		cout << "Please enter a number greater than 0." << endl;
		cin >> num;
	}

	int counter = 2;
	cout << "The factors for " << num << " are..." << endl;
	cout << 1 << endl;
	while (counter <= num) {
		if (num % counter == 0) {
			cout << counter << endl;
		}
		counter++;
	}
}

