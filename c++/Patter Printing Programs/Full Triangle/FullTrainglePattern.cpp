#include<iostream>
using namespace std;
int main(){

    int n{};
    cout<<"Enter the numbers: ";
    cin>>n;
    cout<<endl;

    for(int i{1};i<=n;i++)
    {
        for(int k{n-i};k>=1;k--)
        {
            cout<<" ";
        }
        for(int j{1};j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(int i{n};i>=1;i--)
    {
        for(int k{n-i};k>=1;k--)
        {
            cout<<" ";
        }
        for(int j{i};j>=1;j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(int i{1};i<=n;i++)
    {
        for(int k{n-i};k>=1;k--)
        {
            cout<<"  ";
        }
        for(int j{1};j<=i*2-1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<endl;


    return 0;
}