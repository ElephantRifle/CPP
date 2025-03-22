/*
. Insertion Sort
How it works: Builds the sorted array one element at a time by inserting 
elements into their correct position.

Time Complexity:
Best case: 𝑂(𝑛)(nearly sorted array)
Worst case: 𝑂(𝑛 square)

Space Complexity: 𝑂(1)

*/
//#define code1
//#define code2
#define code3


#ifdef code1
// This code will work but it dosen't implement the logic correctly .
// In this we are swapping the number instead we have to shift the values to their correct position
/* Why shifting ? bec when we require to put a value at its correct place in sorted array from unsorted
*/ we have to perform SHIFTING NOT Swapping its more efficient.

// Issue: i-- inside the loop changes the for loop’s control, which can cause skipped elements or extra iterations.
// Risk: Might work in some cases, but not always reliable.

#include <iostream>
using namespace std;
int main() {
    int arr[]{10,9,8,7,6,5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    for(int i = 1;i < size;++i){
        int prev = i-1;
        
        while(arr[i] < arr[prev] && prev >= 0){
            int temp = arr[i];
            arr[i] = arr[prev];
            arr[prev] = temp;
            i--;             // Here i get its value changed 
            prev--;
        }
        
    }
    for(auto temp : arr){
        cout<<temp<<" ";
    }

    return 0;
}
#endif

#ifdef code2
// This Approach i a bit better than the above as it dosen't change 'i'
// Fixes the issue: Keeps i untouched, making the for loop work as expected.
// Result: More consistent and reliable than the first version.
#include <iostream>
using std::cout;
int main() {
    int arr[]{10,9,8,7,6,5,4,3,2,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    for(int i = 1;i < size;++i){
        int a = i;
        int prev = i - 1;
        while( prev >= 0 && arr[a] < arr[prev]){
            int temp = arr[a];
            arr[a] = arr[prev];
            arr[prev] = temp;
            a--;             // Moves only 'a' , not 'i'
            prev--;
        }
    }
    for(auto temp : arr){
        cout<<temp<<" ";
    }

    return 0;
}
#endif

//This is the best approach with proper logic implementation

#ifdef code3

#include<iostream>
using std::cout;

int main(){
    int arr[]{10,9,8,7,6,5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 1;i < size;++i){
        int curr = arr[i];
        int prev = i - 1;

        while(prev >= 0 && arr[prev] > curr){
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
        //To check how arr is changing
        // for(auto temp : arr){
        //     cout<<temp<<" ";
        // }
        // cout<<'\n';
        
    }
    for(auto temp : arr){
        cout<<temp<<" ";
    }
    
    return 0;
}

#endif