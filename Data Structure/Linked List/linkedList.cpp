#include <iostream>
using namespace std;

// 🧱 Structure for a Node
struct Node {
    int data;       // data part
    Node* next;     // pointer to next node
};

// 📌 Insert at the beginning of the list
void insertAtHead(Node*& head, int value) {
    Node* newNode = new Node;    // create new node
    newNode->data = value;       // set data
    newNode->next = head;        // point to old head
    head = newNode;              // update head to new node
}

// 🗑️ Delete first node (head)
void deleteHead(Node*& head) {
    if (head == nullptr) {
        cout << "List is already empty!\n";
        return;
    }
    Node* temp = head;       // store current head
    head = head->next;       // move head to next node
    delete temp;             // free memory of old head
}

// 🔍 Display the list
void display(Node* head) {
    cout << "List: ";
    while (head != nullptr) {
        cout << head->data << " -> ";
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

    display(head);  // Output: 10 -> 20 -> 30 -> NULL

    deleteHead(head);
    display(head);  // Output: 20 -> 30 -> NULL

    return 0;
}
