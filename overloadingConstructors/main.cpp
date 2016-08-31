/*****************************************************************************************************
*Name: Peter Moldenhauer
*Date: 8/31/16
*Description: This program demonstrates the concept of constructor overloading with parameters. In a
class you can have as many constructors as you would like as long as they have different parameters.
When you create a class object, C++ will use the specific constructor for that object that matches up
with the constructor parameters in the class .cpp file.

Remember: You can have multiple functions (constructors) with the same name as long as they have
different parameters. They have to differ with the parameter type or the number of parameters.

Remember: When you create an object from a class this is called instantiation. You instantiate a class
when you create an object from it.
******************************************************************************************************/

#include <iostream>
#include "Person.h"
using namespace std;

int main()
{
    Person person1; //create an object with no parameters - use default constructor
    Person person2("Peter"); //create object with the constructor with 1 parameter
    Person person3("Peter", 30); //create object with constructor with 2 parameters

    cout << person1.toString() << endl;
    cout << person2.toString() << endl;
    cout << person3.toString() << endl;

    return 0;
}
