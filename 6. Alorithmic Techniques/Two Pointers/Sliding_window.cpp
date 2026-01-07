#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
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

//         while(sum > target){ // use if when asked only length   else if subarray is required use while 
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
//Q - Find Longest Substring with Non Repeating Character

//Un-optimised way
//Complexity = O(n^3)

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


//


//Un-Optimised Way using HASH MAP 
//Complexity = O(n^2)

// int main(){
//     string arr{"cadbzabcd"};
//     int size = arr.length();
//     int max_length{};
    
//     for(int i = 0;i < size;++i){
//         unordered_map<int,int>seen;
//         seen.reserve(256);

//         for(int j = i;j < size;++j){
//             if(seen[arr[j]] == 1)break;
//             max_length = max(max_length,j-i+1);
//             seen[arr[j]] = 1;
//         }
        
//     }
//     cout<<"Maximum Length->"<<max_length;
// }



//OPTIMISED WAY 

//INTUTION - we will move left pointer 1 index ahead of Repeating character WHY? cuz if we don't we will never get length greater then max_len 

//OR  

//Move left to one past the last occurrence of the repeated character — otherwise the duplicate remains in the window, preventing us from forming a longer valid substring.

// int main(){
//     string arr{"cadbzabcd"};
//     vector<int>hash(256,-1);
//     int size = arr.length();

//     int max_len{};
//     int left{} ,right {};

//     while(right < size){
//         char c = arr[right];
//         if(hash[c] != -1 && hash[c] >= left ){
//             left = hash[c] + 1;
//         }
        
//         max_len = max(max_len,right - left + 1);
//         hash[c] = right;
//         right++;
//     }


//     cout<<max_len;
//     return 0;
// }


//==========================================================
//485. Max Consecutive Ones(Sliding Window (fixed condition))

// int main(){
//     vector<int>nums{1,1,1,1,0,1,1,1};
//     int size = nums.size();

//     int left{},right{};
//     int maxlen{};

//     while(right < size){
//       if(nums[right] == 0){
//         left = right + 1;
//       }
//       maxlen = max(maxlen,right - left + 1);
//       right++;
//     }
//     cout<<"MAX ONES->"<<maxlen;

// }