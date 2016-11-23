/**********************************************************************************************************
** Name: Peter Moldenhauer
** Date: 11/22/16
** Description: This program demonstrates the use of some of the algorithms in the Standard Template
** Library (STL). Algorithms need to know what data to work on, most of the time this is a range of data
** that is represented by a pair of iterators
***********************************************************************************************************/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;  // Everything using the STL library uses namespace std


int main()
{
    // CONTAINER
    vector<int> vec = {4, 2, 5, 1, 3, 9};

    //ITERATOR
    vector<int>::iterator itr = min_element(vec.begin(), vec.end());  // itr points to 1, itr->1

    //ALGORITHMS
    sort(vec.begin(), itr); // this sorts the elements in the range of beginning to iterator, vec: {2, 4, 5, 1, 3, 9}

    reverse(itr, vec.end()); // vec: {2, 4, 5, 9, 3, 1}  itr => 9 (itr not pointing to 1 anymore but the old location of 1 where 9 is now)

    // algorithms that use two ranges of data
    vector<int> vec2(3); // make new vector
    copy(itr, vec.end(),  // source
         vec2.begin());  // destination, vec2 needs to have at least space for 3 elements

    // inserting vector
    vector<int> vec3;
    vec3.insert(vec3.end(), itr, vec.end());

    // Using an algorithm with a function
    bool isOdd(int i) {  // this is the function
        return i%2;
    }

    vector<int> vec4 = {2, 4, 5, 9, 2}
    vector<int>::iterator itr = find_if(vec4.begin(), vec4.end(), isOdd); // itr -> 5, this looks through the entire vector and returns the iterator that satisfies the condition of the function (is odd)

    // Algorithm can work with native C++ arrays
    int arr[4] = {6, 3, 7, 4};
    sort(arr, arr+4); // use sort function to sort the array. This can work because you can think of a pointer as an iterator

    return 0;
}
