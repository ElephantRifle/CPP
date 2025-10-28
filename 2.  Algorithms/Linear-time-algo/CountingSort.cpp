#include<iostream>
using namespace std;

void count(int arr[],int n){

    int max = arr[0];
    for(int i = 1;i < n;++i){//Finding Max element
        if(max < arr[i])max = arr[i];
    }

    int arr2[max+1]{};//Create a Frequency Array

    for(int i = 0 ;i < n;++i){//Inserting and updating the value at index
        arr2[arr[i]]++;
    }
    
    //Refill original array in sorted order
    int index{0};
    for(int i = 0;i <= max;++i){
        while(arr2[i] > 0){
            arr[index] = i; //place 'i' in original array
            index++;        //move to next position
            arr2[i]--;      //decrease count since it's placed
        }
    }
}
int main(){
    int arr[]{5,4,3,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    count(arr,n);//CALL 

    for(auto temp : arr){
        cout<<temp<<" ";
    }

    return 0;
}