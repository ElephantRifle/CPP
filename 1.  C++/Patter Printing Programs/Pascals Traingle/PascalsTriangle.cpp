#include<iostream>
using namespace std;
int main(){

    int n{};
    cout<<"Enter the numbers: ";
    cin>>n;
    cout<<endl;

    for(int i{1};i<=n;i++)
    {
        int coefficient{1};
        for(int k{n-i};k>=1;k--)
        {
            cout<<" ";
        }
        for(int j{1};j <= i;j++)
        {
            cout<<coefficient<<" ";
            coefficient=coefficient*(i-j)/j;
 
        }
        cout<<endl;
    } 


    return 0;
    
}