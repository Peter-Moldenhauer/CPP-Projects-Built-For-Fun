#ifndef DAUGHTER_H
#define DAUGHTER_H

//Using inheritance (below) grabs any public functions/variables etc and makes them public in the new class. (The constructor of the base class is left alone though)
class Daughter: public Mother  //This means that all of the public info in the Mother class will now be public in the Daughter class
{
    public:
        Daughter();

};

#endif // DAUGHTER_H
