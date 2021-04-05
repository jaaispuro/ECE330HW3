#include <iostream>
#include <string>
#include "HeartRates.h"
#include <ctime>

using namespace std;

HeartRates::HeartRates(string first, string last, int uMonth, int uDay, int uYear)
{
	setFirstName(first);
	setLastName(last);
	setMonth(uMonth);
	setDay(uDay);
	setYear(uYear);
}

void HeartRates::setFirstName(string first)
{
	firstName = first;
}

string HeartRates::getFirstName() const
{
	return firstName;
}

void HeartRates::setLastName(string last)
{
	lastName = last;
}

string HeartRates::getLastName() const
{
	return lastName;
}

void HeartRates::setMonth(int uMonth)
{
	month = uMonth;
}

int HeartRates::getMonth() const
{
	return month;
}

void HeartRates::setDay(int uDay)
{
	day = uDay;
}

int HeartRates::getDay() const
{
	return day;
}

void HeartRates::setYear(int uYear)
{
	year = uYear;
}

int HeartRates::getYear() const
{
	return year;
}

int HeartRates::getAge(){
	time_t tt;
	time ( &tt );
	tm TM = *localtime( &tt );

	int cYear;
	cYear = 1900 + TM.tm_year;

	int age = cYear - getYear();
	return age;
}

int HeartRates::getMaxHeartRate(int age)
{
	int max = 220 - age;
	return max;
}

void HeartRates::getTargetHeartRate(int max)
{
	int upper = max * .85;
	int lower = max * .5;
	cout<< "Target Heart rate is from " << lower << " bpm to " << upper << "bpm."<< endl;
}


