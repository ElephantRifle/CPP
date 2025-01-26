#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int function_activation_count{0};

double a_penny_doubled_everyday(int a,double amount=0.01);//prototype with default value

int main(){
    int a{};
    cout<<"\nEnter days:";
    cin>>a;
    double amount{};
    // cout<<"Enter amount: ";
    // cin>>amount;

    cout<<"$"<<a_penny_doubled_everyday(a)<<endl;
    cout<<"Money doubled "<<function_activation_count<<" times."<<endl;
    cout<<endl;
    return 0;
}
double a_penny_doubled_everyday(int a,double amount)
{
    function_activation_count++;
    if(a<=1){
        return amount;
    }
    return a_penny_doubled_everyday(--a,amount*2);
    return function_activation_count;
}


