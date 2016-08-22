#include "People.h"
#include "Birthday.h"
#include <iostream>
using namespace std;

People::People(string x, Birthday bo)
: name(x), dateOfBirth(bo)
{
    //name = x;    Do not do it this way! Use a member initializer list as seen above
    //dateOfBirth = bo;
}

void People::printInfo(){
    cout << name << " was born on ";
    dateOfBirth.printDate();  //using the name of the object passed into the People class, we can access the objects function from the Birthday class using the dot operator
}
