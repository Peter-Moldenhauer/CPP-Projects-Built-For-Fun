/********************************************************************************************************
*Name: Peter Moldenhauer
*Date: 8/31/16
*Description: This program demonstrates how type casting can be used to turn an int into a double or
vice versa.
*********************************************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    double value1 = (double)7/2; //cast the int 7 into a double so that the division will lead to a double result
    //remember: in C++ if you divide two ints together, the result will be an int - at least one number must be a double to return a double
    cout << value1 << endl;

    int value2 = (int)7.3; //cast the double 7.3 into an int
    cout << value2 << endl;

    return 0;
}
