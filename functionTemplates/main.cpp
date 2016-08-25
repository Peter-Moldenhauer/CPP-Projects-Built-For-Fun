/**********************************************************************************************************************
*Name: Peter Moldenhauer
*Date: 8/25/16
*Description: This program demonstrates the concept of a function template. Whenever a function template is created, we
create a generic type of data. Instead of making a function specific to one type of data, we are going to use the
generic type of data. Whenever we call that function, C++ is automatically going to see what data type we are attempting
to use in the main function and then use that type in place of the generic type that is in the function template. This
way we can use int, double, char etc all with the same function without needing to re-write the same function over and
over again with different data types.
************************************************************************************************************************/

#include <iostream>
using namespace std;

template <class myTemplate> //with this function template any specific type of data we want to use in the main function will be substituted in for myTemplate
myTemplate addStuff (myTemplate a, myTemplate b){
    return a+b;
}

int main()
{
    int x = 7, y = 43, z;
    z = addStuff(x,y);  //Make sure these are both ints!
    cout << "Function with ints: " << z << endl;

    double h = 19.123, i = 20.87, j;
    j = addStuff(h,i);  //make sure these are both doubles!
    cout << "Function with doubles: " << j << endl;

    return 0;
}
