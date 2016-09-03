/********************************************************************************************************
*Name: Peter Moldenhauer
*Date: 9/2/16
*Description: This program demonstrates the concept of encapsulation. Encapsulation refers to the idea
that you should make as many members/functions private as possible in a class. In addition to variables,
if you know you will not need to use a specific function outside of the class, then make that function
private.
*********************************************************************************************************/

#include <iostream>
using namespace std;

class Frog {
private:
    string name;
    string getName() { return name; } //this function is not used outside of the class so make it private
public:
    Frog(string name): name(name) {} //use a member initializer list to initialize name variable
    void info() { cout << "My name is: " << getName() << endl; } //call the getName function within this info function
};

int main()
{
    Frog frog("Freddy");
    frog.info();

    return 0;
}
