#include<iostream>
using namespace std;
int main(){
    char selection{};
    do{
        cout<<"\n-------------------"<<endl;
        cout<<"1. Do this. "<<endl;
        cout<<"2. Do that. "<<endl;
        cout<<"3. Do something else. "<<endl;
        cout<<"Q. Quit"<<endl;
        
        cout<<"Enter your Selection: ";
        cin>>selection;
        cout<<endl;
        if(selection=='1')
          cout<<"You Choose 1. Doing this."<<endl;
        else if(selection=='2')
          cout<<"You Choose 2. Doing that."<<endl;
        else if(selection=='3')
          cout<<"You Choose 3. Doing Something else. "<<endl;
        else if(selection=='q'|| selection=='Q')
          cout<<"Goodbye.."<<endl;  
        else 
          cout<<"Unknown Option--try again..";  
          

    }while(selection!='q' &&  selection!='Q');

    return 0;
}