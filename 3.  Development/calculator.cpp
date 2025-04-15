#include<iostream>
#include<vector>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

//#define to_extract
//#define no_decimal_values
//#define can_handle_decimal_values
#define  parentheses_implement

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

#ifdef no_decimal_values

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

#ifdef can_handle_decimal_values


double dec_modulo(double a ,double b){
    int s1 = a / b;
    double s2 = a - (s1 * b);

    return s2;
}

int main(){
   string input{};
   cout<<"Enter a number: ";
   getline(cin,input);
   
   int len = input.length();

   double num{};
   double lastnum{};
   double decimal_p{0.1};
   char lastop{'+'};
   bool is_decimal{false};
   double result{};

   for(int i = 0; i <= len;++i){
    char c = i < len? input[i]:'+';

    if(c >= '0' && c <= '9'){
        if(!is_decimal){
            num = num * 10 +(c - '0');
        }else{
            num += ( c - '0')*decimal_p;
            decimal_p *= 0.1;
        }

    }else if(c == '.'){
        is_decimal = true;

    }else if(c == '+' || c == '-' || c == '*' || c == '/' || c == '%'){

        if(lastop == '+'){
            result += lastnum;
            lastnum = num;

        }else if(lastop == '-'){
            result += lastnum;
            lastnum = - num;

        }else if(lastop == '*'){
            lastnum *= num;

        }else if(lastop == '/'){
            lastnum /= num;

        }else if(lastop == '%'){
            lastnum = dec_modulo(lastnum,num);
        }

        lastop = c;
        num = 0;
        decimal_p = 0.1;
        is_decimal = false;

   }
}
    result += lastnum;
    cout<<result;

    return 0;
}

#endif

#ifdef squareroot_implement

//Newton-Raphson method to find square root
double mysqrt(double N) {
    double x = N;
    double epsilon = 1e-9;

    while ((x * x - N) > epsilon || (x * x - N) < -epsilon) {
        x = 0.5 * (x + N / x);
    }

    return x;
}

double mod_f_mul(int a , int b){
    int s1 = a / b;
    double s2 = (s1 * b) - a;

    return s2;
}


int main(){
    string input{};
    cout<<"->";
    getline(cin,input);

    int size = input.length();


    double num{};
    double lastnum{};
    double result{};
    double decimal_point{0.1};

    bool is_decimal{false};
    char lastop{'+'};
    bool square_root{false};
    bool is_square{false};

    for(int i = 0;i <= size;++i){
        char c = i < size ? input[i] : '+';

        // if(i < 2 && 
        //     input[i] == 's'&&
        //     input[i+1] == 'q'&&
        //     input[i+2] == 'r')
        //     {
        //         is_square = true;
        //         i += 2;
        //         continue;
        //     }
        if(i < 3 && 
            input[i] == 's' && 
            input[i+1]== 'q'&&
            input[i+2]=='r'&&
            input[i+3]== 't')
            {
                square_root = true;
                i += 3;
                continue;
            }

        if(c >= '0' && c <= '9'){
            if(!is_decimal){
                num = num * 10 +(c - '0');
            }else if(is_decimal){
                num += decimal_point *(c - '0');
                decimal_point *= 0.1;
            }

        }else if(c == '.'){
            is_decimal = true;
        }

        else if(c == '+' || c == '-'|| c == '*' || c == '/' || c == '%'){
            
            if(square_root){
                result += mysqrt(num);
                square_root = false;
            }
            else if(lastop == '+'){
                result += lastnum;
                lastnum = num;
            }else if(lastop == '-'){
                result += lastnum;
                lastnum = -num;
            }else if(lastop == '*'){
                lastnum *= num;
            }else if(lastop == '/'){
                lastnum /= num;
            }else if(lastop == '%'){
                lastnum = mod_f_mul(lastnum, num);
            }
            num = 0;
            lastop = c;
            decimal_point = 0.1;
            is_decimal = false;

        }else if(c == 's' || c == 'q' || c == 'r' || c == 't'){
            square_root = true;
        }
    }
    result += lastnum;
    cout<<result<<endl;


    return 0;
}




#endif
