#include<iostream>
using std::cout;




int main(){
    int arr[]{1,2,3,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 10;

    int i = 0;
    int j = i+1;
    int sum{};

    while(j < size){
        sum = arr[i] + arr[j];

        if(sum == target){
            cout<<i+1<<" "<<j+1;
            i++;
            j++;
        }else if(sum < target){
            j++;
        }else{
            i++;
        }
    }

    return 0;
}