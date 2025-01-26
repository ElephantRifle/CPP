#include<iostream>
#include<cmath>

using namespace std;


//Print all the prime number b/t two numbers

// bool prime(int num){
//     if(num <= 1){
//         return false;
//     }
//     for(int i{2}; i <= sqrt(num);i++){
//         if(num % i == 0){
//             return  false;
//         }
//     }
//     return true;    
// }

// int main(){
//     int a{},b{};

//     cout<<"Enter 1: ";
//     cin>>a;
//     cout<<"Enter 2: ";
//     cin>>b;
    
//     for(int num{a};num <= b;num++){
//         if(prime(num)){
//             cout<<num<<endl;
//         }
//     }

//     return 0;
// }

//-------------------------------------------------------------------------------//
//-------------------------------------------------------------------------------//
//-------------------------------------------------------------------------------//

//Fibenacci Sequence

// void fibo(int n){
//     int t1{0};
//     int t2{1};

//     for(int i{2};i <= n;i++){
//         cout<<t1<<" ";

//         int series{};
//         series = t1 + t2;
//         t1 = t2;
//         t2 =series;
//         // cout<<" "<<series;
//     }    
// }

// int main(){
//     int n{};

//     cout<<"Enter the terms: ";
//     cin>>n;

//     fibo(n);

//     return 0;
// }

//-------------------------------------------------------------------------------//
//-------------------------------------------------------------------------------//
//-------------------------------------------------------------------------------//

//Factorial

// int factorial(int n){
//   int sum{1};
//   for(int i{1};i <= n;i++){
//         sum *= i;  
//     }
//     return sum;
// }

// int main(){
//     int n{};
//     cout<<"Enter: ";
//     cin>>n;

//     int result =factorial(n);
//     cout<<result;

//     return 0;
// }

//-------------------------------------------------------------------------------//
//-------------------------------------------------------------------------------//
//-------------------------------------------------------------------------------//

//Binary Coefficent

// int  coeff(int n){
//     int coefficient{1};
//     for(int i{1};i <= n;i++){
//         coefficient *= i;
//     }
//     return coefficient;
// }

// int main(){
//     int n{},r{};

//     cout<<"n : ";
//     cin>>n;
//     cout<<"r : ";
//     cin>>r;

//     int ans = coeff(n)/ (coeff(n-r)*coeff(r));
//     cout<<ans<<endl;


//     return 0;
// }

//-------------------------------------------------------------------------------//
//-------------------------------------------------------------------------------//
//-------------------------------------------------------------------------------//


//Pascal Triangle we can solve it by calculating ncr  n!/(n-r)!*r!

// int main(){
//     int n{};
//     cout<<"Enter a number: ";
//     cin>>n;

//     for(int i{1};i <= n;i++){

//         double coefficient{1.0};

//         for(double j{1};j <= i;j++){//or declare j as int and convert it to double in coefficient
//             cout<<coefficient<<" ";
//             coefficient *=(i-j)/j;
//         }
//         cout<<endl;
//     }

//     return 0;
// }

//OR
// int fact(int n){
//     int factorial{1};
//     for(int i{1};i <= n;i++){
//         factorial*=i;
//     }
//     return factorial;
// }
// int main(){
//     int n{};
//     cout<<"Enter a number: ";
//     cin>>n;

//     for(int i{0};i < n;i++){//make sure i & j start from 0 else 1 starting value will be missing in each row.

//         for(int j{0};j <= i;j++){
//             cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

//NOT A PROPER WORKING CODE
// int calc(int i){
//     double coefficient{1.0};

//     for(double j{1};j <= i;j++){//or declare j as int and convert it to double in coefficient
//         cout<<coefficient<<" ";
//         coefficient *=(i-j)/j;
//     }
//     cout<<endl;
//     return coefficient;
       
// }
// int main(){
//     int n{};
//     cout<<"Enter a number: ";
//     cin>>n;

//     for(int i{1};i <= n;i++){
//         double ans = calc(i);
//         cout<<ans;
//     }

//     return 0;
// }


//-------------------------------------------------------------------------------//
//-------------------------------------------------------------------------------//
//-------------------------------------------------------------------------------//



