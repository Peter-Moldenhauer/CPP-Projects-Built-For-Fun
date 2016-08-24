#ifndef DAUGHTER_H
#define DAUGHTER_H

class Daughter: public Mother  //This means that all of the public info in the Mother (public and protected, NOT private) class will now be public in the Daughter class
{
    public:
        void doSomething();

};

#endif // DAUGHTER_H
