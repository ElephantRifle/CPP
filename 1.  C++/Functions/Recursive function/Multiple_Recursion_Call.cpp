#include<iostream>
#include<vector>
using namespace std;
//==================================================================
// int fibo(int n){
//     if(n <= 1){
//         return n;
//     }
//     return fibo(n-1) + fibo(n-2);
// }

// int main(){
//     int n{5};
//     cout<<fibo(n);

//     return 0;
// }
//==============================================================

int fibo(int n){
    if(n <= 1){
        return n;
    }
    int prev = fibo(n-1);
    int prev2 = fibo(n-2);
    
    return prev + prev2;
}

int main(){
    int n{6};
    cout<<fibo(n);

    return 0;
}