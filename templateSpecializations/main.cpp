/**********************************************************************************************************************
*Name: Peter Moldenhauer
*Date: 8/25/16
*Description: This program demonstrates the concept of template specializations. In this example program, a class
template will be created but the template will run differently based on what type of data that is substituted in for
the blank/generic (T) data type. The class will run one way when ints, doubles etc are used and the class will run
another way when the char data type is used.
Remember: With template specializations, you have a different implementation when a specific data type is passed into it
in this case the specific data type is char.
************************************************************************************************************************/

#include <iostream>
using namespace std;

template <class T>
class Spunky{    ;
    public:
        Spunky(T x){
            cout << x << " is not a character!" << endl;
        }
};

template<>
class Spunky<char>{
    public:
        Spunky(char x){
            cout << x << " is indeed a character! " << endl;
        }
};

int main()
{
    Spunky<int> obj1(7);  //this object uses the first class
    Spunky<double> obj2(3.54);  //this object uses the first class
    Spunky<char> obj3('w');  //this object uses the second char specific class

    return 0;
}

