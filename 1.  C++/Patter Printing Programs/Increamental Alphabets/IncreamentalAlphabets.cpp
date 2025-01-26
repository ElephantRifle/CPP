#include<iostream>
using namespace std;
int main(){
    int n{};
    cout<<"Enter the number:";
    cin>>n;
     
    char alphabet{'a'};
    for(int i{1};i<=n;i++)
    {
        for(int j{1};j<=i;j++)
        {
            cout<<alphabet;  
        }
        cout<<endl;
        alphabet++;
    }

    cout<<endl;

    for(int i{1};i<=n;i++)
    {
        char alphabet_2{'a'};

        for(int j{1};j<=i;j++)
        {
            cout<<alphabet_2++;
            
        }
        cout<<endl;
    } 

    cout<<endl;
    
    char alphabet_3{'a'};
    for(int i{1};i<=n;i++)
    {
        for(int j{1};j<=i;j++)
        {
            cout<<alphabet_3;
            alphabet_3++;
        }
        cout<<endl;
    }


    cout<<endl;

    for(int i{1};i<=n;i++)
    {
        for(int k{n-i};k>=0;k--)
        {
            cout<<"  ";
        }
        for(int j{1};j<=i;j++)
        {
            cout<<char('A'+j-1)<<" ";
        }
        for(int j{i-1};j>=1;j--)
        {
            cout<<char('A'+j-1)<<" ";
        }
        cout<<endl;
    }


    return 0;
}