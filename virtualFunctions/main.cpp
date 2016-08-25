/*********************************************************************************************************
*Name: Peter Moldenhauer
*Date: 8/24/16
*Description: This program demonstrates the concept of virtual functions. Normally, all of the class files
would be in separate files but to make things easier to see, I put everything in this one file.
***********************************************************************************************************/

#include <iostream>
using namespace std;

class Enemy {
    public:
        virtual void attack(){}  //whenever you make a function virtual, it means you will be using it polymorphically.
};  //This virtual function (above) is a "template" for the specific attack functions we want to use with Ninja and Monster

class Ninja: public Enemy {
    public:
        void attack(){
            cout << "Ninja attack!" << endl;
        }
};

class Monster: public Enemy {
    public:
        void attack(){
            cout << "Monster attack!" << endl;
        }
};

int main()
{
    Ninja n;  //create a Ninja object
    Monster m;  //create a Monster object
    Enemy *enemy1 = &n;  //Assign the address of the Ninja object to an Enemy pointer
    Enemy *enemy2 = &m;  //Assign the address of the Monster object to an Enemy pointer
    enemy1->attack();  //Use the Enemy object to access the Ninja attack function
    enemy2->attack();  //Use the Enemy object to access the Monster attack function

    return 0;
}

/****************************************************************************************************
In this program when we use the virtual function (in the Enemy class) we are telling C++ that we will
be building a game with enemies in it and each enemy will have its own specific attack function. Now
whenever an enemy object is called, we are going to have an attack but we don't want to use the attack
function in the Enemy class, (this one is just a template that tells each class that inherits it that
the class will have an attack function) Instead, when we want to use an enemy object that has an attack
function, we want C++ to find out which address (which "type" of enemy) has that attack function and
call that attack.

Virtual functions are basically template functions. And any class that inherits virtual members (variables
or functions) is a polymorphic class. The great thing about polymorphism is that you can have the same
function that produces different results. You can have the same function with the same "type" of object
but you produce different results based on what address it is pointing to.
*******************************************************************************************************/
