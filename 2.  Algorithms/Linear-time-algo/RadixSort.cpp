#include<iostream>
using namespace std;

void radixsort(int arr[],int n){
    int largest = arr[0];
    for(int i = 1;i < n;++i){
        if(arr[i] > largest)largest = arr[i];
    }
    int digits{};
    while(largest != 0){
        int rem = largest %10;
        digits++;
        largest /= 10;
    }
}


int main(){
    int arr[]{5,4,3,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    radixsort(arr,n);

    return 0;
}