// SumAvgThreeNums.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int findSum(int num1, int num2, int num3);
float findAverage(int sum);

int main()
{
    cout << "Welcome!\n";
    cout << "Please enter a number between 1 and 10\n";
    int num1 = 0;
    cin >> num1;

    cout << "Please enter another number between 1 and 10\n";
    int num2 = 0;
    cin >> num2;

    cout << "Please enter one more number between 1 and 10\n";
    int num3 = 0;
    cin >> num3;

    int sum = findSum(num1, num2, num3);
    float average = findAverage(sum);

    cout << "Sum of numbers is " << sum << endl;
    cout << "average of numbers is " << average << endl;
}

int findSum(int num1, int num2, int num3)
{
    int sum = num1 + num2 + num3;
    return sum;
}

float findAverage(int sum)
{
    float average = static_cast<float>(sum) / 3.0;
    return average;
}
