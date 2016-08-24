#include "Enemy.h"
#include "Ninja.h"
#include <iostream>
using namespace std;

void Ninja::attack(){
    cout << "I am a ninja, ninja chop! -" << attackPower << endl;
    //Even though each enemy (ninja, monster) will have an attack power, they will attack in their own way (they will have different values for their attacks. Ninja might be 20 and monster might be 50.
}

