/********************************************************
** Author: Peter Moldenhauer
** Date: 7/5/16
** Description: This program asks the user for a positive
**integer and then prints out all of the factors of that
integer.
*********************************************************/

#include <iostream>
using namespace std;

int main()
{
    int intEntered;
    char anotherInt;
    bool keepLooping = true;

    cout << "This program finds the factors of a positive integer. \n" << endl;
    while (keepLooping == true)
    {
        cout << "Please enter in a positive integer: ";
        cin >> intEntered;

        cout << "The factors of " << intEntered << " are: " << endl;
        for (int i=1; i<=intEntered; i++)
        {
            if (intEntered % i == 0)
                cout << i << endl;
        }
        cout << "Would you like to enter another integer? Y/N ";
        cin >> anotherInt;
        cout << endl;
        if (anotherInt == 'Y' || anotherInt == 'y')
            keepLooping = true;
        else
            keepLooping = false;
    }

    return 0;
}
