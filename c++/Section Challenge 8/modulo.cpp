#include<iostream>
using namespace std;
int main(){
    const int dollar_value{100};
    const int quarter_value{25};
    const int dime_value{10};
    const int nickle_value{5};
    const int pennie_value{1};
    
    int amount{};
    cout<<"Enter the amount in cents: ";
    cin>>amount;

    int balance{},dollars{},quarters{},dimes{},nickles{},pennies{};

    dollars=amount/dollar_value;
    balance=amount%dollar_value;

    quarters=balance/quarter_value;
    balance%=dollar_value;

    dimes=balance/dime_value;
    balance%=dime_value;

    nickles=balance/nickle_value;
    balance%=nickle_value;

    pennies=balance;

    cout<<"Dollars: "<<dollars<<endl;
    cout<<"Quarters: "<<quarters<<endl;
    cout<<"Dimes: "<<dimes<<endl;
    cout<<"Nickles: "<<nickles<<endl;
    cout<<"Pennies: "<<pennies<<endl;


    return 0;
}