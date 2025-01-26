#include<iostream>
#include<typeinfo>//add to know the type of a variable
using namespace std;

int main(){
    int num1{},num2{},num3{};
    int total{};
    int count{3};

    cout<<"Enter 3 numbers separated with space: ";
    cin>>num1>>num2>>num3;

    cout<<typeid(total).name()<<endl;// the typeid operator
    total=num1+num2+num3;

    double average{};
    average=static_cast<double>(total)/count;//explicit casting total to get the answer in decimal ,according to the numbers

    cout<<"The 3 numbers are: "<<num1<<","<<num2<<","<<num3<<endl;
    cout<<"The sum of numbers are: "<<total<<endl;
    cout<<"The average is: "<<average<<endl;
    
    cout << typeid(total).name() << endl;// the typeid operator


    return 0;
}