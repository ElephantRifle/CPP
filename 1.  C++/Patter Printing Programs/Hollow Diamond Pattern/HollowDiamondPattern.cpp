#include<iostream>
using namespace std;
int main(){

    int n{};
    cout<<"Enter the levels you want: ";
    cin>>n;

    cout<<endl;

    for(int i{1};i<=n;i++)
    {
        for(int j{1};j<=(2*n);j++)
        {
            if(i+j<=(n+1))
              cout<<"*";
            else
              cout<<" ";

            if((i+n)<=j)
              cout<<"*";
            else
              cout<<" ";
        }
        cout<<endl;
    }



    return 0;
}

