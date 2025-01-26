#include<iostream>
using namespace std;
//Normal Way of finding Prime Numbers 
// int main(){
//     int a{};
//     cout<<"number: ";
//     cin>>a;
//     bool flag{true};
//         if(a <= 1){
//             flag = false;

//         }else{
//             for(int i{2};i < a/2;i++){//or use sqrt instead of a /2 write sqrt(a)
//                 if(a % i == 0){
//                     flag = false;
//                     break;
//                 }
//         cout<<"It is a Prime number."<<endl;
//     }else{
//         cout<<"It is not a Prime number."<<endl;
//     }

//     return 0;
// }
//Normal Way of finding Prime Numbers 
// int main(){
//     int arr[]{11,13,4,56,101,34,78,110,17,19};
//     int size = sizeof(arr) / sizeof(arr[0]);


//     for(int i{0};i < size;i++){
//         bool flag{true};
//         int a = arr[i];

//         if(a <= 1){
//             flag = false;
//         }else{
//             for(int j{2};j <= a/2;j++){
//                 if(a % j == 0){
//                   flag = false;
//                   break;
//                 }
//             }
//         }
//         if(flag)
//             cout<<a<<" is a Prime Number."<<endl;
//     }
//     return 0;
// }


//Sieve of Eratosthenes Method
//"sieve" refers to a method for finding all prime numbers up to a given limit
// void isPrime(int n){
//     int prime[100]{0}; // We can use n instead of 100 as few compiler supports VLAs 
//     for(int i{2};i <= n;i++){
//         if(prime[i] == 0){
//             for(int j{i*i};j <= n;j+=i){
//                 prime[j] = 1;
//             }
//         }
//     }
//     for(int i{2};i <= n;i++){
//         if(prime == 0){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int n{};
//     cout<<"Number: ";
//     cin>>n;

//     isPrime(n);
    
//     return 0;
// }



//Prime Factorisation using Sieve

void primefactor(int n){
    int spf[n]{};

    for(int i{2};i <= n;i++){
        spf[i] = i;
    }
    for(int i{2};i <= n;i++){
        if(spf[i] == i){
            for(int j{i*i};j <=n ;j+=i){
                if(spf[j] == j){
                    spf[j] = i;
                }
            }
        }
    }
    while(n != 1){
        cout<<spf[n]<<" ";
        n = n / spf[n]; 
    }
}
int main(){
    int n{};
    cout<<"Enter number: ";
    cin>>n;

    primefactor(n);

    return 0;
}
