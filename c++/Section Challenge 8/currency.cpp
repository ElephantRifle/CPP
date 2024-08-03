#include<iostream>
using namespace std;
int main(){
    const int dollar_value{100};
    const int quarter_value{25};
    const int dime_value{10};
    const int nickle_value{5};
    const int pennie_value{1};
    

    int change_amount{};
    cout<<"Enter the amount in cents: ";
    cin>>change_amount;
    
    int balance{},dollars{},quarters{},dimes{},nickles{},pennies{};

    dollars=change_amount/dollar_value;
    balance=change_amount-(dollars*dollar_value);
    
    quarters=balance/quarter_value;
    balance-=(quarters*quarter_value);

    dimes=balance/dime_value;
    balance-=(dimes*dime_value);

    nickles=balance/nickle_value;
    balance-=(nickles*nickle_value);

    // pennies=balance/pennie_value;
    // balance-=(pennies*pennie_value);
    pennies=balance;

    cout<<"Dollars: "<<dollars<<endl;
    cout<<"Quarters: "<<quarters<<endl;
    cout<<"Dimes: "<<dimes<<endl;
    cout<<"Nickles: "<<nickles<<endl;
    cout<<"Penny: "<<pennies<<endl;
    




    
    return 0;
}