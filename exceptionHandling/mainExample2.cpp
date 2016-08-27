/**********************************************************************************************************************
*Name: Peter Moldenhauer
*Date: 8/25/16
*Description: This program demonstrates the concept of exception handling. An exception is a way of handling an error
that might occur when a program is running. In this program, I built a simple calculator and the try block checks to
see if division by 0 occurs.
************************************************************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    try{
       int num1;
       cout << "Enter first number: " << endl;
       cin >> num1;

       int num2;
       cout << "Enter second number: " << endl;
       cin >> num2;

       if(num2 == 0){ //If the user enters in 0 as the second number, throw an error
            throw 0;  //As soon as the user enters 0, C++ jumps down to the catch block
       }

       cout << "The division of num1 and num2 is " << num1/num2 << endl; //If the user does not enter 0 for second number just complete division

    //You can have multiple catch blocks to catch different types of error messages
    }catch(...){ //The ... catches "general types of error messages" not just one specific type such as an int.
        //Use the ... when you want any error messages to be caught when they occur
        cout << "You can't divide by 0" << endl;//Note: the "error number" is not passed in here so now you have to just type everything out in the cout statement
    }

    return 0;
}

