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