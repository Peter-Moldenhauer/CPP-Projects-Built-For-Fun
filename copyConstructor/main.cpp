/********************************************************************************************************
*Name: Peter Moldenhauer
*Date: 9/4/16
*Description: This program demonstrates the use of copy constructors. The purpose of a copy constructor
is to copy the fields of one (the first) object created to additional objects created.
*********************************************************************************************************/

#include <iostream>
using namespace std;

class Animal {
private:
    string name;

public:
    Animal() { cout << "Animal created." << endl; } //constructor
    Animal(const Animal& other): name(other.name) { cout << "Animal created by copying." << endl; } //copy constructor - other is just a name I chose
    //Note: with copy constructors, you NEED the const Animal& other reference code
    void setName(string name) {this->name = name; }
    void speak() const {cout << "My name is: " << name << endl; }
};

int main()
{
    Animal animal1;
    animal1.setName("Freddy");
    animal1.speak();

    Animal animal2 = animal1; //"copy" animal1 to animal2, 1 way to use copy constructor! - without a copy constructor, the default constructor will only run once because copies of objects will not not run their own constructors
    animal2.speak(); //this would result in a blank name, but since I used the initializer list -name(other.name) in the copy constructor line, it will contain the name of the first object (unless we set this object to having a new name - below)
    animal2.setName("Bob");
    animal2.speak();

    Animal animal3(animal1); //Another way to create an object using copy constructor
    animal3.speak();
    animal3.setName("Sally");
    animal3.speak();

    return 0;
}
