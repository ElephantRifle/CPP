#include<iostream>
using namespace std;
int main(){
    int n{};
    cout<<"Enter the number: ";
    cin>>n;
    cout<<endl;

cout<<"Pattern 1.1"<<endl;
 for(int i{1};i<=n;i++)
 {
    for(int j{1};j<=i;j++)
    {
        cout<<"*";
    }
    cout<<endl;
 }
 cout<<"\nPattern 1.2"<<endl;

for(int i{1};i<=n;i++)
{
    for(int k{n-i};k>=1;k--)
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
cout<<"Pattern 1.3"<<endl;

for(int i{1};i<=n;i++)
{
    for(int j{1};j<=i;j++)
    {
        cout<<i;
    }
    cout<<endl;
}

cout<<"\nPattern 1.4"<<endl;
for(int i{1};i<=n;i++)
{
    for(int k{n-i};k>=1;k--)
    {
        cout<<" ";
    }
    for(int j{1};j<=i;j++)
    {
        cout<<i;
    }
    cout<<endl;
}
cout<<endl;
cout<<"Pattern 1.5"<<endl;
for(int i{1};i<=n;i++)
{
    for(int j{1};j<=i;j++)
    {
        cout<<j;
    }
    cout<<endl;
}

cout<<endl;

cout<<"Pattern 1.6"<<endl;
int x{1};
for(int i{1};i<=n;i++)
{
    for(int j{1};j<=i;j++)
    {
        cout<<x ++;
        cout<<" ";
    }
    cout<<endl;
}
cout<<endl;

cout<<endl;

cout<<"Pattern 2.1"<<endl;
 for(int i{1};i<=n;i++)
 {
    for(int j{i};j<=n;j++)
    {
        cout<<"*";
    }
    cout<<endl;
 }

cout<<endl;

cout<<"Pattern 2.2"<<endl;

for(int i{n};i>=1;i--)
{
    for(int k{n-i};k>=1;k--)
    {
        cout<<" ";
    }
    for(int j{i};j>=1;j--)
    {
        cout<<"*";
    }
    cout<<endl;
}

cout<<"Pattern 2.3"<<endl;

for(int i{n};i>=1;i--)
{
    for(int j{i};j>=1;j--)
    {
        cout<<(n-i+1);
    }
    cout<<endl;
}

cout<<endl;



cout<<endl;
cout<<"Pattern 2.4"<<endl;
for(int i{n};i>=1;i--)
{
    for(int k{n-i};k>=1;k--)
    {
        cout<<" ";
    }
    for(int j{i};j>=1;j--)
    {
        cout<<(n-i+1);
    }
    cout<<endl;
}



    return 0;
}