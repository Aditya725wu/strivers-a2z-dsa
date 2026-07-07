#include <iostream>
#include <stack>

using namespace std;

/*
    STACK IN C++

    Definition:
    A stack is a linear data structure provided by the Standard Template
    Library (STL) that follows the LIFO principle.

    LIFO = Last In, First Out

    This means the element inserted last is removed first.

    Real-Life Examples:
    - Stack of plates
    - Browser back button history
    - Undo/Redo operations in editors
    - Function call management in programs

    Header File:
        #include <stack>

    Syntax:
        stack<data_type> stack_name;

    Example:
        stack<int> s;

    Important Characteristics:
    - Insertion and deletion occur only at one end called the TOP.
    - Random access is not allowed.
    - Indexing is not supported: s[0] ❌
    - Iterators are not supported.

    Common Functions:

        push(x)    : Adds an element to the top
        pop()      : Removes the top element
        top()      : Returns the top element
        size()     : Returns the number of elements
        empty()    : Checks whether the stack is empty

    Time Complexity:

        push()     : O(1)
        pop()      : O(1)
        top()      : O(1)
        size()     : O(1)
        empty()    : O(1)
*/

int main() {

    // ==========================
    // STACK DECLARATION
    // ==========================

    stack<int> s;

    // ==========================
    // ADDING ELEMENTS
    // ==========================

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    // Stack representation:
    // Top -> 40
    //        30
    //        20
    // Bottom->10

    // ==========================
    // ACCESSING TOP ELEMENT
    // ==========================

    cout << "Top element: " << s.top() << endl;

    // ==========================
    // REMOVING TOP ELEMENT
    // ==========================

    s.pop();

    cout << "Top element after pop(): " << s.top() << endl;

    // ==========================
    // STACK SIZE
    // ==========================

    cout << "Size of stack: " << s.size() << endl;

    // ==========================
    // CHECK IF STACK IS EMPTY
    // ==========================

    if (s.empty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }

    return 0;
}