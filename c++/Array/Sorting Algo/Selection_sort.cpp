#include<iostream>
using namespace std;

void selection_sort(int arr[],int size){
    for(int i{0};i < size-1;i++){//We are doing size -1 because at the end of the loop the largest value will automatically be at last so we don't have to run the outer loop till (i < size)(dry run this code) 
        for(int j{i+1};j < size;j++){
            if(arr[i] > arr[j]){
                int ran = arr[j];
                arr[j] = arr[i];
                arr[i] = ran;
            }
        }
    }
for(int i{0};i < size;i++){//Printing Sorted array
    cout<<arr[i]<<" ";
}     
cout<<endl;    

}

int main(){
    int size{};
    cout<<"Enter size of arr: ";
    cin>>size;

    int arr[size];
    for(int i{0};i < size;i++){
        cout<<">>";
        cin>>arr[i];
    }

    selection_sort(arr,size);

    return 0;
}