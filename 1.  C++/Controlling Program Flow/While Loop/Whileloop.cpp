#include<iostream>
using namespace std;
int main(){
    // int num{};
    // cout<<"Enter a number: ";
    // cin>>num;

    // while(num>0){
    //     cout<<num<<endl;
    //     --num;
    // }

    // cout<<"Blast off..";

//    int num{};

//    cout<<"Enter a number: ";
//    cin>>num;
   
//    int i{1};
//    while(num>=i){
//     cout<<i<<endl;
//     ++i;
//    }

//   int num{};
//   cout<<"Enter a number  between 1-100: ";
//   cin>>num;

//   while(num>=100){
//     cout<<"Enter a number  between 1-100: ";
//     cin>>num;
//   }
//   cout<<"Thanks.";

 bool done{false};
 int num{};
 while(!done){
    cout<<"Enter a number between 1 and 5: ";
    cin>>num;

    if(num<=1 || num>=5)
      cout<<"Out of range try again."<<endl;
    else{
      cout<<"Thanks."<<endl;
      done=true;
    }
    
 }
    return 0;
}