#include<iostream>
#include<vector>
#include<string>
using namespace std;

void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string>v);
void print_vector(vector<string>v);

void pass_by_value1(int num)
{
    num=1000;
}
void pass_by_value2(string s)
{
    s="Changed";
}
void pass_by_value3(vector<string>v)
{
    v.clear();
}
void print_vector(vector<string>v)
{
    for(auto s:v)
       cout<<s<<" ";
    cout<<endl;   
}
int main(){
    int num{10};
    int another_num{20};

    cout<<"\nNum before calling pass_by_value1: "<<num<<endl;
    pass_by_value1(num);
    cout<<"Num after calling pass_by_value1: "<<num<<endl;
    cout<<"\nAnother num before calling pass_by_value: "<<another_num<<endl;
    pass_by_value1(another_num);
    cout<<"Another num after calling pass_by_value: "<<another_num<<endl;

    cout<<"\n==================================================================="<<endl;

    string name{"Frank"};
    cout<<"\nName before calling pass_by_value2: "<<name<<endl;
    pass_by_value2(name);
    cout<<"Name after calling pass_by_value2: "<<name<<endl;

    cout<<"\n==================================================================="<<endl;

    vector<string>stooges{"larry","moa","curly"};
    cout<<"\nStooges before calling pass_by_valu3: "<<endl;
    print_vector(stooges);
    pass_by_value3(stooges);
    cout<<"Stooges after calling pass_by_value3: "<<endl;
    print_vector(stooges);

    
    cout<<endl;

    return 0;
}