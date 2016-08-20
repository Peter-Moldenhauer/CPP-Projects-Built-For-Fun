#include "Function.h"
#include <iostream>
using namespace std;

Function::Function(){
}

void Function::printToScreen(){
    cout << "I am a regular function. " << endl;
}

void Function::printToScreen2() const{
    cout << "I am a constant function. " << endl;
}
