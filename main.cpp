#include <iostream>
#include "HeartRates.h"
#include <stdio.h>

using namespace std;

int main(){
	string firstName, lastName;
	int month, day, year, age, max;

	cout << "Enter First Name: ";
	cin >> firstName;
	cout << "Enter Last Name: ";
	cin >> lastName;
	cout << "Enter Birth Month (as an integer): ";
	cin >> month;
	cout << "Enter Birth Day (as an integer): ";
	cin >> day;
	cout << "Enter Birth Year (as an integer): ";
	cin >> year;

	HeartRates thisRate(firstName, lastName, month, day, year);
	
	age = thisRate.getAge();
	max = thisRate.getMaxHeartRate(age);
	cout << "Your maximum heart rate for your age ( " << age << ") is " << max << "." << endl;
	thisRate.getTargetHeartRate(max);
}
