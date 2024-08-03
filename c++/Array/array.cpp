#include<iostream>
using namespace std;

int main(){
    int size{};
    cout<<"Size of array: ";
    cin>>size;

    int arr[size];
    for(int i{0};i < size;i++){
        cout<<">>";
        cin>>arr[i];
    }
    int largest{arr[0]};
    int smallest{arr[0]};

    for(int i{1};i < size;i++){
        if(arr[i] >= largest){ // (use<climits>)largest = max(largest,arr[i])
            largest = arr[i];
        }
        if(arr[i] <= smallest){ // (use<climits>)smallest = min(smallest,arr[i])
            smallest = arr[i];
        }
    }
    cout<<"Smallest: "<<smallest<<endl;
    cout<<"Largest: "<<largest<<endl;

    return 0;
}