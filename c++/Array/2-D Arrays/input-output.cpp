#include<iostream>
using namespace std;
int main(){
    int n{},m{};

    cout<<"Rows: ";
    cin>>n;
    cout<<"Columns: ";
    cin>>m;

    int a[n][m];

    for(int i{0};i < n;i++){
        for(int j{0};j < m;j++){
            cout<<">>";
            cin>>a[i][j];
        }
    }
    cout<<"Matrix: "<<endl;
    for(int i{0};i < n;i++){
        for(int j{0};j < m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}