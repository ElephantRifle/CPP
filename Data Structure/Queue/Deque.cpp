#include<iostream>
using std::cout;
using std::cin;

const int SIZE = 5;

// Insert element at the front of deque
void enqueue_front(int deque[], int &front, int &rear, int &count) {
    if (count == SIZE) {
        cout << "Overflow!\n";
        return;
    }
    int input{};
    cout << "Insert at Front -> ";
    cin >> input;

    // Move front backward circularly and insert
    front = (front - 1 + SIZE) % SIZE;
    deque[front] = input;
    count++;
}

// Insert element at the rear of deque
void enqueue_rear(int deque[], int &front, int &rear, int &count) {
    if (count == SIZE) {
        cout << "Overflow!\n";
        return;
    }
    int input{};
    cout << "Insert at Rear -> ";
    cin >> input;

    deque[rear] = input;
    rear = (rear + 1) % SIZE;  // Move rear forward
    count++;
}

// Remove element from the front of deque
void dequeue_front(int deque[], int &front, int &count) {
    if (count == 0) {
        cout << "Underflow!\n";
        return;
    }

    cout << "Removed from Front: " << deque[front] << "\n";
    deque[front] = 0;  // Optional clearing
    front = (front + 1) % SIZE;  // Move front forward
    count--;
}

// Remove element from the rear of deque
void dequeue_rear(int deque[], int &rear, int &count) {
    if (count == 0) {
        cout << "Underflow!\n";
        return;
    }

    // Move rear backward first (since rear points to next insert position)
    rear = (rear - 1 + SIZE) % SIZE;
    cout << "Removed from Rear: " << deque[rear] << "\n";
    deque[rear] = 0;  // Optional clearing
    count--;
}

// Display entire array (including unused/0 elements)
void displayQueue(int deque[], int &count) {
    if (count == 0) {
        cout << "Queue is Empty!\n";
        return;
    }

    cout << "Queue contents (all slots): ";
    for (int i = 0; i < SIZE; ++i) {
        cout << deque[i] << " ";
    }
    cout << "\n";
}

int main() {
    int deque[SIZE]{0};  // Initialize deque with 0s
    int choice{0};       // User menu choice
    int count{0};        // Number of elements currently in deque
    int front{0};        // Points to front
    int rear{0};         // Points to next insert position at rear

    cout << "1. Enqueue Front\n";
    cout << "2. Enqueue Rear\n";
    cout << "3. Dequeue Front\n";
    cout << "4. Dequeue Rear\n";
    cout << "5. Display Queue\n";
    cout << "6. Exit\n";

    // Menu loop
    while (choice != 6) {
        cout << "-> ";
        cin >> choice;

        switch (choice) {
            case 1: enqueue_front(deque, front, rear, count); break;
            case 2: enqueue_rear(deque, front, rear, count); break;
            case 3: dequeue_front(deque, front, count); break;
            case 4: dequeue_rear(deque, rear, count); break;
            case 5: displayQueue(deque, count); break;
            case 6: cout << "Bye!\n"; break;
            default: cout << "Invalid Input!\n";
        }
    }
}
