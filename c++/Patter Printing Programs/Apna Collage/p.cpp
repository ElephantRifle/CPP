#include<iostream>
using namespace std;
int main(){
    int col{},row{};
    cout<<"Enter col: ";
    cin>>col;

    cout<<"Enter row: ";
    cin>>row;
    cout<<"\n";

    cout<<"Rectangle"<<endl; 
    for(int i{1};i <=row;i++)
    {
        for(int j{1};j <= col;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<"=========================================="<<endl;

    cout<<"Hollow Rectangle"<<endl;

    for(int i{1};i <= row;i++){
        for(int j{1};j <=col;j++){
          if(i == row || i == 1 || j == 1 || j == col){
            cout<<"*";
          }else{
            cout<<" ";
          }        
        }
        cout<<endl;
    }

    cout<<"=========================================="<<endl;

    cout<<"Invered Half Pyramid"<<endl;
    int n{};
    cout<<"Enter a number: ";
    cin>>n;

    for(int i{1};i <= n;i++){
        for(int j{n-i};j >= 0;j--){
            cout<<"* ";
        }
        cout<<endl;
    }

    //OR

    for(int i{n};i >= 1;i--){
        for(int j{1};j <= i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }


    cout<<"=========================================="<<endl;

    cout<<"Opposite Triangle"<<endl;
    for(int i{1};i <= n;i++){
        for(int k{1}; k <= i;k++){
            cout<<" ";
        }
        for(int j{n-i};j >= 0;j--){
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<"=========================================="<<endl;


    cout<<"Half Pyramid after 180 degree rotation"<<endl;
    for(int i{1};i <= n;i++){
        for(int k{n-i};k >= 1;k--){
            cout<<"  ";
        }
        for(int j{1};j <= i ;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    

    cout<<"Better Approach"<<endl;
    for(int i{1};i <= n;i++){
        for(int j{1};j <= n;j++){
            if(j <= n-i){
                cout<<"  ";
            }else{
                cout<<"* ";
            }
        }
        cout<<endl;
        
    }
    cout<<"=========================================="<<endl;

    cout<<"Half Pyramid Using numbers"<<endl;
    for(int i{1};i <= n;i++){
        for(int j{n};j > n-i;j--){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    cout<<"=========================================="<<endl;

    cout<<"Floyd's Triangle"<<endl;
    int count_1{1};
    for(int i{1};i <= n;i++){
        for(int j{1};j <=i;j++){
            cout<<count_1<<" ";
            count_1++;
        }
        cout<<endl;
    }

    cout<<"=========================================="<<endl;
    cout<<"Butter Fly Pattern"<<endl;
    //Upper Half
    for(int i{1};i <= n;i++){
        for(int j{1};j <= i;j++){
            cout<<"*";
        }
        for(int k{1};k <= 2*n - 2*i;k++){
            cout<<" ";
        }
        for(int j{1};j <= i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    //Lower Half
    // n-1 cuz we were getting extra line of * after the first half completes its execution   
       for(int i{n-1};i >= 1;i--){
        for(int j{1};j <= i;j++){
            cout<<"*";
        }
        for(int k{1};k <= 2*n - 2*i;k++){
            cout<<" ";
        }
        for(int j{1};j <= i;j++){
            cout<<"*";
        }
        cout<<endl;
       }

    cout<<"=========================================="<<endl;
    cout<<"Diamond Pattern"<<endl;


    for(int i{1};i <= n;i++){
        for(int k{n-i};k >= 1;k--){
            cout<<" ";
        }
        for(int j{1};j <= i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i{1};i <= n;i++){
        for(int k{1};k <= i;k++){
            cout<<" ";
        }
        for(int j{n-i};j >= 1;j--){
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<"=========================================="<<endl;

    cout<<"Inverted Pattern"<<endl;

    int count_2{1};
    for(int i{1};i <= n;i++){
        for(int j{n+1-i};j >=1;j--){
            cout<<count_2<<" ";
            count_2++;
        }
        cout<<endl;
        count_2 = 1;
    }
    //OR
    for(int i{1};i <= n;i++){
        for(int j{1};j <= n+1-i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<"=========================================="<<endl;

    cout<<"0 - 1 Pattern"<<endl;

    for(int i{1};i <= n;i++){
        for(int j{1};j <= i;j++){
            if((i + j) % 2 == 0){
                cout<<" 1";
            }else{
                cout<<" 0";
            }
        }
        cout<<endl;
    }
    cout<<"=========================================="<<endl;

    cout<<"Rhombus Pattern "<<endl;

    for(int i{1};i <= n;i++){
        for(int k{1}; k <= n-i;k++){
            cout<<" ";
        }
        for(int j{1};j <= n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<"=========================================="<<endl;

    cout<<"Number Pattern"<<endl;

    for(int i{1};i <= n;i++){
        for(int k{1};k <= n-i;k++){
            cout<<" ";
        }
        for(int j{1};j <= i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<"=========================================="<<endl;

    cout<<"Palindromic Pattern"<<endl;

    for(int i{1};i <= n;i++){
        for(int k{1};k <= n-i;k++){//For Space
            cout<<"  ";
        }
        for(int j{i};j >=1;j--){//For Printing row no to 1 (lest handside)
            cout<<j<<" ";
        }
        for(int j{2};j <= i;j++)//For Printing from 1 to row no(right handside)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<"=========================================="<<endl;

    cout<<"Star Pattern"<<endl;
    //First Half
    for(int i{1};i <= n;i++){
        for(int k{1};k <=n-i;k++){
            cout<<"  ";
        }
        for(int j{1};j <= (2*i)-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    //Second Half
    for(int i{n};i >= 1;i--){
        for(int k{i};k < n;k++){
            cout<<"  ";
        }
        for(int j{(2*i)-1};j>=1;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"=========================================="<<endl;

    cout<<"Zig - Zag Pattern"<<endl;

    for(int i{1};i <= 3;i++){
        for(int j{1}; j <= n;j++){
            if((i+j) % 4 == 0 || (i == 2 && j % 4 == 0) ){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    cout<<"=========================================="<<endl;

    cout<<" Hollow Butterfly Pattern"<<endl;

    cout<<"=========================================="<<endl;
    



    return 0;
}

