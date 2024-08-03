#include<iostream>
using namespace std;
int main(){

    int n{};
    cout<<"Enter the number of levels you want: ";
    cin>>n;
    for(int i{1};i<=n;i++)
    {
        for(int j{1};j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<endl;
    
    for(int i{n};i>=1;i--)
    {
        for(int j{i};j>0;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<endl;

    for (int  i{1}; i <=n; i++)
    {
        for(int k{n-i};k>0;k--)
        {
          cout<<" ";
        }  
          for(int j{1};j<=i;j++)
          {
              cout<<"*";
          }  
        cout<<endl;
    }

    cout<<endl;

    for(int i{n};i>=1;i--)
    {
        for(int k{n-i};k>0;k--)
        {
            cout<<" ";
        }
        for(int j{i};j>=1;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;


    cout<<endl;

    return 0;
}