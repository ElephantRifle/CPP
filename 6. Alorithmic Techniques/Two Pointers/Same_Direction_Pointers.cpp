#include<iostream>
using std::cout;
using std::max;




/*Problem:
Find the maximum sum of a contiguous subarray of size k.

Technique used:
Two Pointers (same direction) → Sliding Window (fixed window size)*/

int main(){
    int arr[]{4,9,1,6,2,1,0};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 4;

    int left = 0, right = 0;
    int _max,sum{};
    while(right < target){
        sum += arr[right];
        right++;
    }
    _max = sum;
  
    while(right < size){
        sum -= arr[left];
        left++;
        sum += arr[right];
        right++;
        _max = max(_max,sum);

    }
    cout<<_max;

    return 0;
}