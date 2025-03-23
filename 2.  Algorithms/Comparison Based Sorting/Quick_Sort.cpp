/*
How it works: Picks a pivot element, partitions the array around it, and recursively 
sorts the partitions.
Time Complexity:

Best case: 𝑂(𝑛log𝑛)
Worst case: 𝑂(𝑛2)    (rare, when the pivot is poorly chosen)
Space Complexity: 𝑂(log𝑛)  (average case for recursion)

*/

//This is the code to put a pivot at its correct place



#include <iostream>
#include<vector>
using namespace std;

int quick(vector<int>&arr,int low,int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i < j){
        while(arr[i] <= pivot && i <= high-1){
            i++;
        }
        while(arr[j] > pivot && j >= low+1){
            j--;
        }
        if(i < j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low] , arr[j]);
    return j;
}

void quick_sort(vector<int>&arr,int low,int high){
   if(low < high){
       int british = quick(arr,low,high);
       quick_sort(arr,low,british-1);
       quick_sort(arr,british+1,high);
   } 
}
int main() {
    vector<int>arr{4,6,2,5,7,9,1,3,4};
    int size = arr.size();
    
    quick_sort(arr,0,size-1);
    
    for(auto temp : arr){
        cout<<temp<<" ";
    }

    return 0;
}