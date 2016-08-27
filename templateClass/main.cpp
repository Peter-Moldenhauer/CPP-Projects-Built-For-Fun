/**********************************************************************************************************************
*Name: Peter Moldenhauer
*Date: 8/25/16
*Description: This program demonstrates the concept of class templates. Similar to function templates, an entire class
can be a template for other classes. A template can be thought of as a "generic data type".
************************************************************************************************************************/

#include <iostream>
using namespace std;

template <class T>
class MyClass{
    private:
        T first, second;  //member variables
    public:
        MyClass(T a, T b){  //Constructor declared and defined
            first = a;
            second = b;
        }
        T bigger(); //T at the start because that is what data type we are returning. This function will just return what variable is bigger.
        //The above function is just declared (prototyped) not defined.
        //This is just to show how to define the function outside of this template class declaration
};

template <class T>
T MyClass<T>::bigger(){ //Add the <T> after the class name. This tells C++ that the functions template parameter is the same one that we will be using for the class.
    return (first>second?first:second); //if first is greater than second, then return first, else return second
}

int main()
{
    MyClass <int> object1(69, 105);  //Whenever we are working with a class template, we need to explicitly tell it what type of data we want to substitute for T. So in this case we are going to be working with integers because 69 and 105 are integers
    cout << object1.bigger();

    return 0;
}

/************************************************************************************************************************************************
Things to remember about class templates:
1) Every function you build (outside of the class declaration portion) needs to have the "template <class ClassName>" text before it
2) You need to have the blank/generic data type (in this case T) after the class name in the function definition (if again you build the function outside of the class declaration portion)
This tells the function that we are working with a class' template parameter (in this case it is T)
3) Whenever you make the objects in the main function, you need to explicitly tell the object what type of data to substitute for T. Use <int> or another data type but make sure you include
the angle brackets and put this right after the class name.
*************************************************************************************************************************************************/
