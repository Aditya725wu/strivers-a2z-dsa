#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> q;

    q.push(8);
    q.push(28);
    q.push(49);
    q.push(45);

/*
=================================================
      PRIORITY QUEUE (MAX HEAP) IN C++ STL
=================================================

Definition:
A priority_queue is a container adaptor that stores
elements based on their priority.

By default, C++ implements a MAX HEAP.

MAX HEAP means:
- The largest element always stays at the top.
- Elements are NOT stored in insertion order.
- The highest-priority element is accessed first.

Header File:
#include <queue>

Declaration:
priority_queue<dataType> queueName;

Example:
priority_queue<int> q;

Important Points:
- top()   -> Access the largest element
- push()  -> Insert an element
- emplace() -> Construct and insert an element
- pop()   -> Remove the largest element
- size()  -> Number of elements
- empty() -> Check if the queue is empty

Restrictions:
- No indexing: q[0] ❌
- No iterators: q.begin() ❌

Time Complexity:
- push()    : O(log n)
- emplace() : O(log n)
- pop()     : O(log n)
- top()     : O(1)

Example:

After inserting: 8, 28, 49, 45

Internal max heap:

        49
       /  \
      45   28
     /
    8

top() returns 49 because it is the largest.
*/

#include <iostream>
#include <queue>

using namespace std;

int main() {

    // Create a max heap (priority queue)
    priority_queue<int> q;

    // Insert elements into the priority queue

    q.push(8);   // Heap: {8}
    q.push(28);  // Heap: {28, 8}
    q.push(49);  // Heap: {49, 28, 8}
    q.push(45);  // Heap: {49, 45, 28, 8}

    // top() returns the largest element

    cout << "Current top element: " << q.top() << endl;

    // pop() removes the largest element (49)

    q.pop();

    // After removing 49, 45 becomes the new top

    cout << "Top element after pop(): " << q.top() << endl;

    // Print the number of elements remaining

    cout << "Size of priority queue: " << q.size() << endl;

    // Check whether the priority queue is empty

    if (q.empty()) {
        cout << "Priority queue is empty" << endl;
    } else {
        cout << "Priority queue is not empty" << endl;
    }

    return 0;
}
    cout<<q.top();
    q.pop();
    cout<<q.top();
    

}