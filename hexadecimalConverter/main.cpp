/********************************************************************************************************
*Name: Peter Moldenhauer
*Date: 9/6/16
*Description: This program demonstrates how to convert a decimal number to binary, octal and hexadecimal
*********************************************************************************************************/

#include <iostream>
using namespace std;

void printBinary(int myNumber) {
    cout << "Bin = ";
    for (int i = 31; i >= 0; --i){
        cout << ((myNumber >> i) % 2); //example: myNumber >> 3 [is the same as] myNumber/8 [we are just dividing by the corresponding power of 2]
    }
    cout << endl;
}

void printOctal(int myNumber){
    cout << "Oct = ";
    for (int i = 10; i >= 0; --i){ //since octal is 3 bits per digit, we only need 11 digits (32 bits/3 = ll digits)
        int octDigit = ((myNumber >> (3*i)) % 8);
        cout << octDigit << " ";
    }
    cout << endl;
}

void printHexadecimal(int myNumber){
    cout << "Hex = ";
    for (int i = 7; i >= 0; --i){
        int hexDigit = ((myNumber >> (4*i)) % 16);
        if (hexDigit < 10) {
            cout << " " << hexDigit;
        } else {
            cout << " " << (char)('A' + (hexDigit - 10));
        }
    }
    cout << endl;
}

int main()
{
    int number = 13;

    printBinary(number);
    printOctal(number);
    printHexadecimal(number);
    cout << "Dec = " << number << endl;

    return 0;
}
