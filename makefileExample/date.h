#include <iostream>
using namespace std;

#ifndef DATE_H
#define DATE_H

class Date
{
	private:
		int m_year;
		int m_month;
		int m_day;

	public:
		Date(int y, int m, int d);
		void setDate(int y, int m, int d);
		int getYear();
		int getMonth();
		int getDay();
		void printDate();
};

#endif
