#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
};

// ── INSERT AT HEAD ───────────────────────────────────────────────
//
// insertAtHead(10)
//
// before: [1]->[3]->[5]->[67]->NULL
//
// after : [10]->[1]->[3]->[5]->[67]->NULL
//
Node* insertAtHead(Node*& head, int X) {

    Node* cur = new Node(X, nullptr);

    cur->next = head;

    head = cur;

    return head;
}

// ── FIND LENGTH ──────────────────────────────────────────────────
//
// list state: [1]->[3]->[5]->[67]->NULL
//
// temp visits:
// 1 → count=1
// 3 → count=2
// 5 → count=3
// 67 → count=4
//
// return 4
//
int length(Node* head) {

    int count = 0;

    Node* temp = head;

    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }

    return count;
}

// ── INSERT AT TAIL ───────────────────────────────────────────────
//
// insertAtTail(100)
//
// before: [1]->[3]->[5]->[67]->NULL
//
// after : [1]->[3]->[5]->[67]->[100]->NULL
//
Node* insertAtTail(Node*& head, int data) {

    Node* temp = new Node(data, nullptr);

    if (head == nullptr) {
        head = temp;
        return head;
    }

    Node* current = head;

    while (current->next != nullptr) {
        current = current->next;
    }

    current->next = temp;

    return head;
}

// ── DELETE NODE ──────────────────────────────────────────────────
//
// deleteNode(5)
//
// before: [1]->[3]->[5]->[67]->NULL
//
// after : [1]->[3]->[67]->NULL
//
void deleteNode(Node* node) {

    Node* temp = node->next;

    node->data = temp->data;
    node->next = temp->next;

    delete temp;
}

// ── DISPLAY ──────────────────────────────────────────────────────
//
// list state: [1]->[3]->[5]->[67]->NULL
//
// output:
//
// 1 3 5 67
//
void printList(Node* head) {

    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }

    cout << endl;
}

// ── ARRAY TO LINKED LIST ─────────────────────────────────────────
//
// array:
//
// [1,3,5,67]
//
// linked list:
//
// [1]->[3]->[5]->[67]->NULL
//
Node* NodeConvertArr(vector<int>& arr) {

    Node* head = new Node(arr[0], nullptr);

    Node* temp = head;

    for (int i = 1; i < arr.size(); i++) {

        Node* newnode = new Node(arr[i], nullptr);

        temp->next = newnode;

        temp = newnode;
    }

    return head;
}

int main() {

    vector<int> v = {1, 3, 5, 67};

    Node* head = NodeConvertArr(v);

    cout << "Length = " << length(head) << endl;

    printList(head);

    return 0;
}