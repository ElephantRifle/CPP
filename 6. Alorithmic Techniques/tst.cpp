#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main(){
    int arr[]{0,1,0,1,1,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    int left,right{};
    int maxlen{};
    int zero_count{};
    int k{1};

    while(right < size){
        if(arr[right] == 0){
            zero_Count++;
        }
        while(zero_count > 1){
            if(arr[left] == 0){
                zero_count--;
            }
            left++;
        }
        
        maxlen = max(maxlen,right - left + 1);
        right++;
    }
    
    cout<< maxlen;

 
    return 0;
}