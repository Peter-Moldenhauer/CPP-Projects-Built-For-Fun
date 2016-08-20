/**********************************************************************************
*Name: Peter Moldenhauer
*Date: 8/19/16
*Description: This program demonstrates the use of a member initializer list.
If you ever have a constant (const) variable in a class, you need to initialize
it with a member initializer list in the constructor definition of the
class .cpp file.
***********************************************************************************/
#include "Function.h"
#include <iostream>
using namespace std;

int main()
{
    Function myObject(10,20);  //create a Function object
    myObject.printToScreen();  //use the object to call a class function

    return 0;
}
