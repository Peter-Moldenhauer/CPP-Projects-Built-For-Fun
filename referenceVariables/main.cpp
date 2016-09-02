/********************************************************************************************************
*Name: Peter Moldenhauer
*Date: 9/1/16
*Description: This program demonstrates the use of reference variables. If one variable is a reference
to another variable it means that its just another name for the variable. Whatever we do to one variable
it will happen to the next variable because they are the "same" variable. By placing the & in front of
the declared variable, it is not creating a new place in memory for this variable, it is just acting as
a synonym for the original variable. Reference variables basically just create aliases to existing
variables and we can use the alias to change whatever was in the initial existing variable.
*********************************************************************************************************/

#include <iostream>
using namespace std;

void changeSomething(double &value){ //use a reference variable here to change value to 1.234, without the & it would stay 4.321
    value = 1.234;
}

int main()
{
    int value1 = 8;
    int &value2 = value1; //create a reference variable (or alias) to value1
    value2 = 99; //reference variable will modify "both" variables

    cout << "Value1: " << value1 << endl;
    cout << "Value2: " << value2 << endl;

    cout << "-------------------------" << endl;

    double value = 4.321;
    changeSomething(value);
    cout << value << endl;

    return 0;
}
