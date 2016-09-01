/********************************************************************************************************
*Name: Peter Moldenhauer
*Date: 8/31/16
*Description: This program demonstrates multiple uses of pointers. Pointers are variables that point to
or store memory addresses.
*********************************************************************************************************/

#include <iostream>
using namespace std;

void manipulate(double *pointerValue){ //function with a pointer to a double as a parameter
    cout << "2) Value of double in manipulate function: " << *pointerValue << endl;
    *pointerValue = 10.0; //dereference the pointer to assign a new value to it
    cout << "3) Value of double in manipulate function: " << *pointerValue << endl;
}

int main()
{
    int intValue = 99; //declare an int variable which is assigned 99
    int *pointerValue = &intValue; //declare a pointer to an int variable which is assigned the address of intValue

    cout << "Int value: " << intValue << endl;
    cout << "Pointer to int address: " << pointerValue << endl;
    cout << "Int value via pointer: " << *pointerValue << endl; //dereference the pointer to get the int value

    cout << "=====================================" << endl;

    double doubleValue = 123.4;
    cout << "1) doubleValue: " << doubleValue << endl;
    manipulate(&doubleValue); //call manipulate function and pass the address of doubleValue
    cout << "4) doubleValue: " << doubleValue << endl;

    return 0;
}
