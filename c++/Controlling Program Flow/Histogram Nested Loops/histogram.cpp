#include<iostream>
#include<vector>
using namespace std;
int main(){

    int num_items{};
    cout<<"\nHow many data items do you have? ";
    cin>>num_items; 

    vector<int>data{}; 

    for(int i{1};i<=num_items;i++){
      int data_items{};
      cout<<"Enter data items "<<i<<":";
      cin>>data_items;

      data.push_back(data_items);
    }  
    cout<<"\nDisplaying Histogram:"<<endl;
    
    for(auto val:data){
        for(int i{1};i<=val;i++){
            if(i%5==0)
              cout<<'*';
            else  
              cout<<'-';
        }
        cout<<endl;
    }
    cout<<endl;


    return 0;
}