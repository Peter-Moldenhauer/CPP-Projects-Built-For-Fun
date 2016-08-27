/**********************************************************************************************************************
*Name: Peter Moldenhauer
*Date: 8/25/16
*Description: This program demonstrates the concept of exception handling. An exception is a way of handling an error
that might occur when a program is running.
************************************************************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    try{ //This is a try block, this is where we write the code that we want to "try" aka the code that we think an error might occur.
        int momsAge = 30;
        int sonsAge = 34; //a son cannot be older than his mom so this is where an error might occur

        if(sonsAge > momsAge){
            throw 99; //This is the error number that you want to "throw"
        }
    }catch(int x){ //this is the catch block. This tells C++ what to do if there is indeed an error. This is "catching the error" which allows you to pass in the throw number (99)
        //Note: if there is no error in the try block then the catch block is skipped altogether.
        cout << "son can not be older than mom, ERROR NUMBER: " << x << endl;
    }

    return 0;
}

