/*****************************************************************************************************
** Name: Peter Moldenhauer
** Date: 11/22/16
** Description: This program demonstrates the use of the vector container in the Standard Template
** Library (STL). The STL library is made up of containers, iterators and algorithms. A vector is a 
** sequence container. 
******************************************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;  // Everything using the STL library uses namespace std


int main()
{
    // CONTAINER
    vector<int> vec;  // vec.size() == 0
    vec.push_back(4);
    vec.push_back(1);
    vec.push_back(8);  // vec: (4, 1, 8)     vec.size() == 3
	
	cout << vec[2];  // prints 8, (no range check)
	cout << vec.at(2); // prints 8, (throw range_error exception of out of range)

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

	int* p = &vec[0];  // vector is a dynamically allocated contiguous array in mem so we can use a pointer to it similar to arrays
	p[2] = 6; // example of using a pointer to change vector element 
	
    return 0;
}
