#include<iostream>
using namespace std;

void modify_grocery_list();//prototype

void grocery_list(int apples=3,int oranges=7,int mangoes=13)// Declare the function prototype with default argument values
{
    cout<<"Apples: "<<apples<<endl;
    cout<<"Mangoes: "<<oranges<<endl;
    cout<<"Oranges: "<<mangoes<<endl;
}


int main(){
    modify_grocery_list();//function Call


    return 0;
}

void modify_grocery_list()//Definition
{
    cout<<"\nGrocery list this week: "<<endl;
    grocery_list();

    cout<<"\nGrocery list second week: "<<endl;
    grocery_list(5);

    cout<<"\nGrocery list third week: "<<endl;;
    grocery_list(7,11);
    cout<<endl;
}