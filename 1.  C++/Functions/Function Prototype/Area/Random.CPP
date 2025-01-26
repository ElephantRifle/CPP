#include<iostream>
using namespace std;
// void param_test(int formal)
// {
//     cout<<formal<<endl;
//     formal=100;
//     cout<<formal<<endl;

// }
// int main(){
//     int actual{50};
//     cout<<actual<<endl;

//     param_test(actual);
//     cout<<actual<<endl;



//     return 0;
// }

#include<iostream>
using namespace std;
void passbyvalue(int x,int y)
{
    int z=x;
    x=y;
    y=z;
}
int main(){
    int a{5},b{6};

    cout<<"Before swapping "<<endl;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;

    passbyvalue(a,b);

    cout<<"After swapping "<<endl;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;

    pass(a,b);

  

    return 0;
}