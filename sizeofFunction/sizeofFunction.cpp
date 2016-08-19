/*****************************************************************************
*Name: Peter Moldenhauer
*Date: 8/19/16
*Description: This program demonstrates the use of the sizeof function.
The sizeof function determines the size of something (array, variable, etc)
in bytes. The sizeof function is used a lot when working with pointers.
******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    cout << "--This program demonstrates the use of the sizeof() function.-- \n" << endl;

    char c;
    int i;
    double d;

    cout << "The number of bytes a char variable takes up in memory is: " << sizeof(c) << endl;
    cout << "The number of bytes an int variable takes up in memory is: " << sizeof(i) << endl;
    cout << "The number of bytes a double variable takes up in memory is: " << sizeof(d) << endl;

    //If an array of 10 doubles is created, we know that each double is 8 bytes so the array should take up 80 bytes (8*10)
    double myDoubleArray[10];
    cout << "The number of bytes an array of 10 doubles takes up in memory is: " << sizeof(myDoubleArray) << endl;
    //The sizeof() function can be used to find out how many elements are in an array
    //If for example, the user creates an array and you don't know how many elements are in the array.
    //Then, you can use the sizeof() function to find the total size of the array then divide that number by the sizeof() an individual element of the array.
    cout << "The number of elements that are in the array of doubles is: " << sizeof(myDoubleArray) / sizeof(myDoubleArray[0]) << endl;

    return 0;
}
