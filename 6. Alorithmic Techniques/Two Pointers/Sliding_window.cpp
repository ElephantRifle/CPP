#include<iostream>
using std::cout;
using std::max;

int main(){
    int arr[]{3,4,5,3};
    int size = sizeof(arr) /sizeof(arr[0]);

    int target{7};

    int left = 0,right = 0;
    int sum{};
    int length{};

    while(right < size){
        sum += arr[right];

        while(sum > target){
            sum -= arr[left];
            left++;
        }
        length = max(length,right- left + 1);//if want to print  
                                             //subarray do changes 
                                            //in this
        right++;
    }
    cout<<length;

    return 0;
}