#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

class Person{
private:
    string name;
    int age;
public:
    Person(); //default constructor
    Person(string newName) {name = newName; age = 0;}; //constructor with 1 parameter
    Person(string newName, int newAge); //constructor with 2 parameters
    string toString();
};

#endif // PERSON_H
