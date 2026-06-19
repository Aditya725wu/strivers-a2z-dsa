#include <iostream>
#include <list>

using namespace std;

/*
    LIST IN C++

    Definition:
    A list is a sequence container provided by the Standard Template Library (STL).
    It is implemented as a doubly linked list.

    Unlike vectors, lists do not store elements in contiguous memory.
    Each element (node) contains:
        - Data
        - Pointer to the next node
        - Pointer to the previous node

    Features:
    - Dynamic size management
    - Fast insertion and deletion at any position
    - Bidirectional traversal
    - No direct access using indices

    Header File:
        #include <list>

    Syntax:
        list<data_type> list_name;

    Important Differences: Vector vs List

    Vector:
        - Stores elements in contiguous memory
        - Supports random access
        - Allows indexing: v[0]
        - Allows iterator arithmetic: v.begin() + n

    List:
        - Stores elements as linked nodes
        - Does not support random access
        - Indexing is NOT allowed: l[0] ❌
        - Iterator arithmetic is NOT allowed: l.begin() + 1 ❌

    Why?

    Vector Memory:
        [10][20][30][40]

    List Memory:
        [10] <-> [20] <-> [30] <-> [40]

    Since list elements are not stored continuously, the compiler cannot
    directly jump to the nth position.

    Therefore, use advance() to move iterators.

    Example:

        auto it = l.begin();
        advance(it, 2);

    Now 'it' points to the third element.

    Common Functions:
        push_back()    : Adds an element at the end
        push_front()   : Adds an element at the beginning
        pop_back()     : Removes the last element
        pop_front()    : Removes the first element
        erase()        : Removes an element at a specific position
        clear()        : Removes all elements
        emplace_back() : Constructs and adds an element at the end

    Time Complexity:
        Access by position    : O(n)
        push_back()           : O(1)
        pop_back()            : O(1)
        insert()/erase()      : O(1)
*/

int main() {

    // ==========================
    // INITIALIZATION OF LISTS
    // ==========================

    list<int> l = {2, 4, 6, 7, 8};

    list<int> l1(5);

    list<int> l2(5, 100);

    // ==========================
    // ADDING ELEMENTS
    // ==========================

    l1.push_back(10);
    l1.push_back(29);

    l2.push_back(29);

    l.push_back(5);

    // ==========================
    // REMOVING ELEMENTS FROM END
    // ==========================

    l1.pop_back();
    l.pop_back();

    // ==========================
    // DELETING AN ELEMENT FROM
    // A SPECIFIC POSITION
    // ==========================

    auto it = l.begin();

    // Move iterator to the second element
    advance(it, 1);

    l.erase(it);

    // ==========================
    // REMOVING ENTIRE LIST
    // ==========================

    l.clear();

    // ==========================
    // ADDING ELEMENTS AGAIN
    // ==========================

    l.push_back(4);
    l.emplace_back(6);

    // ==========================
    // DISPLAY LIST ELEMENTS
    // ==========================

    for (auto element : l) {
        cout << element << " ";
    }

    return 0;
}