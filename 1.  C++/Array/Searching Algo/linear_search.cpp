#include<iostream>
using namespace std;

int linear_search(int arr[],int size,int key){
    for(int i{0};i < size;i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int size{};
    cout<<"Size: ";
    cin>>size;

    int arr[size];
    for(int i{0};i < size;i++){
        cout<<">>";
        cin>>arr[i];
    }
    int key{};

    cout<<"Key: ";
    cin>>key;

    int found = linear_search(arr,size,key);
    cout<<found;
    
    return 0;
}