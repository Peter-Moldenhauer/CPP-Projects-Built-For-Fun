#ifndef ENEMY_H
#define ENEMY_H

class Enemy{  //this Enemy class is common to all enemies (ninja, monster etc)
    protected:
        int attackPower;  //all enemies (ninja, monster etc) will have an attackPower
    public:
        void setAttackPower(int a);
};

#endif // ENEMY_H
