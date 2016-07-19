/********************************************************************************
** Name: Peter Moldenhauer
** Date: 7/19/2016
** Description: This program outputs the months and days per month of
**a calendar using two arrays. It uses an array of string objects to hold the month
**names and an int array to hold the number of days in each month. Both arrays are
**initialized with initialization lists.
*********************************************************************************/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    const int NUM_MONTHS = 12;

    string monthName[NUM_MONTHS] = //declare an array of string data type for the months of the year
    {
        "January", "February", "March", "April", "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    int monthDays[NUM_MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; //declare an array of ints for the corresponding number of days in each month

    for (int i = 0; i < NUM_MONTHS; i++)
    {
        cout << setw(9) << left << monthName[i] << " has ";
        cout << monthDays[i] << " days." << endl;
    }
    cout << endl;
    return 0;
}

