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

// Function Prototype
// void ms(int arr[],int low,int high);//To Break Array using index
// void merge(int arr[],int low,int mid,int high);//To Compare and Merge array

void merge(vector<int>&arr,int low,int mid,int high){
    vector<int>temp;
    int left = low;
    int right = mid+1;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i = low;i <= high;++i){
        arr[i] = temp[i - low];
    }
}
void merge_sort(vector<int>&arr,int low,int high){
    if(low >= high){
        return ;
    }
    int mid = low + (high - low)/2;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    merge(arr,low,mid,high);
}


int main(){
    vector<int>arr{3,2,4,1,0,3,1,5,6,3};
    int n =arr.size();

    merge_sort(arr,0,n-1);
    for(int i = 0;i < n;++i){
        cout<<arr[i]<<" ";
    }

    return 0;
}