/***************************************************************
** Author: Peter Moldenhauer
** Date: 7/6/16
** Description: This program demonstrates the use of the
**conditional operator. The conditional operator is an
**alternative way to write if/else statement logic.
****************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int currentTemp = 50;
    int niceDays = 0;
    int notSoNiceDays = 0;

    cout << "Current temp is assigned 50." << endl;
    cout << "Nice days start at 0, not so nice days start at 0 also.\n" << endl;

    //conditional operator below
    currentTemp > 60 ? niceDays += 1 : notSoNiceDays += 1;
    //niceDays += 1 is executed if currentTemp>60 is true
    //notSoNiceDays += 1 is executed if currentTemp>60 is false
    cout << "Nice days is now " << niceDays << endl;
    cout << "Not so nice days is now " << notSoNiceDays << endl;

    //Reset variables back to 0
    niceDays = 0;
    notSoNiceDays = 0;

    cout << "\nThe above conditional operator expression is equivalent to the below if/else statements.\n" << endl;

    //if/else statements below
    if (currentTemp > 60)
        niceDays += 1;
    else
        notSoNiceDays += 1;

    cout << "Nice days is now " << niceDays << endl;
    cout << "Not so nice days is now " << notSoNiceDays << endl;

    return 0;
}
