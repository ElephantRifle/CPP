#include<iostream>
using namespace std;


void heapify(int arr[],int i,int n){
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if(left < n && arr[left] > arr[largest]){
        largest = left;
    }
    if(right < n && arr[right] > arr[largest]){
        largest = right;
    }
    if(largest != i){
        swap(arr[i],arr[largest]);
        heapify(arr,largest,n);
    }
}

void heap(int arr[],int n){
    /*it rearranges the entire array so that it satisfies the max heap property*/
    //Build Max Heap
    for(int i = n/2 -1;i >= 0;--i){
        heapify(arr,i,n);
    }

    /*is to use that max value and swap it with last one start doing the same process for n-1 until there is only 1 element left*/
    for(int i = n -1;i > 0;--i){
        swap(arr[i],arr[0]);
        heapify(arr,0,i);//heapify from 0 to i(remove one ele per iteration)
    }
}

int main(){
    int arr[]{5,4,3,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    heap(arr,n);
    for(auto temp : arr){
        cout<<temp<<" ";
    }
    return 0;
}