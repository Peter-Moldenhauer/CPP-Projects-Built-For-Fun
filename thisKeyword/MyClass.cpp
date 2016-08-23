#include "MyClass.h"
#include <iostream>
using namespace std;

MyClass::MyClass(int num)
{
    m = num;  //assign the integer that was passed as an argument to m
}

//The below function shows the three different ways to print out the m variable. Two of the ways use the "this" keyword
void MyClass::printToScreen(){
    cout << "m = " << m << endl;  //using the variable m tells c++ to assume to use the current object
    cout << "this->m = " << this->m << endl;  //using the this keyword tells c++ that you want to explicitly use the address of the current object
    cout << "(*this).m = " << (*this).m << endl;  //here the "this" pointer is dereferenced to access the m variable
}
