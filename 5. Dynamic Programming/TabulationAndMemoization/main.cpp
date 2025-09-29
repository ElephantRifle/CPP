#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::vector;

//#define Normal_Recursion_Fibonanci
//#define Memoization_Form
#define Tabulation_Form

#ifdef Normal_Recursion_Fibonanci


int fibo(int n){
    if(n <= 1){
        return n;
    }

    return fibo(n-1)+fibo(n-2);
}

int main(){
    int n{};
    cout<<"Enter a number: ";
    cin>>n;

    cout<<fibo(n);


    return 0;
}

#endif

#ifdef Memoization_Form

int memo(int n,vector<int> &dp){
    if(n <= 1){
        return n;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    return dp[n] = memo(n-1,dp)+memo(n-2,dp);
}

int main(){
    int n{};
    cout<<"Enter a number: ";
    cin>>n;

    vector<int>dp(n+1,-1);
    cout<<memo(n,dp);


    return 0;
}

#endif

#ifdef Tabulation_Form

int main(){
    int n{};
    cout<<"Enter a number: ";
    cin>>n;

    int prev2= 0;
    int prev = 1;

    for(int i = 2;i <= n;++i){
        int result = prev + prev2;
        prev2 =prev;
        prev = result;
    }
    cout<<prev;

    return 0;
}

#endif