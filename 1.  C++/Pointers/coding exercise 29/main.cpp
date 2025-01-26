#include<iostream>
using namespace std;
int main(){
    // int a{5};
    // int b{10};

    // int *a_ptr{&a};
    // int *b_ptr{&b};

    // a_ptr=&b;
    // b_ptr=&a;

    // cout<<"\nBefore swap: "<<a<<","<<b<<endl;
    // cout<<"After swap: "<<*a_ptr<<","<<*b_ptr<<endl;
    // cout<<endl;

// //------------------------------------------------------------------------------
// void swap(int &a,int &b)
// {
//     int *a_ptr{&a};
//     int *b_ptr{&b};

//     a_ptr=&b;
//     b_ptr=&a;

//     cout<<"Before swap: "<<a<<" "<<b<<endl;
//     cout<<"After swap: "<<*a_ptr<<" "<<*b_ptr<<endl;
// }

// int main(){
//     int a{5};
//     int b{10};
//     swap(a,b)

// // -------------------------------------------------------------------------------
    int a{5};
    int b{1};

    int *a_ptr{&a};
    // int *b_ptr{&b};

    *a_ptr=10;
    // b_ptr=&a;
    a_ptr=&b;
    a_ptr=&a;
    a_ptr=&b;

    cout<<*a_ptr<<endl;
    cout<<a_ptr<<endl;
    
    cout<<&a<<endl;
    cout<<&b<<endl;

    cout<<a<<endl;
    cout<<b<<endl;
    
    cout<<endl;

//-------------------------------------------------------------------------

    return 0;
}
