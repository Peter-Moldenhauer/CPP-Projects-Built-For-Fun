/********************************************************************************************************
*Name: Peter Moldenhauer
*Date: 9/2/16
*Description: This program demonstrates how you can set a string to a single character or multiple
characters.
*********************************************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    char c = 'a';
    string name(1, c); //this line says create a string with 1 c variable (so one a)
    //1st parameter is how many of the characters and the second parameter is what character you want to use
    cout << name << endl;

    string otherName(20, c);
    cout << otherName << endl;

    //since char is basically an int type so you can increment char like you can an int
    char x = 'e';
    x++;
    string lastName(5, x);
    cout << lastName << endl; //since we started with e and we incremented it, the letter printed out will be f

    return 0;
}
