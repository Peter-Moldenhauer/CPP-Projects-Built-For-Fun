/********************************************************************************************************
*Name: Peter Moldenhauer
*Date: 9/6/16
*Description: This program demonstrates how C++ can output octal and hexadecimal numbers automatically
using stream formatting.
*********************************************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int myNumber = 13;

    cout << "Oct = " << oct << myNumber << endl; //octal representation
    cout << "Hex = " << hex << myNumber << endl; //hexadecimal representation
    cout << "Dec = " << dec << myNumber << endl;

    return 0;
}
