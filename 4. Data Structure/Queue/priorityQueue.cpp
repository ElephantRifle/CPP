1#include<iostream>

using std::cout;
using std::cin;

const int MAX = 100;

int values[MAX]{0};       // Stores the values
int priorities[MAX]{0};  // Stores corresponding priorities
int count = -1;         // Index of the last element (starts at -1 when empty)

// Function to insert a value with its priority into the queue
void enqueue(int value, int priority) {
    count++;
    values[count] = value;
    priorities[count] = priority;
}

// Function to find the index of the element with the smallest priority number
int smallest_priority_first() {
    int smallest = 0;
    for (int i = 1; i <= count; ++i) { 
        if (priorities[i] < priorities[smallest]) {  
            smallest = i;
        }
    }
    return smallest;
}

// Function to remove the element with the highest priority (i.e., smallest number)
void dequeue() {
    if (count == -1) {
        cout << "Queue is empty!\n";
        return;
    }

    int index = smallest_priority_first();

    cout << "Removing \nElement-> " << values[index]; 
    cout<<"\nPriority-> " << priorities[index] << "\n";

    // Shift all elements left to fill the gap
    for (int i = index; i < count; ++i) {
        values[i] = values[i + 1];
        priorities[i] = priorities[i + 1];
    }

    count--;  // Decrease total element count
}

// Function to display the queue
void display_queue() {
    if (count == -1) {
        cout << "Queue is empty!\n";
        return;
    }

    cout << "\nCurrent Queue:\n";
    for (int i = 0; i <= count; ++i){  
        cout << values[i] << " -> Priority: " << priorities[i] << "\n";
    }
}

int main() {
    enqueue(100, 3);
    enqueue(101, 1);  // Highest priority (smallest number)
    enqueue(102, 2);

    display_queue();

    dequeue();  // Should remove 101 (priority 1)

    display_queue();

    return 0;
}
