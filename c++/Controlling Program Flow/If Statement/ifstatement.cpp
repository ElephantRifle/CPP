#include<iostream>
using namespace std;
int main(){
    const int min{10};
    const int max{100};
    int num{};

    cout<<"Enter a number between "<<min<<" and  "<<max<<": ";
    cin>>num;

    if(num>=min){
        cout<<"\n========If statement 1========"<<endl;
        cout<<num<<" is greater than "<<min<<endl;

        int diff{num-min};
        cout<<"The difference between num and min is "<<diff<<endl;
 
    }

    if(num<=max){
        cout<<"\n========If Statement 2========"<<endl;
        cout<<num<<" is less than "<<max<<endl;
        
        int diff{max-num};
        cout<<"The difference between max and min is "<<diff<<endl;
    }
    
    if(num>=min && num<=max){
        cout<<"\n========If Statement 3========"<<endl;
        cout<<"Num ("<<num<<") is in range."<<endl;
        cout<<"This means Statement 1 and 2 must be true."<<endl;

    }

    if(num==min || num==max){
        cout<<"\n========If Statement 4========"<<endl;
        cout<<"Num ("<<num<<") is in range."<<endl;
        cout<<"This means all 4 Statements are true."<<endl;

    }

    return 0;
}