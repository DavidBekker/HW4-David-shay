#include "Date.h"
#include <iostream>
#include <iomanip>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS



Date::Date(int d, int m, int y) {
	setDay(d);
	setMonth(m);
	setYear(y);
}



void Date::setYear(int y) {
	if (y > 0)
		year = y;
	else
		year = 0;


}

void Date::setMonth(int m) {
	if (m >= 1 || m <= 12)
		month = m;
	else
		m = 0;
}

void Date::setDay(int d) {
	if (d >= 1 && d <= 30)
		day = d;
	else
		day = 0;
}


int Date::getYear() const {
	return year;
}
int Date::getMonth() const {
	return month;
}
int Date::getDay() const {
	return day;
}


bool Date::operator==(Date d) const
{
	if (this->day == d.day) {
		if (this->month == d.month) {
			if (this->year == d.year)
				return true;
		}

	}
	else return false;
}

bool Date::operator>(Date d) const
{
	if (this->year > d.year)
		return true;
	if (this->year == d.year) {
		if (this->month > d.month)
			return true;
		if (this->month == d.month)
		{
			if (this->day > d.day)
				return true;
		}

	}
	return false;
}

bool Date::operator<(Date d) const
{
	if (this->year < d.year)
		return true;

	if (this->year == d.year) {
		if (this->month < d.month)
			return true;
		if (this->month == d.month)
		{
			if (this->day < d.day)
				return true;
		}

	}
	return false;
}

ostream& operator<<(ostream& os, Date d)
{
	os << "(" << setw(2) << setfill('0') << d.day << "/" << setw(2) << setfill('0') << d.month << "/" << setw(4) << setfill('0') << d.year << ")";
	return os;
}
