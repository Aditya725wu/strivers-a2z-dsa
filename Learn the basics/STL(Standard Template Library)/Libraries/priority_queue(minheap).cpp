/*
=================================================
       MIN HEAP (PRIORITY QUEUE) IN C++ STL
=================================================

Definition:
A priority_queue is a container that stores
elements according to their priority.

By default, C++ creates a MAX HEAP.

To create a MIN HEAP, we use:

priority_queue<int, vector<int>, greater<int>> q;

MIN HEAP means:
- The smallest element always stays at the top.
- Elements are NOT stored in insertion order.
- The smallest element has the highest priority.

Why do we use vector<int>?

The heap is internally stored as a dynamic array.
C++ uses vector by default because:

- It provides fast random access using indexes.
- It stores elements in contiguous memory.
- It grows dynamically.
- Heap operations become efficient.

Internal syntax:

priority_queue<
    int,           // Data type
    vector<int>,   // Underlying container
    greater<int>   // Comparator for min heap
> q;

Important Methods:

push(x)    -> Insert an element
emplace(x) -> Construct and insert an element
top()      -> Access the smallest element
pop()      -> Remove the smallest element
size()     -> Number of elements
empty()    -> Check whether the heap is empty

Time Complexity:

push()  -> O(log n)
pop()   -> O(log n)
top()   -> O(1)

Restrictions:

q[0];      // ❌ Not allowed
q.begin(); // ❌ Not allowed

Use top() to access elements.

Example:

Inserted elements: 9, 38, 48, 74

Internal min heap:

        9
      /   \
    38     48
   /
 74

top() returns 9 because it is the smallest element.
*/

#include <iostream>
#include <queue>

using namespace std;

int main() {

    // Create a min heap
    priority_queue<int, vector<int>, greater<int>> q;

    // Insert elements
    q.push(9);
    q.push(38);
    q.push(48);
    q.push(74);

    // Display the smallest element
    cout << "Current top element: " << q.top() << endl;

    // Remove the smallest element (9)
    q.pop();

    // Display the new smallest element
    cout << "Top element after pop(): " << q.top() << endl;

    // Display the number of elements
    cout << "Size of heap: " << q.size() << endl;

    // Check whether the heap is empty
    if (q.empty()) {
        cout << "Heap is empty" << endl;
    } else {
        cout << "Heap is not empty" << endl;
    }

    return 0;
}