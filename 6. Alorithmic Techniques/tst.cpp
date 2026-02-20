#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main(){
    int arr[]{1,1,0,1,1,1,0,1,1,1,1,0};
    int size = sizeof(arr)/sizeof(arr[0]);

    int left,right{};
    int maxlen{};

    while(right < size){
        if(arr[right] == 0){
            left = right + 1;
        }
        maxlen = max(maxlen,right - left + 1);
        right++;
    }
    
    cout<< maxlen;

 
    return 0;
}