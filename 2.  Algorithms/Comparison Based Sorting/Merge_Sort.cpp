/*
MERGE SORT
How it works: Divides the array into two halves, sorts them recursively, and then
 merges them.

 Time Complexity: 𝑂(𝑛log𝑛)

 Space Complexity: 𝑂(𝑛)
*/
#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

//Merge two sorted half into single sorted subarray 
void merge(vector<int>&arr,int low, int mid, int high){ 
    vector<int> temp{};
    int left = low;
    int right = mid+1;

    //Merge elements from both halves in sorted order
    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]); // Take from left if it's smaller
            left++;
        }else{
            temp.push_back(arr[right]); // Take from right otherwise
            right++;
        }
    }
    //Copy remaining elements from the left half (if any)
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }
    //Copy remaining elements from the right half (if any)
    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }
    //Copy merged elements back into the original array
    for(int i = low;i <= high;++i){
        arr[i] = temp[i - low];
        cout<<arr[i];
    }
    cout<<endl;

}

// Recursively divides and sorts the array
void merge_sort(vector<int>&arr, int low, int high){
    if(low >= high){
        return;
    }
    int mid = low + (high - low)/2;//Find mid of an array

    //Recursively divide left half of array
    merge_sort(arr,low,mid);

    //Recursively divide right half of the array
    merge_sort(arr,mid+1,high);

    //Merge the sorted array
    merge(arr,low,mid,high);

}

int main(){
    vector<int>arr{1,7,5,8,1};
    int n = arr.size();

    //Call merge_sort on the entire array (0 to n-1)
    merge_sort(arr,0,n-1);

    //Print the Sorted array
    // for(int i = 0;i < n;++i){
    //     cout<<arr[i]<<" ";
    // }
    return 0;
}
