/*
BUBBLE SORT
How it works: Repeatedly swaps adjacent elements if they are in the wrong order.
Time Complexity:

Best case: 𝑂(𝑛) (when the array is already sorted)

Worst case: 𝑂(𝑛 square)
Space Complexity: 𝑂(1)

*/

#include<iostream>
using std :: cout;
using std :: cin;
using std :: endl;

int main(){
    int arr[]{12,45,23,51,18,8};
    int size = sizeof(arr) / sizeof(arr[0]);
   

    for(int i = 0 ;i < size - 1;++i){
        for(int j = 0; j < size - 1 - i;++j){
            if(arr[j+1] < arr[j]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
     
    }
    for(auto temp : arr){
        cout<<temp <<" ";
    }



    return 0;
}