/********************************************************************************************************
*Name: Peter Moldenhauer
*Date: 8/31/16
*Description: This program demonstrates the use of the "this" keyword. The keyword "this" is a variable
(or pointer) that contains the memory location of each individual object that you create.
*********************************************************************************************************/

#include <iostream>
#include "Person.h"
using namespace std;

int main()
{
    Person person1;
    Person person2("Peter", 30); //the constructor of person2 object will print out the memory address of person2
    Person person3("Rachel", 26); //the constructor of person3 object will print out the memory address of person3

    cout << person1.toString() << "; memory location: " << &person1 << endl;
    cout << person2.toString() << "; memory location: " << &person2 << endl;
    cout << person3.toString() << "; memory location: " << &person3 << endl;

    return 0;
}
