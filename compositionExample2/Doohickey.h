/***************************************************************************
This is the header file for the Doohickey class. This defines the instance
for a Doohickey. A Doohickey has a particular weight.
****************************************************************************/

#ifndef DOOHICKEY_H
#define DOOHICKEY_H

class Doohickey
{
    public:
        Doohickey();
        void setWeight(int weightIn);
        int getWeight();

    private:
        int weight;
};

#endif // DOOHICKEY_H
