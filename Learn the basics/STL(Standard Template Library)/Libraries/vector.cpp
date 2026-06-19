#include <iostream>
#include <vector>

using namespace std;

/*
    VECTOR IN C++

    Definition:
    A vector is a dynamic array provided by the Standard Template Library (STL).
    Unlike normal arrays, vectors can automatically grow or shrink in size
    during program execution.

    Features:
    - Dynamic size management
    - Fast random access using indices
    - Automatic memory allocation and deallocation
    - Provides several built-in functions for easy manipulation

    Header File:
        #include <vector>

    Syntax:
        vector<data_type> vector_name;

    Common Functions Used:
        push_back()    : Adds an element at the end
        pop_back()     : Removes the last element
        erase()        : Removes an element from a specific position
        clear()        : Removes all elements from the vector
        emplace_back() : Constructs and adds an element at the end

    Time Complexity:
        Access by index      : O(1)
        push_back()          : O(1) amortized
        pop_back()           : O(1)
        erase()              : O(n)
        clear()              : O(n)
*/

int main() {

    // ==========================
    // INITIALIZATION OF VECTORS
    // ==========================

    vector<int> v = {2, 4, 6, 7, 8};

    // Vector of size 5 with default value 0
    vector<int> v1(5);

    // Vector of size 5 with all elements initialized to 100
    vector<int> v2(5, 100);

    // ==========================
    // ADDING ELEMENTS AT THE END
    // ==========================

    v1.push_back(10);
    v1.push_back(29);

    v2.push_back(29);

    v.push_back(5);

    // cout << v[5];

    // ==========================
    // DELETING ELEMENTS FROM END
    // ==========================

    // cout << v1[1];

    v1.pop_back();
    v.pop_back();

    // ==========================
    // DELETING ELEMENT FROM A
    // SPECIFIC INDEX
    // ==========================

    v.erase(v.begin() + 1);

    /*
    for (auto v11 = v.begin(); v11 != v.end(); v11++) {
        cout << *v11;
        cout << endl;
    }
    */

    // ==========================
    // REMOVING ENTIRE VECTOR
    // ==========================

    v.clear();

    // cout << v1[1];

    // ==========================
    // ADDING ELEMENTS AGAIN
    // ==========================

    v.push_back(4);

    /*
    // Declaration Examples

    // (size, value)
    vector<int> n(5, 100);
    cout << n[3] << endl;
    // Output: {100, 100, 100, 100, 100}

    vector<int> a(5);
    cout << a[3] << endl;
    // Output: {0, 0, 0, 0, 0}
    */

    v.emplace_back(6);

    /*
    for (auto i = v.begin(); i != v.end(); i++) {
        cout << *i << " " << endl;
    }

    v.rend();
    v.rbegin();

    for (auto i = v.rbegin(); i != v.rend(); i++) {
        cout << *i + 1 << " ";

        v.pop_back();
    }
    */

    return 0;
}