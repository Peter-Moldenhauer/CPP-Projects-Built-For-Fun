/********************************************************************************************************
*Name: Peter Moldenhauer
*Date: 9/3/16
*Description: This program demonstrates the use of the static keyword. When a variable or function in
a class is declared as static, this means that this specific variable/function is shared among all of
the class objects created. In this program a static variable (count) and a static function (showInfo) is
used to keep track of the total number of objects created from the class. With this count, each object
can be assigned an "ID number" based on the count number of that particular object created.

Remember: A static variable in a class is shared among all objects in the class, it is not unique to
each created object.
Note: You need to initialize the static variable in the class .cpp file
*********************************************************************************************************/

#include <iostream>
using namespace std;

//.h header file
class Test {
private:
    static int count;

public:
    Test(){ //create a constructor to increment count for each object created
        count++;
    }
    static void showInfo(){
        cout << count << endl; //because this is a static function, you can access the static variable (count)
    }
    static int const MAX = 99; //Another example - just call this static const variable in main without creating an object
    //Note: in above line, initialization must take place in this line (and not in the .cpp source like other static member) because this is a CONST - const must be initialized in same line
};

//.cpp class source file
int Test::count = 0;

int main()
{
    //cout << Test::count << endl;//Note: We don't need to create an object to access this variable because its shared among all objects and is just a "class specific variable"
    Test::showInfo(); //access the static function WITHOUT creating an object - class static function is accessing and then printing the static variable

    cout << Test::MAX << endl; //Example - just call this static const variable in main without creating an object

    //Now create objects but use the static variable (count) to keep track of the number of objects:
    //when an object is created, the constructor will run and increment the static count variable with every object
    Test test1;
    Test::showInfo(); //count will now = 1 because the object constructor incremented count

    Test test2;
    Test::showInfo(); //Remember - not calling object here, just using the static class function, count = 2 now

    return 0;
}
