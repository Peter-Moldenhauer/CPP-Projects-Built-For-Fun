/********************************************************************************************************
*Name: Peter Moldenhauer
*Date: 9/2/16
*Description: This program demonstrates the use of returning a class object from a function. At the start
of the program an Animal class is created with all of its members/functions declared and defined in-line.
Below the class is a function that creates a new Animal object and returns a pointer to that object. In
the main function then, another Animal object is created which has the returned object address assigned
to it (the object returned from the separate function above the main function).
Note: Even though the "new" was created in a different function, you still have to call "delete" in the
main function.
*********************************************************************************************************/

#include <iostream>
using namespace std;

class Animal {
private:
    string name;
public:

    Animal() {
        cout << "Animal created. " << endl;
    }

    Animal(const Animal& other) : //copy constructor with initialization list
            name(other.name) {
        cout << "Animal created by copying. " << endl;
    }

    ~Animal(){
        cout << "Destructor called" << endl;
    }

    void setName(string name) {this->name = name;}

    void speak() const {cout << "My name is: " << name << endl;} //use const in this function because you do not want to change the name variable - you want to make sure it stays the same as how it began in the class
};

Animal *createAnimal(){
    Animal *pAnimal = new Animal();
    pAnimal->setName("Sally");
    return pAnimal; //when we return a pointer we create a copy of the pointer
}

int main()
{
    Animal *pFrog = createAnimal(); //create an Animal pointer object and assign to it the pointer of the pointer object created in the outside function
    pFrog->speak();
    delete pFrog; //call delete to deallocate the memory created with "new" in the createAnimal function

    return 0;
}
