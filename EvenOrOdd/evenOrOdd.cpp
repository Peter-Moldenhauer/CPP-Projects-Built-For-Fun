/***************************************************************
** Author: Peter Moldenhauer
** Date: 7/5/16
** Description: This program asks a user for a positive integer
**and then returns whether the integer is even or odd.
****************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Please enter a positive integer: ";
    cin >> num;

    //Note to remember: false is 0, true is always non-zero
    if (num % 2) //the remainder will be non-zero for odd numbers, which is equivalent to true
        cout << "The number you entered is an odd number." << endl;
    else
        cout << "The number you entered is an even number." << endl;

    return 0;
}
