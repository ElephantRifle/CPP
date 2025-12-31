#include<iostream>
#include<string>
#include<vector>
using namespace std;

//Q - Find longest length of subarray 
// int main(){
//     int arr[]{3,4,5,3};
//     int size = sizeof(arr) /sizeof(arr[0]);

//     int target{7};

//     int left = 0,right = 0;
//     int sum{};
//     int length{};

//     while(right < size){
//         sum += arr[right];

//         while(sum > target){ // use if when asked only length else if subarray is required use while 
//             sum -= arr[left];
//             left++;
//         }
//         length = max(length,right- left + 1);//if want to print  
//                                              //subarray do changes 
//                                             //in this
//         right++;
//     }
//     cout<<length;

//     return 0;
// }

//Complexity: While O(n+n)
//COmplecity: if O(n)

//Q - Find longest length of subarray also print the subarray 
// int main() {
//     int arr[]{2,5,1,7,10};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int target{9};
    
//     int sum{};
//     int maxLen{};
//     int left{},right{};
//     int lvalue{},rvalue{};
    
//     while(right < size){
//         sum += arr[right];
//         while(sum > target){
//             sum -= arr[left];
//             left++;
//         }
        
//         if(maxLen < (right - left + 1)){
//             maxLen = right - left + 1;
//             lvalue = left;
//             rvalue = right;
//         }
        
//         right++;
//     }
//     cout<<"[";
//     for(int i = lvalue;i <= rvalue;++i){
//         cout<<arr[i]<<",";
//     }
//     cout<<"]";
//     cout<<"->"<<maxLen;

//     return 0;
// }

//Q - Maximum points you can obtain from cards ,we hace to pick 4 cards
//CONDITON - You cannot pickup from the middle either pick from LEFT or RIGHT

// int main(){
//     int arr[]{6,2,3,4,7,2,1,7,1};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int k = 4;
//     int left{},right{size - 1};

//     int sum{};
//     int _max{};
//     while(left < k){
//         sum += arr[left];
//         left++;
//     }
//     _max = max(_max,sum);
//     left = k - 1;

//     while(left >= 0){
//         sum -= arr[left--];
//         sum += arr[right--];
//         _max = max(_max,sum);
//     }
//     cout<<_max;

//     return 0;
// }


//================================================================
//Q - Longest Substring without Duplicate Elements


//WITHOUT HASH MAP
// Complexity : O(n^3)
// int main(){
//     string arr{"cadbzabcd"};
//     int size = arr.length();

//     int max_len{};

//     for(int i = 0;i < size;++i){
//         for(int j = i;j < size;++j){
//             bool is_it{false};

//             for(int k = j - 1;k >= i;k--){
//                 if(arr[j] == arr[k]){
//                     is_it = true;
//                     break;
//                 }
//             }
//             if(is_it){
//                 max_len = max(max_len,j-i);
//                 break;
//             }else{
//                 max_len = max(max_len,j-i+1);
//             }
//         }
//     }
//     cout<<max_len;
    
//     return 0;
// }


//WITH HASH MAP
//Include <unordered_map>
//Complexity: O(n^2)
// int main() {
//     string s{"cadbzabcd"};
//     int n = s.length();
//     int maxlen{};
    
//     unordered_map<char,int>seen;
//     seen.reserve(256);
    
//     for(int i = 0;i < n;++i){
//         seen.clear();
//         for(int j = i;j < n;++j){
//             if(seen[s[j]] == 1)break;
//             maxlen = max(maxlen,j-i+1);
//             seen[s[j]] = 1;
//         }
//     }
//     cout<<maxlen;

//     return 0;
// }



//OPTIMIZED WAY
//Complexity: O(n)
int main(){
    string arr{"cadbzabcd"};
    vector<int>hash(256,-1);
    int size = arr.length();

    int max_len{};
    int left{} ,right {};

    while(right < size){
        if(hash[arr[right]] != -1 && hash[arr[right]] >= left){
            left = hash[arr[right]] + 1;
        }
        
        max_len = max(max_len,right - left + 1);
        hash[arr[right]] = right;
        right++;
    }


    cout<<max_len;

    return 0;
}
