#include<iostream>
using namespace std;

// #define a1
// #define a2
// #define a3
// #define a4
#define a5
//#define a6
//#define a7
//#define a8




#ifdef a1
//Q - Add all numbers till n
int sum(int n){//Base Call
    if(n == 0){ // We can use while (n != 0) if we want to 
        return 0;
    }
    int prev_sum = sum(n - 1);//Recursive Call
    return n + prev_sum; // you can remove prev_sum and replace prev_sum in return to sum(n-1)
}
int main(){
    int n{};
    cout<<"Enter a number: ";
    cin>>n;

    cout<<sum(n);


    return 0;
}
#endif
//-------------------------------------------------------------------------------------------
#ifdef a2
//Q-Calculate n raised to power of p

int power(int n,int p){//Base Call
    if(p == 0){//Base condition
        return 1;
    }
    int prev_power = power(n,p - 1);//Recusive Call
    return n * prev_power;//Replace prev_power with power(n,p-1)

}

int main(){
    int n{},p{};
    cout<<"Enter number and power: ";
    cin>>n>>p;

    cout<<power(n,p);

    return 0;
}
#endif
//--------------------------------------------------------------------------------------------
#ifdef a3
//Q - Find the factorial of n

int fact(int n){ // Base Call
    if(n == 0){//Base condition
        return 1;
    }
    int prev_num = fact(n-1);//Recursive Call
    return n * prev_num;//Replace prev_num with fact(n-1)

}
int main(){
    int n{};
    cout<<"Enter a number: ";
    cin>>n;

    cout<<fact(n);

    return 0;
}
#endif
//-------------------------------------------------------------------------------------------
#ifdef a4
//Q- Print n th fibonacci number

int fibo(int n){
    if(n == 0 || n == 1){
        return n;
    }
    return fibo(n-1) + fibo(n-2);


}

int main(){
    int n{};
    cout<<"Enter a number: ";
    cin>>n;

    cout<<fibo(n);

    return 0;
}

#endif
//------------------------------------------------------------------------------------
#ifdef a5
//Q- Check if array is sorted or not 
bool sorted(int arr[],int n){

}
int main(){
    int arr[]{1,4,5,2,8,9,3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<sorted(arr,n);
    return 0;
}
#endif
//------------------------------------------------------------------------------------
#ifdef a6

#endif
//------------------------------------------------------------------------------------
#ifdef a7

#endif
//-----------------------------------------------------------------------------------
#ifdef a8

#endif
//------------------------------------------------------------------------------------