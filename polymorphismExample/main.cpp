/*********************************************************************************************************
*Name: Peter Moldenhauer
*Date: 8/23/16
*Description: This program demonstrates the concept of polymorphism. Polymorphism basically allows you to
use the same function of a class that is inherited to other classes but with different outcomes. In this
program, polymorphism is used to call the same attack function (in an Enemy class) on many different
objects (ninja, monster, etc). Since all of the objects (ninjas and monsters) are all enemies (inherited
from the Enemy class) this makes it possible.
***********************************************************************************************************/

#include "Enemy.h"
#include "Ninja.h"
#include "Monster.h"
#include <iostream>
using namespace std;

int main()
{
    Ninja ninjaObj; //Create a Ninja object
    Monster monsterObj;  //Create a Monster object

    //Now create two Enemy objects (below) - one for ninja and one for monster
    Enemy *enemy1 = &ninjaObj; //Because all ninjas are enemies, we can assign the address of the ninja object to an enemy pointer
    //Anything an enemy can do a ninja can do...makes sense?
    Enemy *enemy2 = &monsterObj;

    //Remember whenever we are working with pointer objects we need to use the arrow member selection operator
    enemy1->setAttackPower(20);  //Any enemy object you can call an attack power because they all have an attackPower
    //So, when we set the attackPower of enemy1 to 20, it knows to apply it to the ninja object
    //So, even though we are setting the attackPower with enemy, it knows that enemy1 is pointing to a ninja object
    //So this means that ninja's attackPower is going to be 20
    //Remember, anything an enemy can do a ninja can do. A ninja is just a more specific type of enemy
    enemy2->setAttackPower(50);

    //So now with each of the objects (ninjaObj and monsterObj) we can call attack and it will give us our own custom attack
    ninjaObj.attack();
    monsterObj.attack();
    //We kind of used a combination of two different classes.
    //Using the general Enemy class we set the attack power
    //Then, whenever it attacks it will use the attackPower for a specific object

    return 0;
}
