#include<iostream>
using namespace std;

void insertionsort(double arr[],int bucketSize ){
    for(int i = 1 ;i < bucketSize;++i){
        double curr = arr[i];
        int prev = i - 1;

        while(prev >= 0 && arr[prev] > curr){
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
}


void bucket_sort(double arr[],int n){
    int bucketcount = 10;
    double bucket[bucketcount][n];
    int bucketSize[bucketcount]{};

    for(int i = 0 ;i < n;++i){
        int index = arr[i] * 10;
        bucket[index][bucketSize[index]] = arr[i];
        bucketSize[index]++;
    }

    for(int i = 0;i < bucketcount;++i){
        insertionsort(bucket[i],bucketSize[i]);
    }

    int index{};
    for(int i = 0;i < bucketcount;++i){
        for(int j = 0; j < bucketSize[i];++j){
            arr[index++] = bucket[i][j];
        }
    }
}


int main(){
    double arr[]{0.32,0.42,0.13,0.76,0.35,0.49,0.52};
    int n = sizeof(arr)/sizeof(arr[0]);

    bucket_sort(arr,n);
    for(auto temp : arr){
        cout<<temp<<" ";
    }

    return 0;
}