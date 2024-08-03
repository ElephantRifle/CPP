#include<iostream>
#include<string>
using namespace std;
int main(){

    string numbers{};
    cout<<"Enter what you want to print: ";
    getline(cin,numbers);

    int length=numbers.length();
    
    cout<<"\n";

    for(int i{1};i<=length;i++)
    {
        for( int k{1};k<=length-i;k++)
        {
            cout<<" ";
        }
        for(int j{0};j<i;j++)
        {
            cout<<numbers.at(j);
        }
        for(int j{i-2};j>=0;j--)
        {
            cout<<numbers.at(j);
        }
        cout<<endl;
        
    }

    cout<<endl;

        for(int i{1};i<=length;i++)
    {
        for( int k{1};k<=length-i;k++)
        {
            cout<<" ";
        }
        for(int j{1};j<=i;j++)
        {
            cout<<numbers.at(j-1);
        }
        for(int j{i-1};j>=1;j--)
        {
            cout<<numbers.at(j-1);
        }
        cout<<endl;
        
    }
    
    return 0;
}
