/**********************************************************************************************************
** Name: Peter Moldenhauer
** Date: 11/22/16
** Description: This program demonstrates the use of the unordered set container in the Standard Template
** Library (STL). An unordered set is an unordered associative container. The order of the elements are not
** defined and they may change over time. Internally, the unordered containers are implemented as hash
** tables. A hash table is an array of linked lists. Each element is used by the hash function to calculate
** a value. Based on the value, the element is inserted into its own place in the entries.
***********************************************************************************************************/

#include <iostream>
#include <unordered_set>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;  // Everything using the STL library uses namespace std


int main()
{
    // CONTAINER
    unordered_set<string> myset = {"red", "green", "blue"};  // create an unordered set of string.

    // use the member function find() to find the element "green"
    unordered_set<string>::const_iterator itr = myset.find("green"); // if find function finds the item, it will return the iterator that points to the item, otherwise it will return an iterator that points to the end of the container

    // before you dereference itr, it is important to check to make sure that it is not pointing to the end because dereferencing end results in undefined behavior
    if (itr != myset.end()) // important check
        cout << *itr << endl;

    // insert another item
    myset.insert("yellow");

    // you can use it together with other containers. Here, we insert the entire contents of a vector into the unordered set
    vector<string> vec = {"purple", "pink"};
    myset.insert(vec.begin(), vec.end()); // insert entire vector into the unordered set (myset)

    // unordered sets also provides some hash table specific API's
    cout << "load_factor = " << myset.load_factor() << endl; // tells the load factor of the hash table - ratio of total number of elements and total number of buckets
    string x = "red";
    cout << x << " is in bucket #: " << myset.bucket(x) << endl; // tells which bucket the element of x is stored at
    cout << "Total number of buckets: " << myset.bucket_count() << endl; // tells the total number of buckets

    // unordered multiset - unordered set that allows duplicated elements
    // unordered map - unordered set of pairs
    // unordered multimap - unordered map that allows duplicated keys

    return 0;
}
