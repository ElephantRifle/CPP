#include<iostream>
using namespace std;


void R_sort(int arr[],int size,int place,int max){
    const int range = 10;
    int count[range]{0};
    int output[size]{0};

    for(int i = 0;i < size;++i){
        int digit = (arr[i] / place)% 10;
        count[digit]++;
    }

    for(int i = 1;i < range;++i){
        count[i] += count[i-1];
    }

    for(int i = size -1;i >= 0;--i){
        int digit = (arr[i]/place)% 10;
        output[count[digit] - 1] = arr[i];
        count[digit]--;
    }

    for(int i = 0;i < size;++i){
        arr[i] = output[i];
    }

}


int max_num(int arr[],int size){
    int max = arr[0];

    for(int i = 1;i < size;++i){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

void radix_sort(int arr[],int size){
    int max = max_num(arr,size);

    for(int place = 1;max/place > 0;place*= 10){
        R_sort(arr,size,place,max);
    }
}

int main(){
    int arr[]{5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    radix_sort(arr,size);
    for(int i = 0;i < size;++i){
        cout<<arr[i] <<" ";
    }


    return 0;
}