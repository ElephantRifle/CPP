#include<iostream>
using namespace std;

int main(){
    int size{};
    cout<<"size of arr>> ";
    cin>>size;

    int arr[size];
    for(int i{0};i < size;i++){
        cout<<">>";
        cin>>arr[i];
    }
    int n{1};
    while(n <= size){
        for(int i{0};i < size-n;i++){
            if(arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp; 
            }
       }
    n++;
    }    
    for(int i{0};i < size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}