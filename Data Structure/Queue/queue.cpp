#include<iostream>

using std::cout;
using std::cin;
const int SIZE = 5;

//Function that PUSH element in Queue
void enqueue(int queue[],int &top){
    if(top >= SIZE){
        cout<<"Queue OverFlow!\n";
        return ;
    }
    int input{};
    cout<<"Insert -> ";
    cin>>input;

    queue[top++] = input;

}

//Functon that POP element in Queue
void dequeue(int queue[],int &a,int &top){
    if(a >= top){
        cout<<"Underflow.\n";
        return ;
    }
    cout<<"Removed: "<<queue[a]<<"\n";
    queue[a] = 0;
    a++;
}

//To Display Queue Elements
void displayQueue(int queue[]){
    for(int i = 0;i < SIZE;++i){
        cout<<queue[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    int queue[SIZE]{0};
    int choice{0};
    int top{0} ;
    int a{0};
    

    cout<<"1.Enqueue\n";
    cout<<"2.Dequeue\n";
    cout<<"3.Display Queue\n";
    cout<<"4.Exit\n";

    while(choice != 4){
        cout<<"->";
        cin>>choice;

        switch(choice){
            case 1:enqueue(queue,top);break;
            case 2:dequeue(queue,a,top);break;
            case 3:displayQueue(queue);break;
            case 4:cout<<"Bye!";break;

        default:
            cout<<"Invalid Input!\n";
        }
    }

}