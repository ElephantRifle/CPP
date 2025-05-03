#include<iostream>
using std :: cout;
using std :: cin;

const int size = 5;

//Function that Push element into Stack
void push(int arr[],int &loc){
    if(loc >= size){
        cout<<"Stack size Excedded"<<"\n";
        return;
    }
    int element;

    cout<<"Element ->";
    cin>>element;
    
    arr[loc++] = element;
     
}
//Function that Pop element in LIFO order 
void pop(int arr[],int &loc){
    if(loc <= 0){
        cout<<"Stack UnderFlow!\n";
        return ;
    }
    cout<<"Element "<<arr[loc - 1]<<" removed.\n";
    arr[--loc] = 0;
    
}
//To Display the Current Stack
void DisplayStack(int arr[]){
    for(int i = 0;i < size;++i){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}


int main(){
    int arr[size]{0};
    int choice{0};  //User Input
    int loc = 0;   

    cout<<"Stack Operations: \n";
    cout<<"1.Push\n";
    cout<<"1.Pop\n";
    cout<<"1.Display Stack\n";
    cout<<"1.Exit\n";

    
    while(choice != 4){
        cout<<"->";
        cin>>choice;

        switch (choice){
            case 1:push(arr,loc); break;
            case 2:pop(arr,loc);  break;
            case 3:DisplayStack(arr); break;
            case 4:break;
        default:
            cout<<"Invalid Value."<<"\n";
        }
    }
    return 0;
}