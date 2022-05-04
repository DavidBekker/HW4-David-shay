#ifndef __Date
#define __Date 
#include <iostream>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS

class Date
{
	int day, month, year;
	friend class ManagementTrips;
public:
	Date(int d = 1, int m = 1, int y = 1);

	void setYear(int y);
	void setMonth(int m);
	void setDay(int d);

	int getYear()const;
	int getMonth()const;
	int getDay()const;

	bool operator == (Date d) const;
	bool operator > (Date d) const;
	bool operator < (Date d) const;
	friend ostream& operator<<(ostream& os, Date d); //new operator instead of printDate
};
#endif
