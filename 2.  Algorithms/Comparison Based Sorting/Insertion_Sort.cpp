/*
. Insertion Sort
How it works: Builds the sorted array one element at a time by inserting 
elements into their correct position.

Time Complexity:
Best case: 𝑂(𝑛)(nearly sorted array)
Worst case: 𝑂(𝑛 square)

Space Complexity: 𝑂(1)

*/
#include<iostream>
using std :: cout;
using std :: cin;
using std :: endl;

int main(){
    int arr[]{12,11,13,0,5,6,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0;i < size - 1;++i){
        int j = i + 1;

        while(j >= 0 && arr[j] < arr[j - 1]){
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }
    for(auto temp : arr){
        cout<<temp<<" ";
    }

    return 0;
}


// Online C++ compiler to run C++ program online
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
            i--;
            prev--;
        }
        
    }
    for(auto temp : arr){
        cout<<temp<<" ";
    }

    return 0;
}
