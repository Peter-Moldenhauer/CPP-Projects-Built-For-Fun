/*****************************************************************************************************
** Name: Peter Moldenhauer
** Date: 10/26/16
** Description: This program demonstrates the "friend" keyword. Every class can have friends. And a
** friend of the class is something that is totally separate from the class but it still has access
** to the stuff inside of the class (variables, functions).
** In order to make a function a friend, you need to first prototype it inside of the class.
** Note: You need to type friend before the function prototype to make it a friend function
** Note: A class has to "give away" its friendship
******************************************************************************************************/

#include <iostream>
using namespace std;

class MyClass {
    public:
        MyClass() { myVar = 0;}  // constructor
    private:
        int myVar;

    friend void theFriendFunction(MyClass &mco);  // friend function parameter inside class that takes a MyClass object as a parameter
};

void theFriendFunction(MyClass &mco){ // define the friend function outside of the class
    mco.myVar = 99;   // function now has access to the class object's data (private variable in this example)
    cout << mco.myVar << endl;
}

int main(){
    MyClass object1;  // create a class object
    theFriendFunction(object1); // use the friend function (with object as a parameter) to access class data

    return 0;
}
