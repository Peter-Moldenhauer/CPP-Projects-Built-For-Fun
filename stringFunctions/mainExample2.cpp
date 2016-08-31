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
    //A substring is a way of "capturing" a smaller string inside of a larger string.
    string s1("Hello World I am a string!!!");
    cout << s1.substr(19, 7) << endl; //use .substr() function with parameters of starting place of substring and length of substring

    //swap function below (used with sorting lists or sorting arrays)
    //the swap function takes one string and swaps it with another string
    string one("apples");
    string two("bananas");
    cout << one << " " << two << endl;
    one.swap(two); //use the .swap() function with a parameter of the string that you want to swap
    cout << one << " " << two << endl;

    //find function below (this gives the starting location (index) of the first found occurance of string to be found)
    string s2("ham is spam oh yes I am!");
    cout << s2.find("am") << endl; //this returns 1 because the first occurance of a in "am" is at index 1 of the initial string
    //even though there are 3 occurances of am, the .find() function will return the index of the first occurance

    cout << s2.rfind("am") << endl; //this is "reverse find". Same as above function but works right to left instead of left to right
    //this will find the am that is at the end of the string (this is technically the 1st occurance of am for reverse find)


    return 0;
}
