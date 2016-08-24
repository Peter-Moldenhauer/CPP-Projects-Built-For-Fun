#include "Enemy.h"
#include "Monster.h"
#include <iostream>
using namespace std;

void Monster::attack(){
    cout << "I am a monster, I will bite you! -" << attackPower << endl;
}
