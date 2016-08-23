/************************************************************************************************
*Name: Peter Moldenhauer
*Date: 8/22/16
*Description: This program demonstrates the concept of operator overloading. Operator overloading
allows you to use C++ operators (+, *, -, /) and take these operators and change the way that they
are used. For example, through operator overloading C++ can add two custom made objects together.
In this program I will be adding two objects together.
**************************************************************************************************/

#include "MyClass.h"
#include <iostream>
using namespace std;

int main()
{
    //To run this program we need to first create two already existing MyClass objects, each that have a num that we can add together
    MyClass object1(10);
    MyClass object2(20);
    MyClass object3;  //We need to create a third object without giving it a num value because when we call the brand new object it initially does not have a num value

    object3 = object1 + object2; //Now with our overloaded operator C++ can add these objects together, it just looks at the function to perform the addition
    //When C++ sees the + sign, it knows to run the function
    //After the function (addition) is complete, object3 now equals the brand new object that was created in the function...object3 was previously just an empty (blank) object without a value to num
    //This can be used in place of something like: object3.num = object1.add(object2); OR object3=object1.add(object2);

    cout << object3.num << endl;  //print out the value of num of the third object

    return 0;
}
