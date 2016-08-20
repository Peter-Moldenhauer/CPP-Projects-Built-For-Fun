/*****************************************************************************
*Name: Peter Moldenhauer
*Date: 8/19/16
*Description: This program demonstrates the concept of const objects. A const
object can only be used with const functions in the class.
******************************************************************************/
#include "Function.h"
#include <iostream>
using namespace std;

int main()
{
    Function myObject;  //create a regular Function object
    myObject.printToScreen(); //call a regular function from the object

    //Note: const objects can ONLY call class functions that are const themselves!!
    const Function myConstObject; //create a const Function object
    myConstObject.printToScreen2();  //call the const function with the const object

    return 0;
}
