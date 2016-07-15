/*******************************************************************
** Name: Peter Moldenhauer
** Date: 7/13/2016
** Description: This program demonstrates the use of a simple
**function. The program takes two ints, passes them by reference
**into a function and then the function swaps the values of the
**two ints.
*********************************************************************/

#include <iostream>
using namespace std;

void swapNums(int &x, int &y);  //function prototype

int main()
{
    int a = 5, b = 10;  //declare two ints and assign values

    cout << "\nThe starting values of a and b..." << endl;
    cout << "a: " << a << " b: " << b << endl;

    swapNums(a, b);  //call the function with the two ints as arguments

    cout << "The ending values of a and b after the swapNums function..." << endl;
    cout << "a: " << a << " b: " << b << endl;

    return 0;
}

/*******************************************************************
* This is the swapNums function. This function takes two ints
* that were passed by reference and swaps their values.
* Note: Need to pass by reference or else the values will not
* actually get swapped.
********************************************************************/
void swapNums(int &x, int &y)  //define the function, this is a void function so nothing gets returned
{
    int temp = x;  //temporary holder for a value so that the two values can be swapped
    x = y;
    y = temp;
}
