#include<iostream>
#include<vector>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;


int main(){
    string input{};
    vector<int>arr{};
    vector<int>values{};
    
    cout<<"->";
    getline(cin,input);


    int length{0};
    int i{0};
    int num{};

    while(input[i] != '\0'){
        if(input[i] >= '0' && input[i] <= '9'){
            arr.push_back(i);
            i++;
            length++;
        }else{
            i++;
            length++;
        }
    }
   
    for(auto temp : arr){
        cout<<temp<<" ";
    }
    cout<<'\n';

    for(int i = 0;i < length;++i){
        if(arr[i] == i){
            num += input[i] - '0';
            num *= 10;
        }else if(arr[i] != i){
            num /= 10;
            if(num != 0){
                values.push_back(num);
            }
            num = 0;
        }
    }
    for(auto temp : values){
        cout<<temp<<" ,";
    }

    return 0;
}
    
   
