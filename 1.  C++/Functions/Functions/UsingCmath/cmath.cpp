#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double num{};
    cout<<"\nEnter the number(double): ";
    cin>>num;

    cout<<"The square root of "<<num<<" is "<<sqrt(num)<<endl;
    cout<<"The cuberoot of "<<num<<" is "<<cbrt(num)<<endl;

    cout<<"\nThe sin of "<<num<<" is "<<sin(num)<<endl;
    cout<<"The cosin of "<<num<<" is "<<cos(num)<<endl;

    cout<<"\nThe ceil of "<<num<<" is "<<ceil(num)<<endl;
    cout<<"The floor of "<<num<<" is "<<floor(num)<<endl;
    cout<<"The round of "<<num<<" is "<<round(num)<<endl;
    cout<<endl;

    double power{};
    cout<<"Enter the power to raise "<<num<<" to :";
    cin>>power;

    cout<<num<<" raised to the power "<<power<<" is : "<<pow(num,power)<<endl;
    cout<<endl;



    return 0;
}