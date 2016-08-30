/***************************************************************************************************
*Name: Peter Moldenhauer
*Date: 8/29/16
*Description: This program demonstrates the use of the <string> class and various string functions
****************************************************************************************************/

#include <iostream>
#include <string>  //include this to work with strings
using namespace std;


int main()
{
    cout << "Enter in a string: ";

    //when using cin, c++ will automatically stop at the first whitespace character - so just the first word will be outputted in this example
    //string x;
    //cin >> x;
    //cout << "String entered: " << x << endl;

    //using gitline will stop at the first new line character - so multiple words (until enter is pushed) will be outputted in this example
    string y;
    getline(cin, y);
    cout << "String entered: " << y << endl;

    //create and copy strings (below):
    string s1("This is a string "); //can do it that way or: string s1 = "This is a string "
    string s2;
    string s3;
    //2 ways to copy a string:
    s2 = s1; //first way to copy a string
    s3.assign(s1); //second way to copy a string
    cout << s1 << s2 << s3 << endl; //print to screen to see that all three are the same now

    //strings are arrays of characters
    //anything you can do to an array, you can do to a string
    string s4("abcdedfg");
    cout << s4.at(3) << endl;  //can use either the [] to access individual element (as you do with arrays) or you can use the .at() function
    cout << s4[1] << endl;

    //just like an array that you can loop through, you can also loop through a string to get each index
    //to get the length of a string, use the .length() function with no parameters
    for(int x=0; x<s4.length(); x++){
        cout << s4.at(x);
    }

    return 0;
}
