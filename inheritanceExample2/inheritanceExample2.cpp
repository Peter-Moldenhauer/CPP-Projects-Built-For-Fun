/********************************************************************************************************
*Name: Peter Moldenhauer
*Date: 9/2/16
*Description: This program demonstrates the concept of inheritance.
*********************************************************************************************************/

#include <iostream>
using namespace std;

class Animal {
public:
    void speak(){cout << "Grrrr" << endl;}
};

//create a new class that is similar to the first one, but it just has some extra functionality
//create a class Cat - note that Cat is a type of animal, this is important with inheritance
//we will take the Animal class and create a child class (or subclass) to make the Cat class
//the subclass is a type of whatever the first class is (super class)
class Cat: public Animal { //with the : public Animal, this means that Cat is basically the same as Animal
    //we can add new functions in Cat that Animal does not have
public:
    void jump() { cout << "Cat jumping!" << endl; }
};

class Tiger: public Cat {
public:
    void attackAntelope() { cout << "Attacking!" << endl; }
};

int main()
{
    Animal a;
    a.speak();

    Cat cat;
    cat.speak();
    cat.jump(); //added additional function in Cat class, even though Animal class does not have jump function

    Tiger tiger;
    tiger.speak();
    tiger.jump();
    tiger.attackAntelope();

    //Note that there is a hierarchy of classes above
    //Animal is a super-class of Cat, Cat is a super-class of Tiger

    return 0;
}
