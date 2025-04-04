#include<iostream>
#include<vector>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

//#define to_extract
#define correct_code

#ifdef to_extract
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

#endif

#ifdef correct_code

int length(string input){
    int size = 0;
    int i = 0;
    while(input[i] != '\0'){
        size++;
        i++;
    }
    return size;
}

int main(){
    string input{};

    cout<<"Enter the values: ";
    getline(cin,input);
    
    int len = length(input);
    int num{};
    int lastNum{};
    char lastOpe = '+';
    int result{};

    for(int i = 0;i <= len;++i){
        char c = (i < len ? input[i] : '+');

        if(c >='0' && c <= '9'){
            num = num * 10 +(c - '0');

        }else if(c == '+' || c == '-' || c == '/' || c == '*' || c == '%'){
            if(lastOpe == '+'){
                result += lastNum;
                lastNum = num;
            }else if(lastOpe == '-'){
                result += lastNum;
                lastNum = -num;
            }else if(lastOpe == '*'){
                lastNum *= num;
            }else if(lastOpe == '/'){
                lastNum /= num;
            }else if(lastOpe == '%'){
                lastNum %= num;
            }
            lastOpe = c;
            num = 0;
        }
    }
    result += lastNum;

    cout<<result;

    return 0;
}




#endif

   
