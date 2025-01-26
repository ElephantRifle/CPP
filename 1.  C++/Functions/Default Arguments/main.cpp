#include<iostream>
#include<iomanip>
using namespace std;

double calc_cost(double base_cost=100,double tax_rate=0.06,double shipping=3.50);

double calc_cost(double base_cost,double tax_rate,double shipping)
{
    return base_cost+=(base_cost*tax_rate)+shipping;
}

int main(){

    double cost{0};
    cout<<fixed<<setprecision(2)<<endl;

    cost=calc_cost(100,0.08,4.25);
    cout<<"\nCost is: "<<cost<<endl;

    cost=calc_cost(100,0.08);
    cout<<"Cost is: "<<cost<<endl;

    cost=calc_cost(200.0);
    cout<<"Cost is: "<<cost<<endl;

    cost=calc_cost();
    cout<<"Cost is: "<<cost<<endl;

    cout<<endl;

   return 0;
}