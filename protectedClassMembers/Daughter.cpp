#include <iostream>
#include "Mother.h"
#include "Daughter.h"
using namespace std;

void Daughter::doSomething(){
    publicVar = 1;  //Use the Daughter class to inherit its own publicVar variable and then assign a value to it
    protectedVar = 2; //Use the inherited protectedVar variable from Mother class
    //privateVar = 3;  //This is NOT allowed because you cannot inherit private class items. If this was not commented out, it would get an error!
}

