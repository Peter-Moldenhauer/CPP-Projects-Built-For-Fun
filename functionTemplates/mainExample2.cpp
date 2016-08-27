/**********************************************************************************************************************
*Name: Peter Moldenhauer
*Date: 8/25/16
*Description: This program demonstrates the use of a function template with MULTIPLE PARAMETERS. In the previous program
that I wrote with function parameters, you could only pass in two doubles or two ints - the data type had to be the
same. However, with a function template with multiple parameters you can pass in two different data types - they do not
need to be the same. In this program the function compares two numbers (of different data type) and returns which number
is smaller.
************************************************************************************************************************/

#include <iostream>
using namespace std;

template <class FIRST, class SECOND> //whenever you make a template, you need to start with the keyword template.
//The above line is pretty much saying, we are going to be working with two data types but we dont know what the data types are yet so we will be giving them generic names
FIRST smaller(FIRST a, SECOND b) {  //1st type what type of data you want to return (FIRST) and then write the function with the generic parameters. NOTE: the function will only return the type of data that you specified at the beginning of this line of code (i.e. FIRST type of data - which is an int, so even though it is an int and double being compared, the function will just return an int)
    return (a<b?a:b);  //if a is less than b then return a, if  not then return b
}

int main()
{
    int x = 89;
    double y = 56.78;
    cout << smaller(x,y) << endl; //call the smaller function which prints out the smallest of the two numbers to the screen
    //As noted in a comment earlier, this will return an int not a double
    //To return a double, change the order of what type is being passed in as FIRST
    //For example, if you change it to smaller(y,x) then the double will be the FIRST type of data and the function will return a double then

    return 0;
}
