/********************************************************************************************************
*Name: Peter Moldenhauer
*Date: 9/1/16
*Description: This program demonstrates the use of the const keyword. When const is used with a variable
the variable is not a variable anymore (because it cannot change/vary) but rather it is a constant. Also,
you should get in the habit of using const in class functions when you know the particular function is
not going to change the involved class variables at all.
*********************************************************************************************************/

#include <iostream>
using namespace std;

class Animal {
private:
    string name;
public:
    void setName(string name) {this->name = name;}
    void speak() const {cout << "My name is: " << name << endl;} //use const in this function because you do not want to change the name variable - you want to make sure it stays the same as how it began in the class
};

int main()
{
    const double PI = 3.141592; //simple example of declaring a constant, use all caps for constant name
    cout << PI << endl; //print out constant, program would not run if you tried to assign a new value to PI

    cout << "---------------------" << endl;

    Animal animalObj;
    animalObj.setName("Freddy");
    animalObj.speak();

    cout << "----------------------" << endl;

    int value = 8;
    int *pValue = &value;
    cout << *pValue << endl; //dereference pointer to print value

    int number = 11;
    pValue = &number; //error with this: int *const pValue = &value;
    *pValue = 12; //error with this: const int *pValue = &value;
    cout << *pValue << endl;

    /*** In above example, you can write out const three ways:
    const int *pValue = &value; //this is a pointer that points to a constant int value - the int value cannot be changed!!!
    int *const pValue = &value; //this is a constant pointer that points to an int variable - the pointer cannot be changed (cant change what address the pointer is pointing to)
    const int * const pValue = &value; //this is a constant pointer that points to a constant int value - neither pointer nor int can be changed! ***/

    return 0;
}
