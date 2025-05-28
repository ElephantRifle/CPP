/*
 Selection Sort
How it works: Selects the smallest (or largest) element from the unsorted part and swaps
it with the first unsorted element.

Time Complexity: 
    Best case: 𝑂(𝑛) (when the array is already sorted)
    Worst case: 𝑂(𝑛 square)

Space Complexity: 𝑂(1)  
*/

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int arr[]{12,45,23,51,19,8,2,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    for(int i = 0;i < size -1;++i){
        for(int j = i + 1;j < size ;++j){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            }
        }
    for(auto temp : arr){
        cout<<temp<<" ";
    }

    return 0;
}