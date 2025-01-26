#include<iostream>
#include<string>
#include<vector>
using namespace std;

//Print Natural numebr till n
// int sum(int n){
//     int add{};
//     for(int i{1};i <= n;i++){
//         add+= i;
//     }
//     return add;
// }
// int main(){
//     int n{};
//     cout<<"enter:";
//     cin>>n;

//     cout<<sum(n);

//     return 0;
// }

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------

//Check whether a given triplet is a pythagorean triplet of not
// bool triplet(int x,int y,int z){
//     int num{};
//     if(x > z){
//         num = x;
//         x = z;
//         z = num;
//     }else if( y > z){
//         num = y;
//         y = z;
//         z = num;
//     }
//     if((x*x) + (y*y) == (z*z)){
//         return true;
//     }else{
//         return false;
//     }

// }
// int main(){
//     int a{},b{},c{};
//     cin>>a>>b>>c;

//     if(triplet(a,b,c)){
//         cout<<"They are pythagorean triplet"<<endl;
//     }else{
//         cout<<"They are not."<<endl;
//     }

//     return 0;
// }
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------

//Conversions

int binary_to_decimal(int n){
    int ans{0};
    int x{1};

    while(n > 0){
        int y = n % 10;
        ans += (x * y);
        x *= 2;
        n /= 10;
    }
    return ans;
}

int octal_to_decimal(int n){
    int ans{0};
    int x{1};

    while(n > 0){
        int y = n % 10;
        ans += x * y;
        x *= 8;
        n /= 10;
    }
    return ans;
}

int hexadecimal_to_decimal(string hex){
    int ans{0};
    int x{1};
    int size = hex.size();//DO NOT PUT CURLY TO ASSIGN VALUE WITH SIZE FUNCTION

    for(int i{size-1};i >= 0;i--){
        if(hex[i] >= '1' && hex[i] <= '9'){
            ans += x *(hex[i] - '0');
        }
        else if(hex[i] >= 'A' && hex[i] <= 'F'){
            ans += x *(hex[i] - 'A' + 10);
        }
        else if(hex[i] >= 'a' && hex[i] <= 'f'){
            ans += x *(hex[i] - 'a' + 10);
        }
        x *= 16;
    }
    return ans;

}

string decimal_to_binary(int n){
   
    // int x{1};
    // string ans{};
    // int d{2};
    // if(n == 0){
    //     return "0";
    // }
    // if(n == 1){
    //     return "1";
    // }
   
    // while(n > 1){
    //     if(n % 2 == 0){
    //         ans = '0' + ans;
    //     }else{
    //         ans = '1' + ans;
    //     }
    //     n /= 2;
    //     if(n == 1){
    //         ans = '1' + ans;
    //         break;
    //     }
    // }
    // return ans;
    if (n == 0) {
    return "0";  // Special case for 0
    }
    string ans;
    while (n > 0) {
        int remainder = n % 2;
        ans = std::to_string(remainder) + ans;
        n /= 2;
    }
    return ans;
}

string decimal_to_octal(int n){
    string ans{""};
   
    while(n > 0){
        int remainder = n % 8;
        ans = to_string(remainder) + ans;
        n /= 8;
    }
    return ans;
}

string decimal_to_hexadecimal(int n){
    string ans{""};
    while(n > 0){
        int remainder = n % 16;
        if(remainder >= 10){
            char c = 'A' + remainder -10;
            ans.push_back(c);
        }
        ans = to_string(remainder) + ans;
        n /= 16;
    }
    return ans;
}


int main(){
    int n{};
    //Binary to decimal
    cout<<"Binary to Decimal(ex:1011,101): ";
    cin>>n;

    int b_t_d = binary_to_decimal(n);//Function
    cout<<b_t_d<<endl;

    //---------------------------------------------------------

    //Octal to decimal
    int n2{};
    cout<<"\nOctal to Decimal(ex:12,13,6): ";
    cin>>n2;

    int oct_to_d = octal_to_decimal(n2);//Function
    cout<<oct_to_d<<endl;

    //---------------------------------------------------------

    //Hexadeciaml to Decimal
    string hex{};
    cout<<"\nHexadecimal to decimal b/t(0 to 'F'): ";
    cin>>hex;

    int hex_to_dec = hexadecimal_to_decimal(hex);//Function
    cout<<hex_to_dec<<endl;

    //---------------------------------------------------------

    //Decimal to Binary
    int n3{};
    cout<<"Deciaml to Binary(ex:12,10,56): ";
    cin>>n3;

    string d_to_b = decimal_to_binary(n3);//Function
    cout<<d_to_b;

    //---------------------------------------------------------

    //Decimal to Octal

    int n4{};
    cout<<"\nDecimal to Octal: ";
    cin>>n4;

    string d_to_o = decimal_to_octal(n4);
    cout<<d_to_o<<endl;

    //---------------------------------------------------------

    //Decimal to Hexadeciaml
    int n5{};
    cout<<"\nDecimal to hexadecimal: ";
    cin>>n5;

    string d_to_hd = decimal_to_hexadecimal(n5);
    cout<<d_to_hd<<endl;

    //---------------------------------------------------------
    return 0;
}

