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
    Person(string name, int age); //constructor with two parameters

    string toString();
};

#endif // PERSON_H
