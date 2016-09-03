/********************************************************************************************************
*Name: Peter Moldenhauer
*Date: 9/2/16
*Description: This program demonstrates the use of arrays being passed into functions.
*********************************************************************************************************/

#include <iostream>
using namespace std;

void show1(const int nElements, string texts[]){
    for(int i=0; i<nElements; i++){
        cout << texts[i] << endl;
    }
}

void show2(const int nElements, string *texts){ //this gives exact same result as above function, just uses the *
    for(int i=0; i<nElements; i++){
        cout << texts[i] << endl;
    }
}

int main()
{
    string texts[] = {"apple", "orange", "banana"};
    cout << sizeof(texts) << endl; //print the size of the array
    show1(3, texts);

    cout << "-------------" << endl;

    cout << sizeof(texts) << endl;
    show2(3, texts);

    return 0;
}
