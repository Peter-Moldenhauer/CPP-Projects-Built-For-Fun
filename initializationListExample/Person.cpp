#include <sstream> //need the string stream class to output a string + int
#include "Person.h"

Person::Person(): name(""), age(0){
    //initialization list that uses literal values but no parameters from the default constructor
    //can either put the initialization list here in the .cpp file or just put it in the header file and don't even write the function in the .cpp file because there is nothing to be implemented (nothing in the {})
}

Person::Person(string name, int age): name(name), age(age) {
    //the above initialization list will initialize the private variables with the parameter names
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
