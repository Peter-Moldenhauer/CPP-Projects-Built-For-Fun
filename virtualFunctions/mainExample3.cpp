/*****************************************************************************************************
** Name: Peter Moldenhauer
** Date: 10/26/16
** Description: This program demonstrates inheritance and virtual functions
******************************************************************************************************/

#include <iostream>
using namespace std;

class Animal {
    public:
        virtual void id() { cout << " animal ";}
};

class Cat : public Animal {
    public:
        virtual void id() { cout << " cat ";}
};

class Dog : public Animal {
    public:
        virtual void id() { cout << " dog ";}
};

int main(){

    Animal *pA[] = {new Animal, new Dog, new Cat};

    for (int i = 0; i < 3; i++)
        pA[i]->id();  // prints out: animal dog cat
    // NOTE: if the functions were not made virtual, this would just print out: animal animal animal

    return 0;
}
