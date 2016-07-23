/*****************************************************************************************
** Name: Peter Moldenhauer
** Date: 7/22/2016
** Description: This program demonstrates the concepts of "passing by value", "passing by
**reference" and passing pointers to functions. This program uses these three methods in
**three different functions to swap the values of integer variables.
*******************************************************************************************/

#include <iostream>
using namespace std;

void swapPassByValue(int x, int y);  //pass by value function prototype
void swapPassByReference(int &x, int &y); //pass by reference function prototype
void swapPassByPointers(int *x, int *y);  //pass using pointers function prototype

int main()
{
    int a = 5, b = 10;  //These are the two starting variables and values
    cout << "\nThe value of a: " << a << endl;
    cout << "The address of a: " << &a << endl;
    cout << "The value of b: " << b << endl;
    cout << "The address of b: " << &b << endl;
    cout << "-----------------------------" << endl;
    cout << "[Pass by value...]" << endl;
    swapPassByValue(a, b);
    cout << "The value of a: " << a << endl;
    cout << "The address of a: " << &a << endl;
    cout << "The value of b: " << b << endl;
    cout << "The address of b: " << &b << endl;
    cout << "-----------------------------" << endl;
    cout << "[Pass by reference..]" << endl;
    swapPassByReference(a, b);
    cout << "The value of a: " << a << endl;
    cout << "The address of a: " << &a << endl;
    cout << "The value of b: " << b << endl;
    cout << "The address of b: " << &b << endl;
    cout << "-----------------------------" << endl;
    cout << "[Pass using pointers...]" << endl;
    swapPassByPointers(&a, &b);
    cout << "The value of a: " << a << endl;
    cout << "The address of a: " << &a << endl;
    cout << "The value of b: " << b << endl;
    cout << "The address of b: " << &b << endl;

    return 0;
}
//This function pases by value
void swapPassByValue(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

//This function passes by reference
void swapPassByReference(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void swapPassByPointers(int *x, int *y)
{
    int temp = *x; //dereference x
    *x = *y;  //dereference x and y
    *y = temp; //dereference y
    cout << "(address of x pointer...): " << &x << endl;
    cout << "(address of y pointer...): " << &y << endl;
}
