#include<iostream>
#include<string>
using namespace std;

string reverse_string(string &str){
    string reversed{};
    char *start{&str.at(0)};
    char *end{&str.back()};//OR char *end=&str[str.length()-1];

    while(start<end){
        char temp{};
        temp=*start;
        *start=*end;
        *end=temp;

        start++;
        end--;
    }
    return str;

}
int main(){

    string str{};
    cout<<"Enter the string: ";
    getline(cin,str);

    reverse_string(str);
    cout<<str;

    return 0;
}