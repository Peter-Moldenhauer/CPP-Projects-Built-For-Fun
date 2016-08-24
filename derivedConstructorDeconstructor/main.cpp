/*********************************************************************************************************
*Name: Peter Moldenhauer
*Date: 8/23/16
*Description: This program demonstrates on what happens when a derived class inherits constructors and
deconstructors from another class. Technically, the derived class does not actually inherit these two
items. When a derived class object is created in main, first the base class constructor is created
automatically. Then, the derived class constructor is created. Then the derived class deconstructor is
executed and finally the base class deconstructor is executed.
***********************************************************************************************************/

#include <iostream>
#include "Mother.h"
#include "Daughter.h"
using namespace std;

int main()
{
    Daughter daughterObj;
    //The very first thing that this program will do is invoke the base class's constructor ("I am the mother constructor")
    //Then, the derived class's constructor is invoked ("I am the daughter constructor")
    //So, whenever a class is inherited, it sets up all of the base classes first before it does anything on the derived class
    //If there was a hierarchy of inherited classes (great-grandmother, grandmother, mother etc) then the highest (base class) constructor would be executed first

    //Once the derived class's (daughter) deconstructor is called, this sets off a chain of the deconstructors being called
    //Daughter's deconstructor is called and then the Mother's deconstructor is called

    //Output of the program below (output of a Daughter object being created and that is it)
    //I am the mother constructor!
    //I am the Daughter constructor!
    //Daughter deconstructor!
    //Mother deconstructor

    return 0;
}
