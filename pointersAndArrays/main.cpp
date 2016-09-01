/********************************************************************************************************
*Name: Peter Moldenhauer
*Date: 8/31/16
*Description: This program demonstrates the use of pointers and arrays together.
*********************************************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    //create an array of strings:
    string stringArray[] = {"one", "two", "three"};
    cout << sizeof(stringArray) << endl; //this will give the size of all of the elements in the array
    cout << sizeof(stringArray)/sizeof(string) << endl; //to get the number of elements in the array, divide the size of all the elements by the size of a string
    //loop through the string array to print out each element:
    for(int i=0; i<sizeof(stringArray)/sizeof(string); i++){
        cout << stringArray[i] << " " << flush; //flush gets it all on one line
    }

    cout << "\n---------------------------------------" << endl;

    /***Loop through an array using a pointer with array element reference (index) syntax***/
    //output same as above but with pointers
    string *pointerStringArray = stringArray; //create a pointer to a string and have it point to the first element of the string array
    for(int i=0; i<sizeof(stringArray)/sizeof(string); i++){
        cout << pointerStringArray[i] << " " << flush;
    } //use the pointer name with the array index element

    cout << endl;

    /***Loop through an array by incrementing a pointer to the array***/
    for(int i=0; i<sizeof(stringArray)/sizeof(string); i++){
        cout << *pointerStringArray << " " << flush;  //dereference the pointer
        pointerStringArray = pointerStringArray + 1; //add 1 to the pointer to move to the next element in the array
    } //could also use pointerStringArray++
      //could also put pointerStringArray++ in the for loop after i++ just put a comma inbetween them

    cout << endl;

    /***Loop through an array and exit loop by comparing two pointers (one to the current element and one to the end element)***/
    string *pointerFirstElement = &stringArray[0];
    string *pointerLastElement = &stringArray[2];
    //use a while loop to loop through array elements
    while(true){ //since this is while true, it will be an infinite loop unless we use a break
        cout << *pointerFirstElement << " " << flush;

        if(pointerFirstElement == pointerLastElement){
            break;
        }
        pointerFirstElement++;
    }

    cout << endl;
    return 0;
}
