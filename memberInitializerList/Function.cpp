#include "Function.h"
#include <iostream>
using namespace std;

Function::Function(int a, int b) //constructor with two int parameters
: regVar(a),  //This is the member initializer list, regVar is assigned the value of parameter "a"
constVar(b)   //The constVar is assigned the value of parameter "b"
{             //Note: the member initializer list is placed IN-BETWEEN the constructor prototype parenthesis and the curly braces!!!
}             //Note: Also note that there is NOT a semi-colon after the last item in the member initializer list

void Function::printToScreen(){
    cout << "The regular variable is " <<  regVar << " and the constant variable is " << constVar << "." << endl;
}
