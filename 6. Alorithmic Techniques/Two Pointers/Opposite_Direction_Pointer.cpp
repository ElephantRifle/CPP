#include<iostream>
using std::cout;

//Q - Two Sum Problem (Find two values who's sum == target)


//It can be optimally solved by Two Pointers in oppsite direction
// TC = O(n)

//If BRUTE force TWO nested FOR loop TC = O(n^2)

//IMPORTANT CONDITION : Array must be SORTED.

//The power of two pointers (O(n)) comes ONLY when you can eliminate one side.


int main(){
    int arr[]{1,2,3,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(arr[0]);

    int target{10};
    int sum{};
    int i = 0;
    int j = size - 1;

    while(i < j){
        sum = arr[i] + arr[j];

        if(sum == target){
            cout<<"->["<<i+1<<","<<j+1<<"]";
            cout<<"\n";
            i++;
            j--;

        }else if(sum > target){
            j--;
        }else{
            i++;
        }
    }

    return 0;
}