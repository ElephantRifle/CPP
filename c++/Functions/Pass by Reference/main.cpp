#include<iostream>
#include<vector>
#include<string>
using namespace std;

void pass_by_ref1(int &num);
void pass_by_ref2(string &s);
void pass_by_ref3(vector<string>&v);
void print_vector(const vector<string> &v);//const

void pass_by_ref1(int &num)
{
    num=100;
}
void pass_by_ref2(string &s)
{
    s="Changed";
}
void pass_by_ref3(vector<string>&v)
{
    v.clear();
}
void print_vector(const vector<string> &v)
{
    for(auto s:v)
       cout<<s<<" ";
    cout<<endl;   
}

int main(){
    int num{10};
    int another_num{20};
    
    cout<<"\nNum before calling pass_by_ref1: "<<num<<endl;
    pass_by_ref1(num);
    cout<<"Num after calling pass_by_ref1: "<<num<<endl;

    cout<<"\nAnother num before calling pass_by_ref1: "<<another_num<<endl;
    pass_by_ref1(another_num);
    cout<<"Another num after calling pass_by_ref1: "<<another_num<<endl;

    string name{"Frank"};
    cout<<"\nName before calling pass_by_ref2: "<<name<<endl;
    pass_by_ref2(name);
    cout<<"Name after calling pass_by_ref2: "<<name<<endl;

    vector<string>stooges{"Larry Moa Curly"};
    cout<<"\nStooges before passing pass_by_value3: ";
    print_vector(stooges);
    pass_by_ref3(stooges);
    cout<<"Stooges after passing pass_by_value3: ";
    print_vector(stooges);








    return 0;
}