#include<iostream>
using namespace std;
int main(){
    int a{10};

    int *ptr{&a};
    cout<<*ptr<<endl;//10 
    cout<<&a<<endl;//Address of a in memory

    int **qt{&ptr};//Pointer to Pointer (storing the addess of ptr pointer to another pointer q)
    cout<<*qt<<endl;//it will print value of p(which stores the address of a so the ans will be addess of a )
    cout<<**qt<<endl;//1st it will dereference to p and then to a(10) ans == 10

    **qt = 12;//Changing the value of a to 12
    cout<<**qt<<endl;//12

    int ***qt2{&qt};//We can make pointer to pointer to pointer.......
    cout<<***qt2<<endl;


    return 0;
}