#include<iostream>
#include<cmath>
using namespace std;

// //Prime Number
// int main(){
//     int number{};
//     cout<<"Enter a number: ";
//     cin>>number;
//     bool prime{true};
//     for(int i{2};i <= sqrt(number);i++){
//         if(number % i == 0){
//             prime = false;
//             break;
//         }
//     }
//     if(prime){
//         cout<<"Is Prime"<<endl;
//     }else{
//         cout<<"Not A Prime"<<endl;
//     }
//     return 0;
// }
//Reverse l_digit number
//(1)
// int main(){
//     int number{};
//     cout<<"Enter a number: ";
//     cin>>number;

//     string reverse = to_string(number);
    
//     int size = reverse.length();
//     string reverse_1{};

//     for(int i{size-1};i >= 0;i--){
//         reverse_1+= reverse[i];
//     }
//     cout<<reverse_1;

//     return 0;
// }
//(2)
// int main(){
//     int number{};
//     int reverse{};
//     cout<<"Enter a number: ";
//     cin>>number;

//     while(number>0){
//         int last_digit = number%10;
//         reverse = reverse*10 + last_digit;
//         number= number/10;
//     }
//     cout<<reverse<<endl;

//     return 0;
// }


//Check if a given number is a Armstrong number
int main(){
    int n{},sum{};

    cout<<"Enter a number: ";
    cin>>n;
    
    int original_no = n;
    
    while(n > 0){
        int l_digit = n % 10;
        sum = sum+(l_digit*l_digit*l_digit);
        n = n/10;
  }
  if(sum == original_no){
    cout<<"Number is a Armstrong number"<<endl;
  }else{
    cout<<"It is not a Armstrong number "<<endl;
  }
  
    return 0;
}