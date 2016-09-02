/********************************************************************************************************
*Name: Peter Moldenhauer
*Date: 9/2/16
*Description: This program demonstrates the concept of dynamic allocation of memory.
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

    ~Animal(){
        cout << "Destructor called" << endl;
    }

    void setName(string name) {this->name = name;}

    void speak() const {cout << "My name is: " << name << endl;} //use const in this function because you do not want to change the name variable - you want to make sure it stays the same as how it began in the class
};


int main()
{
    //You can allocate memory for any kind - below example is for an int:
    int *pInt = new int;
    *pInt = 8;
    cout << *pInt << endl;
    delete pInt;

    //allocate memory for a class object below:
    Animal *pAnimal = new Animal;
    pAnimal->setName("Peter");
    pAnimal->speak();
    delete pAnimal;

    //allocate memory for an array of class objects:
    Animal *pAnimal2 = new Animal[10]; //allocate memory for 10 Animal objects
    pAnimal2[5].setName("George");
    pAnimal2[5].speak();
    delete [] pAnimal2; //include [] after delete so C++ knows your deleting an array

    //allocate memory for an array of char type
    char *pChar = new char[1000];
    delete [] pChar;

    return 0;
}
