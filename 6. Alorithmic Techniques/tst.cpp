#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main(){
    string s = "cadbzabcd";
    int len = s.length();

    vector<int>hash(256,-1);

    int i{},j{};
    int maxlen{};

    while(j < len){
        char ch = s[j];

        if(hash[ch] != -1 && i <= hash[ch]){
            i = hash[ch] + 1;
        }
        maxlen = max(maxlen, j-i+1);
        hash[ch] = j;
        j++;

    }
    cout<<maxlen;

    return 0;
}