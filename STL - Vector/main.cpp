/*****************************************************************************************************
** Name: Peter Moldenhauer
** Date: 11/22/16
** Description: This program demonstrates the use of the vector container in the Standard Template
** Library (STL). The STL library is made up of containers, iterators and algorithms.
******************************************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;  // Everything using the STL library uses namespace std


int main()
{
    // CONTAINER
    vector<int> vec;
    vec.push_back(4);
    vec.push_back(1);
    vec.push_back(8);  // vec: (4, 1, 8)

    // ITERATOR
    vector<int>::iterator itr1 = vec.begin();  // half-open: (begin, end)
    vector<int>::iterator itr2 = vec.end();

    for (vector<int>::iterator itr = itr1; itr!=itr2; ++itr)
        cout << *itr << " ";  // Print out: 4 1 8

    // ALGORITHM - does not work on container directly, it works on iterators as seen below with the sort algorithm
    sort(itr1, itr2);  // sort all elements from iter1 up till iter2, vec then becomes: (1, 4, 8)
    cout << endl;

    for (vector<int>::iterator itr = itr1; itr!=itr2; ++itr)
        cout << *itr << " ";  // Print out: 1 4 8

    return 0;
}
