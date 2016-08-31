#include <sstream> //need the string stream class to output a string + int
#include "Person.h"

Person::Person(){
    age = 0;
    name = "";
}

Person::Person(string name, int age){
    this->name = name; //you can use this instead of changing the parameter name and doing something like: name = newName; - if newName was a parameter
    this->age = age;

    cout << "Memory location of current object: " << this << endl; //We can do this to see that "this" is just a pointer with the memory address of the current object
}

string Person::toString(){
    stringstream ss; //create a string stream object

    //add data to the stream below:
    ss << "Name: ";
    ss << name;
    ss << "; age: ";
    ss << age;

    return ss.str(); //return the string that was created with the string + int
}
