#include "date.h"

//Constructor
Date::Date(int y, int m, int d)
{
	m_year = y;
	m_month = m;
	m_day = d;
}

//setter
void Date::setDate(int y, int m, int d)
{
	m_month = m;
	m_day = d;
	m_year = y;
}

//getters
int Date::getYear()
{
	return m_year;
}

int Date::getMonth()
{
	return m_month;
}

int Date::getDay()
{
	return m_day;
}

void Date::printDate()
{
	cout << "The date entered is: " << m_month << "/" << m_day << "/" << m_year << endl;
}

