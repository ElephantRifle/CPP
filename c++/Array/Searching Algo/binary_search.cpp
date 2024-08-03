#include<iostream>
using namespace std;
//WE NEED TO SORT THE ARRAY FIRST IN ORDER TO APPLY BINARY SEARCH(INCREASING ORDER)

int arr_sorting(int arr[],int size){//for sorting array in increasing order

for(int i{0};i < size;i++){
    for(int j{i+1};j < size;j++){
        if(arr[i] > arr[j] ){
            int val = arr[i];
            arr[i] = arr[j];
            arr[j] = val;
        }
    }
}
cout<<"Sorted array: ";

for(int i{0};i < size;i++){//Printing Sorted array
    cout<<arr[i]<<" ";
}     
cout<<endl;
}

int binary_search(int arr[],int size,int key){//Implementing Binary Search
    int start{0};
    int end{size-1};

    while(start <= end){
        int mid = (start+end)/2;

        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;
}
int main(){
    int size{};
    int key{};
    cout<<"Size: ";
    cin>>size;

    int arr[size];
    for(int i{0};i < size;i++){
        cout<<">>";
        cin>>arr[i];
    }

    cout<<"Enter key: ";
    cin>>key;

    arr_sorting(arr,size);//Sorting function
    
    int search = binary_search(arr,size,key);//Binary Search Implementation 
    cout<<search<<endl;

    return 0;
}