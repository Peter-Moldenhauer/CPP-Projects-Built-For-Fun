/*************************************************************************************
** Name: Peter Moldenhauer
** Date: 7/19/2016
** Description: This program demonstrates the use and functions of vectors. Vectors are
**similar to 1D arrays but have the primary advantage of not being fixed in size or
**length. You can add more items to the end of a vector and the vector will automatically
**allocate more memory if needed to store the new item.
**************************************************************************************/

#include <iostream>
#include <vector>  //needed to use vectors
using namespace std;

int main()
{
    //There are 4 ways to declare a vector:
    //Method 1: declare with no initial size, example below
    //vector<float> exampleVector;
    //Method 2: declare with initial size, Note with vectors you use () instead of [], example below
    //vector<int> exampleVector(10);
    //Method 3: declare with initial size and default value, Note: size is 10 and every value is initialized to the value of 2
    //vector<int> exampleVector(10, 2);
    //Method 4: declare and initialize with values from another vector, example below
    //vector<int> vectorOne(10, 2);  //first vector has size 10 each element initialized to 2
    //vector<int> vectorTwo(vectorOne);  //second vector now also has size 10 with each element initialized to 2

    vector<int> myVector(5);  //declare a vector of size 5

    myVector[0] = 3;
    myVector[1] = 9;
    myVector[2] = 4;
    myVector[3] = 78;
    myVector[4] = -23;

    cout << "\nThe contents of the vector are: ";  //Display the contents of the vector
    for(int i=0; i<5; i++)
        cout << myVector[i] << " ";

    cout << "\nThe size of the vector is " << myVector.size() << " integers. " << endl; //Display size of vector

    cout << "The contents of the vector are now: "; //add another element to the end of the vector
    myVector.push_back(100);
    for(int i=0; i<6; i++)
        cout << myVector[i] << " ";

    cout << "\nThe first element of the vector is: " << myVector.at(0) << endl;
    cout << "The last element of the vector is " << myVector.at(5) << endl;

    myVector.pop_back(); //remove the last element of the vector
    cout << "The size of the vector is now " << myVector.size() << " integers. " << endl;

    //Other vector functions:
    //clear() this clears a vector of all its elements, example below
    //myVector.clear();
    //empty() this returns true if the vector is empty, otherwise it returns false, example below
    //if (myVector.empty());
        //cout << "The vector is empty.";
    //resize() this resizes a vector to have n elements where n is greater than the vectors current size. example below
    //myVector.resize(6,99);  if myVector previously had 4 elements, this adds two elements to the end of the vector each with the value of 99
    //reverse() this reverses the order of the elements in the vector (the last becomes the first and the first becomes the last)
    //myVector.reverse();

    return 0;
}
