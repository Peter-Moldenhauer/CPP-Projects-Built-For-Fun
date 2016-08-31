/*****************************************************************************************************
*Name: Peter Moldenhauer
*Date: 8/30/16
*Description: This program demonstrates the use of the the string stream <sstream> class. This class
is used in this program to add a string and an int together. Without this class, you can add two
ints together or two strings together using the + operator but you cannot add an int and string
together.
******************************************************************************************************/

#include <iostream>
#include <sstream>  //need to include the string stream class!
using namespace std;

int main()
{
    string name = "Peter";
    int age = 30;

    //This might be how you think you would do it but it is NOT, will NOT work!
    //string info = "Name " + name + ", Age: " + age;
    //cout << info << endl;

    //When you use streams in programming, you are using a stream of data - you can send data to or get data from streams
    //The stringstream object that is created below represents a stream that will build the string that we want
    stringstream ss; //declare an object ss of the stringstream type
    ss << "Name is: "; //put to the ss object - similar to put to the cout statement (cout <<)
    ss << name;
    ss << ", Age is: ";
    ss << age;

    cout << ss.str() << endl; //the .str() function converts the stream to a string

    return 0;
}
