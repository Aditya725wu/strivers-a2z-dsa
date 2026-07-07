/*
=================================================
              SET IN C++ STL
=================================================

Definition:
A set is an STL container that stores UNIQUE
elements in SORTED (ascending) order.

Characteristics:
- Duplicate values are NOT allowed.
- Elements are automatically sorted.
- Internally implemented using a Balanced BST
  (usually a Red-Black Tree).

Header File:
#include <set>

Declaration:
set<dataType> setName;

Example:
set<int> s;

Important Methods:

insert(x)  -> Insert an element
erase(x)   -> Remove an element
find(x)    -> Find an element
count(x)   -> Check if an element exists
size()     -> Number of elements
empty()    -> Check if the set is empty
begin()    -> Iterator to first element
end()      -> Iterator after last element

Time Complexity:

insert() -> O(log n)
erase()  -> O(log n)
find()   -> O(log n)
count()  -> O(log n)

Important Notes:

- Elements are always stored in ascending order.
- Duplicate elements are ignored.
- No indexing is allowed.

s[0];     // ❌ Not allowed

- Iterators are used to access elements.

Example:

Inserted elements:
5, 6, 48, 3, 1

Stored inside set:

{1, 3, 5, 6, 48}

Notice:
The elements are automatically sorted.
*/

#include <iostream>
#include <set>

using namespace std;

int main() {

    // Create a set of integers
    set<int> s;

    // Insert elements into the set
    s.insert(5);
    s.insert(6);
    s.insert(48);
    s.insert(3);
    s.insert(1);

    // Duplicate values are ignored
    s.insert(5);   // Will not be added again

    // Traverse the set using an iterator
    cout << "Set elements:" << endl;

    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << endl;
    }

    // Find an element
    auto i = s.find(48);

    // find() returns s.end() if the element is not found
    if (i != s.end()) {
        cout << "\nValue found: " << *i << endl;
    } else {
        cout << "\nValue not found" << endl;
    }

    // count() returns:
    // 1 -> Element exists
    // 0 -> Element does not exist

    int cont = s.count(48);

    cout << "Count of 48: " << cont << endl;
    
    s.erase(i);

 
    return 0;
}