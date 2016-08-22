/****************************************************************************************
*Name: Peter Moldenhauer
*Date: 8/19/16
*Description: This program demonstrates the concept of composition. Composition refers
to how classes can contain objects of another class as its member. This file contains
the main function which allows the other files of the other classes to run.
*****************************************************************************************/

#include "People.h"
#include "Birthday.h"
#include <iostream>
using namespace std;

int main()
{
    Birthday birthObject(7,9,1986);  //create a Birthday object and give it the 3 pieces of info it needs (month day year)

    People peterMoldenhauer("Peter Moldenhauer", birthObject);  //create a People object and give it the 2 pieces of info it needs, a name (string) and a Birthday object (use the birthObject that was just created above)

    peterMoldenhauer.printInfo();  //call the printInfo function in the People class object to print out the info for that specific object

    return 0;
}
