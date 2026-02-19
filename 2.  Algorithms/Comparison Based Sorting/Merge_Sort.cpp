/*
MERGE SORT
How it works: Divides the array into two halves, sorts them recursively, and then
 merges them.

 Time Complexity: 𝑂(𝑛log𝑛)

 Space Complexity: 𝑂(𝑛)
*/

//#define code1
#define without_comments
//#define with_FOR_LOOP


#ifdef code1
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
#endif


#ifdef without_comments


#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

void merge(vector<int>&arr, int low , int mid, int high){
    vector<int>temp;
    int left = low;
    int right = mid + 1;

    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
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

void merge_sort(vector<int>&arr, int low , int high){

    if(low >= high){
        return;
    }else{
        int mid = low + (high - low)/2;
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}

int main(){
    vector<int>arr{3,2,4,1,3};
    int size = arr.size();

    merge_sort(arr,0,size - 1);

    for(auto temp : arr){
        cout<<temp<<" ";
    }

    return 0;
}



#endif


#ifdef with_FOR_LOOP

#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;


    for (; left <= mid && right <= high; ) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // copy remaining left part
    for (; left <= mid; left++) {
        temp.push_back(arr[left]);
    }

    // copy remaining right part
    for (; right <= high; right++) {
        temp.push_back(arr[right]);
    }

    // copy back to original array
    for (int i = low; i <= high; ++i) {
        arr[i] = temp[i - low];
    }
}

void merge_sort(vector<int>& arr, int low, int high) {
    if (low >= high) {
        return;
    } else {
        int mid = low + (high - low) / 2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: \n";
    for (int i = 0; i < n; i++) {
        cout<<">>";
        cin >> arr[i];
    }

    merge_sort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (auto temp : arr) {
        cout << temp << " ";
    }
    cout << endl;

    
    return 0;
}






#endif