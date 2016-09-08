/********************************************************************************************************
*Name: Peter Moldenhauer
*Date: 9/8/16
*Description: This program demonstrates dynamic memory allocation with the use of the "new" operator.
*********************************************************************************************************/

#include <iostream>
#include <string>
using namespace std;

class Dog {
private:
    int weight;
    int age;

public:
    Dog() {  //default constructor
        weight = 10;
        age = 3;
    }

    Dog(int w, int a) { //constructor with parameters
        weight = w;
        age = a;
    }

    void myWeight() {
        cout << "My weight is " << weight << endl;
    }

    void myAge() {
        cout << "My age is: " << age << endl;
    }
};

int main()
{
    /***Example 1 - using the class above***/
    Dog *myDog = new Dog(); //create a new object with the default constructor call
    Dog *myDog2 = new Dog(50, 6); //create a new object with constructor with parameters

    (*myDog).myWeight(); //call the new object function with dot operator
    (*myDog2).myWeight(); //call the new object function with dot operator

    myDog->myAge(); //call the new object function with the arrow operator
    myDog2->myAge(); //call the new object function with the arrow operator

    delete myDog; //delete new object
    delete myDog2; //delete new object

    myDog = NULL; //set to null so you know that myDog now does not point to any allocated memory
    myDog2 = NULL; //set to null so you know that myDog2 does not point to any allocated memory


    /***Example 2 - using dynamic mem. alloc. to adjust for the number of objects***/
    int numberOfBusRiders;
    string nameOfRider;

    cout << "\nHow many people are getting on the Greyhound Bus? ";
    cin >> numberOfBusRiders;

    string *riderNames = new string[numberOfBusRiders]; //create an array to store names with the exact number of riders there are on the bus

    for (int i = 1; i <= numberOfBusRiders; i++){  //gather data into the array of the riderNames
        cout << "Please enter the name of rider #" << i << ": ";
        cin >> nameOfRider;
        riderNames[i-1] = nameOfRider;
    }

    cout << "The names of all of the people riding the Greyhound Bus are: " << endl;
    for (int i = 0; i < numberOfBusRiders; i++) { //print out all of the names in the riderNames array
        cout << riderNames[i] << endl;
    }

    delete [] riderNames;

    return 0;
}
