#include<iostream>
using namespace std;


void R_sort(int arr[],int size,int place,int max){
    const int range = 10;
    int count[range]{0};
    int output[size]{0};

    for(int i = 0;i < size;++i){
        int digit = (arr[i] / place)% 10;
        count[digit]++;
    }

    for(int i = 1;i < range;++i){
        count[i] += count[i-1];
    }

    for(int i = size -1;i >= 0;--i){
        int digit = (arr[i]/place)% 10;
        output[count[digit] - 1] = arr[i];
        count[digit]--;
    }

    for(int i = 0;i < size;++i){
        arr[i] = output[i];
    }

}


int max_num(int arr[],int size){
    int max = arr[0];

    for(int i = 1;i < size;++i){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

void radix_sort(int arr[],int size){
    int max = max_num(arr,size);

    for(int place = 1;max/place > 0;place*= 10){
        R_sort(arr,size,place,max);
    }
}

int main(){
    int arr[]{5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    radix_sort(arr,size);
    for(int i = 0;i < size;++i){
        cout<<arr[i] <<" ";
    }


    return 0;
}

//=================================================================

#include <iostream>
using namespace std;

//-----------------------------------------------
// Function: R_sort (Performs Counting Sort based
// on a specific digit place, e.g. 1s, 10s, 100s)
//-----------------------------------------------
void R_sort(int arr[], int size, int place, int max) {
    const int range = 10;   // Digits range from 0 to 9
    int count[range]{0};    // Count array to store frequency of each digit
    int output[size]{0};    // Output array to store sorted numbers temporarily

    // Step 1: Count occurrences of each digit at the current place value
    for (int i = 0; i < size; ++i) {
        int digit = (arr[i] / place) % 10; // Extract the current digit
        count[digit]++;                    // Increment count of that digit
    }

    // Step 2: Convert count[] to cumulative count[] 
    // This ensures stable sorting (preserves order of same digits)
    for (int i = 1; i < range; ++i) {
        count[i] += count[i - 1];
    }

    // Step 3: Build the output array (Stable Sorting)
    // Traverse input array in reverse to maintain stability
    for (int i = size - 1; i >= 0; --i) {
        int digit = (arr[i] / place) % 10;
        output[count[digit] - 1] = arr[i]; // Place element in correct position
        count[digit]--;                    // Decrement the count
    }

    // Step 4: Copy sorted numbers (based on current digit) back to original array
    for (int i = 0; i < size; ++i) {
        arr[i] = output[i];
    }
}

//-----------------------------------------------
// Function: max_num (Finds the maximum element in the array)
//-----------------------------------------------
int max_num(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

//-----------------------------------------------
// Function: radix_sort (Main driver function)
// Sorts the array using Radix Sort algorithm
//-----------------------------------------------
void radix_sort(int arr[], int size) {
    int max = max_num(arr, size); // Find the maximum number (to know number of digits)

    // Perform counting sort for each digit place
    // place = 1 (units), 10 (tens), 100 (hundreds), ...
    for (int place = 1; max / place > 0; place *= 10) {
        R_sort(arr, size, place, max);
    }
}

//-----------------------------------------------
// Main Function
//-----------------------------------------------
int main() {
    int arr[]{5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Call Radix Sort
    radix_sort(arr, size);

    // Display sorted array
    cout << "Sorted Array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}
