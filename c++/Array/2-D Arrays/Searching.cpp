#include<iostream>
using namespace std;
int main(){
    int n{},m{};
    int target{};
    bool flag{false};
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
    cout<<"Target: ";
    cin>>target;

    for(int i{0};i < n;i++){
        for(int j{0};j < m;j++){
            if(a[i][j] == target){
                flag = true;
            }
        }
    }
    
    if(flag){
        cout<<"Found: ";
    }else{
        cout<<"Not Found."<<endl;
    }

    return 0;
}