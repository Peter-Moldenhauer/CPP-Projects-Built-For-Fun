#ifndef MONSTER_H
#define MONSTER_H

class Monster: public Enemy {  //A monster is an enemy (inherits from the Enemy class)
    public:
        void attack();
};

#endif // MONSTER_H
