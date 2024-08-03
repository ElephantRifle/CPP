//Passing Pointer to function
#include<iostream>
using namespace std;

void multiply_with_pointer(int *int_ptr,int multiplier){
    int product{};
    // cout<<"The Product is: "<<*int_ptr * multiplier;// We can us this to P product
    *int_ptr *=multiplier;
    cout<<*int_ptr<<endl;
    
}
int main(){
    int num{};
    int multiplier{};
    int *int_ptr{&num};

    cout<<"Enter a number between 1 and 100: ";
    cin>>num;
    cout<<"Enter a number to multiply with other: ";
    cin>>multiplier;
    
    multiply_with_pointer(int_ptr,multiplier);

    return 0;
}