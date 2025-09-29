#include<iostream>
using std::cout;
using std::cin;

const int SIZE = 5;

// Function to insert an element into the circular queue
void enqueue(int queue[], int &front, int &rear, int &count) {
    if (count == SIZE) {  // Queue is full
        cout << "Overflow\n";
        return;
    }
    int input{};
    cout << "Insert -> ";
    cin >> input;

    queue[rear] = input;               // Place element at 
    rear = (rear + 1) % SIZE;          // Move rear forward (circularly)
    count++;                           // Increase element 
}


// Function to remove an element from the circular queue
void dequeue(int queue[], int &front, int &count) {
    if (count == 0) {  // Queue is empty
        cout << "Underflow!\n";
        return;
    }

    cout << "Removed: " << queue[front] << "\n";
    queue[front] = 0;                  // Optional: clear the 
    front = (front + 1) % SIZE;        // Move front forward (circularly)
    count--;                           // Decrease element 
}


// Function to display the entire queue (not just valid elements)
void displayQueue(int queue[], int &count) {
    if (count == 0) {
        cout << "Queue is Empty!\n";
        return;
    }

    cout << "Queue contents (all slots): ";
    for (int i = 0; i < SIZE; ++i) {
        cout << queue[i] << " ";
    }
    cout << "\n";
}

int main() {
    int queue[SIZE]{0};     // Initialize queue with zeros
    int choice{0};          // Menu choice
    int count{0};           // Number of elements currently 
    int front{0};           // Points to the front (removal) 
    int rear{0};            // Points to the rear (insertion) 

    cout << "1. Enqueue\n";
    cout << "2. Dequeue\n";
    cout << "3. Display Queue\n";
    cout << "4. Exit\n";

    // Menu loop
    while (choice != 4) {
        cout << "-> ";
        cin >> choice;

        switch (choice) {
            case 1: enqueue(queue, front, rear, count); break;
            case 2: dequeue(queue, front, count); break;
            case 3: displayQueue(queue, count); break;
            case 4: cout << "Bye!\n"; break;

            default: cout << "Invalid Input!\n";
        }
    }
}
