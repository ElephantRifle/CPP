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
    vector<int>operands{};    //To store value in integer form 
    vector<char>operators{};  //To store operators
    
    cout<<"->";
    getline(cin,input);
 
    int num{};
    bool flag{false};

    for(char c : input){
        
        if(c >= '0' && c <= '9'){
            num =num * 10 +(c - '0');
            flag = true;
        }else{
            if(flag){
                operands.push_back(num);
                num = 0;
                flag = false;
            }
        }
    }
    if(flag){
        operands.push_back(num);
    }

    for(auto temp : operands){
        cout<<temp<<" ";
    }

    for(char c : input){

        if(c == '+'){
            operators.push_back(c);
        }else if( c == '-'){
            operators.push_back(c);
        }else if(c == '*'){
            operators.push_back(c);
        }else if(c == '/'){
            operators.push_back(c);
        }else if(c == '%'){
            operators.push_back(c);
        }
    }
    for(auto temp : operators){
        cout<<temp<<" ";
    }

    return 0;
}
    
   
