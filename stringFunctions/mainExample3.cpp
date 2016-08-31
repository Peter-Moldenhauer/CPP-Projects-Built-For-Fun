/***************************************************************************************************
*Name: Peter Moldenhauer
*Date: 8/30/16
*Description: This program demonstrates the use of the <string> class and various string functions
****************************************************************************************************/

#include <iostream>
#include <string>  //include this to work with strings
using namespace std;


int main()
{
    //the string erase function erases everything from and including whatever element you tell it to
    string s1("Hello my name is Peter and I love C++!!!");
    cout << s1 << endl;
    s1.erase(22); //the .erase() function takes 1 parameter - what character you want to begin erasing at
    //it starts erasing at the character index that you passed in as a parameter
    cout << s1 << endl;

    //the string replace function takes three parameters
    string s2("Hello my name is Peter and I love C++!!!");
    //1st parameter - what character do you want to begin replacing at
    //2nd parameter - how many characters do you want to replace
    //3rd parameter - what do you want to replace it with (don't have to replace it with the same number of characters)
    cout << s2 << endl;
    s2.replace(17, 5, "John Smith");
    cout << s2 << endl;

    //the string insert function inserts a substring into the string but it does not take anything out of the original string
    string s3("Hello my name is Peter and I love C++!!!");
    //insert Moldenhauer after Peter in the original string
    //insert function takes two parameters
    //1st parameter - where do you want to begin inserting at
    //2nd parameter - what substring do you want to add into the original string
    cout << s3 << endl;
    s3.insert(23, "Moldenhauer ");
    cout << s3 << endl;

    return 0;
}
