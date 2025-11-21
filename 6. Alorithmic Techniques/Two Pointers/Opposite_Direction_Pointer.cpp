#include<iostream>
using std::cout;


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