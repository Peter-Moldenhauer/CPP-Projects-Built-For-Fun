/******************************************************************************
This is the .cpp file for the Doohickey class. This gives the implementation
for a Doohickey's default constructor and get and set methods.
*******************************************************************************/

#include "Doohickey.h"

Doohickey::Doohickey()
{
    setWeight(1);  //If a weight is not passed as an argument, the default weight is 1
}

void Doohickey::setWeight(int weightIn)
{
    weight = weightIn;
}

int Doohickey::getWeight()
{
    return weight;
}
