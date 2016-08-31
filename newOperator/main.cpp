/***************************************************************************************************
*Name: Peter Moldenhauer
*Date: 8/30/16
*Description: This program demonstrates the use of "new" operator. The new operator is used in this
program to dynamically create a class object. The object is then deleted before the end of the
program. When using the new operator make sure to always delete it also to free up memory!
****************************************************************************************************/

#include <iostream>
using namespace std;

class Animal{
private:
    string name;

public:
    Animal(){ //constructor
        cout << "Animal created." << endl;
    }

    Animal(const Animal& other) :  //copy constructor
            name(other.name){
        cout << "Animal created by copying." << endl;
    }

    ~Animal(){  //deconstructor
        cout << "Destructor called" << endl;
    }

    void setName(string name){  //setName function
        this->name = name;
    }

    void speak() const {  //speak function
        cout << "My name is: " << name << endl;
    }
};

int main()
{
    /*How you would create an object statically (without the new operator):
    Animal cat;
    cat.setName("Fluffy");
    cat.speak();
    */

    //using the new operator to create an Animal object:
    Animal *catPointer = new Animal(); //this allocates memory for a single Animal object
    catPointer->setName("Fluffy"); //can also do: (*catPointer).setName("Fluffy");
    catPointer->speak(); //can also do: (*catPointer).speak();
    delete catPointer; //this deallocates the memory that the new object was taking up

    //To prevent memory leaks, call delete after every new call!


    return 0;
}
