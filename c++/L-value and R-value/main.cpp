#include<iostream>
using namespace std;

/*We cannot assign add(4) in function &a  because:
1) &a is reference and can only accept a L-value

how to avoid this:
1) Use const as using const we can assign a r-value(4) to an l-value{const int &a}.
2) Assign 4 in a variable in main function and then pass that value to function.
3) Declae int &a to &&a so it can store r-value {int &&a} but after doing this 
we cannot pass a l-value as(a) into a fucntion, which is now updated to accept r-vale
only*/
void add(int &&a){
    int b =10;
    cout<<a+b;
}
int main(){
    int a = 12;
    add(a);    

    return 0;
}

/*This info and l-value and r-value may not do much as we can overcome all this 
by just defining a new variable but it is efficient when we use CLASS AND OBJECT 
in which when we COPY CONSTRUCTOR and need to use MOVE SYEMANTICS */