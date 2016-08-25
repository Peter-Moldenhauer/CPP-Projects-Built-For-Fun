/**********************************************************************************************************************
*Name: Peter Moldenhauer
*Date: 8/24/16
*Description: This program demonstrates the concept of abstract classes and pure virtual functions. An
abstract class is just a class that contains a pure virtual function. Whenever you make a pure virtual function you
dont have a body, dont have any curly braces, you dont have any implementation at all - just has a =0 after the ().
Its just a function that says, any derived class NEEDS to overwrite this function. It is just kind of checking that
you are overwriting the function. Now, regular virtual functions have the option of being overwritten in the derived
class. So if you did not include an attack function code in the Ninja class for example, with a virtual function, c++
would just default to running the attack function code in the Enemy class. So in a pure virtual function, we NEED to
overwrite the attack function and give it some code to run. We cannot just run the =0 (if we chose not to include any
attack function code in the Monster or Ninja class).
************************************************************************************************************************/

#include <iostream>
using namespace std;

class Enemy { //This is an abstract class because it contains a pure virtual function (below)

    public:
        virtual void attack()=0;  //This is a pure virtual function
};

class Ninja: public Enemy {
    public:
        void attack(){
            cout << "Ninja attack!" << endl;
        }
};

class Monster: public Enemy {
    public:
        void attack(){ //If for example this function was commented out, the program would not run because it is being defaulted to run the Enemy attack function (since Monster does not have its own attack function) but it CANNOT do this because the Enemy attack function is a pure virtual function and NEEDS to be overwritten
            cout << "Monster attack!" << endl;
        }
};

int main()
{
    Ninja n;
    Monster m;
    Enemy *enemy1 = &n;
    Enemy *enemy2 = &m;

    enemy1->attack();
    enemy2->attack();
    return 0;
}
