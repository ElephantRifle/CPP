#include<iostream>
using namespace std;

void count(int arr[],int n){

    int max = arr[0];
    for(int i = 1;i < n;++i){
        if(max < arr[i])max = arr[i];
    }

    int arr2[max+1]{};

    for(int i = 0 ;i < n;++i){
        arr2[arr[i]]++;
    }
    int index{0};
    for(int i = 0;i <= max;++i){
        while(arr2[i] > 0){
            arr[index] = i;
            index++;
            arr2[i]--;
        }
    }
}
int main(){
    int arr[]{5,4,3,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    count(arr,n);
    for(auto temp : arr){
        cout<<temp<<" ";
    }

    return 0;
}