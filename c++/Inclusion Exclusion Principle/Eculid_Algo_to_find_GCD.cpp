//GCD -  Greatest Common Difference (HCF- Highest Common Factor)
// 1 - Prime factor 24 = 2*2*2*3  
//                  42 = 2*3*7
//     Common = 2 and 3 
//     HCF or GCF = 2*3=> 6.

//Q - Find GCF using Eculid Algorithm

#include<iostream>
using namespace std;
int gcd(int a,int b){
    
    if(b > a){
        int temp = a;
        a = b;
        b = temp;
    }
    
    while(b != 0){
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int main(){
    int a{},b{};

    cout<<"First number: ";
    cin>>a;
    cout<<"Second number: ";
    cin>>b;

    cout<<gcd(a,b);

    return 0;
}