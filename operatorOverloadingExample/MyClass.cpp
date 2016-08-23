#include "MyClass.h"
#include <iostream>
using namespace std;

MyClass::MyClass()
{
}

MyClass::MyClass(int x){
    num = x;
}

MyClass MyClass::operator+(MyClass anotherMyClassObj){
    MyClass brandNewObj; //Since we will be returning a brand new MyClass object, we need to create one here
    //So since we created a new object, we also need to create the new objects num variable value (below)
    //So basically we will add the 1st objects (object1 in main.cpp) num with the next objects num (object2 in main.cpp) together to get the third (the new object) num value (which is object3 in main.cpp)
    brandNewObj.num = num + anotherMyClassObj.num;
    return(brandNewObj); //This will return the brand new MyClass object
}
