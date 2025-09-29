#include <iostream>
using namespace std;

// Node structure for DLL
struct Node {
    int data;
    Node* next;
    Node* prev;
};

// Insert at the head of DLL
void insertAtHead(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->prev = nullptr;
    newNode->next = head;

    if (head != nullptr) {
        head->prev = newNode; // link old head to new node
    }

    head = newNode; // new node becomes the new head
}

// Delete from the head of DLL
void deleteFromHead(Node*& head) {
    if (head == nullptr) {
        cout << "List is empty!\n";
        return;
    }

    Node* temp = head;
    head = head->next; // move head forward

    if (head != nullptr) {
        head->prev = nullptr; // new head's prev becomes NULL
    }

    delete temp; // free old head
}

// Display the list
void display(Node* head) {
    cout << "DLL: ";
    while (head != nullptr) {
        cout << head->data << " <-> ";
        head = head->next;
    }
    cout << "NULL\n";
}

// Main function
int main() {
    Node* head = nullptr;

    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);
    display(head);  // Output: 10 <-> 20 <-> 30 <-> NULL

    deleteFromHead(head);
    display(head);  // Output: 20 <-> 30 <-> NULL

    return 0;
}
