#include<iostream>
#include<string>
#include<vector>
using namespace std;

void print(int);
void print(double);
void print(string);
void print(string,string);
void print(vector<string>);

void print(int num)
{
    cout<<"Printing int: "<<num<<endl;
}
void print(double num)
{
    cout<<"Printing double: "<<num<<endl;
}
void print(string s)
{
    cout<<"Printing string: "<<s<<endl;
}
void print(string s,string t)
{
    cout<<"Printing two strings: "<<s<<" and "<<t<<endl;
}
void print(vector<string>v)
{
    cout<<"Printing vector of string: ";
    for(auto s:v)
       cout<<s+" ";
    cout<<endl;   

}

int main(){
    cout<<endl;
    print(100);
    print('A');//Characters are always promoted to integers should print  65 ASCII='A' 
    print(123.5);//double
    print(123.3F);//F here make this a float not a double ,but float will be promoted to double
    print("C-Style String");//c-style is converted into c++ string

    string s{"C++ String"};
    print(s);
    print("C-style string",s);

    vector<string>v{"Larry","Moa","Curly"};
    print(v);


    cout<<endl;


    return 0;
}
//-----------------------------------------------------------------
// int function(int a,int b)
// {
//     return a+b;
// }
// double function(double a,double b)
// {
//     return a+b;
// }

// int main(){

//     double a{};
//     double b{};

//     cout<<"\nEnter a: ";
//     cin>>a;

//     cout<<"\nEnter b: ";
//     cin>>b;

//     cout<<function(a,b); 


//     return 0;
// }