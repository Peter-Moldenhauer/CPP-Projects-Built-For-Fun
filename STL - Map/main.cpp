/*****************************************************************************************************
** Name: Peter Moldenhauer
** Date: 11/22/16
** Description: This program demonstrates the use of the map container in the Standard Template
** Library (STL). A map is an associative container (binary tree). A map has the same interface as a
** set and multiset except that each element is a pair of a key/value combination. A map does not allow
** elements with duplicate keys. Remember, all of the elements are always sorted in associative
** containers.
**
** Multimap (shown at bottom) is just like a map except that it allows duplicated keys.
** Note: With map/multimap, the keys cannot be modified.
******************************************************************************************************/

#include <iostream>
#include <map>
#include <algorithm>
using namespace std;  // Everything using the STL library uses namespace std


int main()
{
    // CONTAINER - MAP
    map<char, int> mymap; // create a map with char to int
    mymap.insert(pair<char, int>('a', 100));  // when you insert an item, you need to create a pair from char to int and then insert it
    mymap.insert(make_pair('z', 200)); // you can also use the convenient make_pair() function to insert. This saves you from typing char, int for example. Types are inferred from the parameters

    // The insert parameter can also take another parameter of iterator which serves as a hint as to where to insert
    map<char, int>::iterator it = mymap.begin();
    mymap.insert(it, pair<char, int>('b', 300)); // "it" is a hint

    // The member function find() will find an item in the map based on the key
    it = mymap.find('z');

    // Showing contents of map. A pair can be accessed through its members first and second.
    for (it = mymap.begin(); it != mymap.end(); it++)
        cout << (*it).first << " => " << (*it).second << endl;


    // CONTAINER - MULTIMAP
    //multimap<char, int> mymap;

    // Since map/multimap keys cannot be modified, you cannot assign a different value to a given value (below)
    //(*it).first = 'd';  // Cannot do this because *it is constant. Error!

    return 0;
}
