#include<iostream>
using namespace std;

int sumofdigit(int n)
{
    if(n==0){
        return 0;
    }
    return sumofdigit(n/10)+n%10;
}

int main(){
    int n{};
    cout<<"\nProvide numbers to add: ";
    cin>>n;
    cout<<sumofdigit(n)<<endl;

    return 0;
}
