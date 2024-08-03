#include<iostream>
#include<string>
using namespace std;

string add_two_binary(string s1, string s2){
    int i{},j{};
    string result{};
    int carry{0};

    i = s1.size()-1;
    j = s2.size()-1;

    while(i >= 0 || j >=0 || carry != 0){
        int sum = carry;

        if(i >= 0){
            sum += s1[i] - '0';
            i--;
        }
        if(j >= 0){
            sum+= s2[j] - '0';
            j--;
        }
        carry = sum/2;
        sum = sum % 2;

        result = to_string(sum) + result;
    }
    return result;
}

int main(){
    string s1{},s2{};

    cout<<"-> ";
    cin>>s1;

    cout<<"-> ";
    cin>>s2;

    string solution = add_two_binary(s1,s2);
    cout<<solution<<endl;
    return 0;
}