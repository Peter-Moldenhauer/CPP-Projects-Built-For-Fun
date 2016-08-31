#include <sstream> //need the string stream class to output a string + int
#include "Person.h"

Person::Person(){
    name = "undefined";
    age = 0;
}

Person::Person(string newName, int newAge){
    name = newName;
    age = newAge;
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
