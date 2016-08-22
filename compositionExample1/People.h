#ifndef PEOPLE_H
#define PEOPLE_H

#include <string>
#include "Birthday.h"
using namespace std;

class People
{
    public:
        People(string x, Birthday bo);  //whatever we give to this function will first be set to name and then the second item (which will be a Birthday object) will be set to dateOfBirth
        void printInfo();
    private:
        string name;
        Birthday dateOfBirth;  //to use a Birthday object, type the name of the class and then give it a name "variable" to use
};

#endif // PEOPLE_H
