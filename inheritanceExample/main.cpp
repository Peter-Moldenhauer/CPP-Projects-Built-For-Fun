/*********************************************************************************************************
*Name: Peter Moldenhauer
*Date: 8/23/16
*Description: This program demonstrates the concept of inheritance. Inheritance is the idea that you
can inherit things from another class. Instead of copy/pasting functions and variables from one class
to another class, you can just inherit one class to another to use the same functions. This way you do
not need to type out the same functions in multiple classes. In this program, the Daughter class will
inherit the items from the Mother class.
Note: Whenever you inherit from a class, the class that you inherit from is called the "base class" (so in
this example Mother is the base class). The class that is inheriting (gets the info from another class) is
the "derived class".
***********************************************************************************************************/

#include <iostream>
#include "Mother.h"
#include "Daughter.h"
using namespace std;

int main()
{
   Mother mom;  //create an object of the Mother class
   mom.sayName();  //call the sayName function in the Mother class

   Daughter sally;  //create an object of the Daughter class
   sally.sayName();  //call the sayName function that is inherited through the Mother class

    return 0;
}
