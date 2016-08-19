/******************************************************
 * Name: Peter Moldenhauer
 * Date: 8/17/16
 * Description: This is the main.cpp file to run the
 * date.h and date.cpp files
 * *****************************************************/

#include <iostream>
#include "date.h"
using namespace std;

int main()
{
	int month, day, year;
	
	cout << "\n--This program will print out a date to the screen.--" << endl;
	cout << "\nPlease enter in a number for a month (1 - 12): ";
	cin >> month;
	cout << "Please enter in a number for a day (1 - 31): ";
	cin >> day;
	cout << "Please enter in a number for a year (using 4 integers such as 1986): ";
	cin >> year;
	cout << endl;

	Date myDate(year, month, day);
	myDate.printDate();

	return 0;
}
