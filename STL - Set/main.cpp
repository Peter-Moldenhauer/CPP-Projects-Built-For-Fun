/*****************************************************************************************************
** Name: Peter Moldenhauer
** Date: 11/22/16
** Description: This program demonstrates the use of the set container in the Standard Template
** Library (STL). A set is an associative container (binary tree). All of the elements are always
** sorted in associative containers. A set has no duplicate items!
**
** A multiset is demonstrated below the set example. A multiset is just like a set but it allows
** duplicate items, so inserting into a multiset is always successful.
** Note: A thing to remember about sets and multisets is that the value of each element can NOT be
** modified - they are read only. So the dereference of iterator is a constant (seen in multiset below)
** Note: No random access, no [] operator
******************************************************************************************************/

#include <iostream>
#include <set>
#include <algorithm>
using namespace std;  // Everything using the STL library uses namespace std


int main()
{
    // CONTAINER - SET
    set<int> myset;
    myset.insert(3);  // myset: {3}
    myset.insert(1);  // myset: {1, 3}
    myset.insert(7);  // myset: {1, 3, 7}
    // by the end of each insertion, the elements in set are automatically sorted

    // ITERATOR
    set<int>::iterator it;
    it = myset.find(7); // use the function find() to find the number 7, it now points to 7
    // Note: sequence containers don't even have the find() member function - takes too long to find

    // The insertion function returns a pair of values.
    // The second value is a boolean which indicates if the insertion was successful or not
    // The first item is an iterator that points to either the item being inserted (if the insertion is successful) or the duplicate item in the set (if insertion failed)
    pair<set<int>::iterator, bool> ret;
    ret = myset.insert(3);  // no new element inserted because 3 already exists in set (no duplicate items!) - Insertion failed!
    if (ret.second==false)
        it = ret.first;  // "it" now points to element 3 (the initial 3) because the insertion failed

    // insert 9 in set (sorts automatically) while using iterator parameter to act as a "hint" to speed up insertion time
    // if you provide a "hint" at insertion then you speed up the insertion time from O(log(n)) to O(1) which is constant time
    myset.insert(it, 9);  // myset: {1, 3, 7, 9}

    // since it still points to 3, erase(it) will remove 3 from the set
    myset.erase(it);  // myset: {1, 7, 9}

    // can also remove an item by its value
    myset.erase(7);  // myset: {1, 9}
    // Note: none of the sequence containers provide this kind of erase - too slow


    // CONTAINER - MULTISET
    //multiset<int> myset;

    // set/multiset value of the elements cannot be modified - *it is read only
    //*it = 10; // this will not work because you cannot assign a value to iterator since it is read only!

    return 0;
}
