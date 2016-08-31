/********************************************************************************************************
*Name: Peter Moldenhauer
*Date: 8/31/16
*Description: This program demonstrates the use of constructor initialization lists. In this program,
the constructor initialization list is in the Person.cpp file. Here, in the constructor that takes two
parameters, after the round brackets of the parameter list type a : and then the name of the private
member you wish to initialize along with the parameter name in round brackets. An initialization list is
also used with the default constructor.

Note: Initialization lists are just for constructors, can't use them for get/set functions!
*********************************************************************************************************/

#include <iostream>
#include "Person.h"
using namespace std;

int main()
{
    Person person1("Peter", 30); //the constructor of person2 object will print out the memory address of person2
    Person person2("Rachel", 26); //the constructor of person3 object will print out the memory address of person3
    Person person3;

    cout << person1.toString() << endl;
    cout << person2.toString() << endl;
    cout << person3.toString() << endl;

    return 0;
}
