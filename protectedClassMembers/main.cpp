/*********************************************************************************************************
*Name: Peter Moldenhauer
*Date: 8/23/16
*Description: This program demonstrates the use of protected class member items. Remember, a derived class
can inherit class information (variables, functions etc) from a base class. The derived class can only
inherit members that are public and protected from the base class. Private member items cannot be inherited
by the derived class. Note: when something is listed as protected, this means that 1) anything inside of
the class has access to it (like a private item) 2) any "friend" (C++ keyword) has access to it and 3) any
derived class that is inheriting from the class has access to it as well.
***********************************************************************************************************/

#include <iostream>
#include "Mother.h"
#include "Daughter.h"
using namespace std;

int main()  //This program will run but nothing will be printed out to the screen
{
    Daughter sally;
    sally.doSomething();

    return 0;
}
