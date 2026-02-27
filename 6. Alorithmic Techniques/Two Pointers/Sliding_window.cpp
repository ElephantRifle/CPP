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


/*  
TEMPLATE:
    expand right
    update freq
    while invalid:
        shrink left
    update answer

This same template solves:
1.Longest substring without repeating characters
2.Fruit into baskets
3.Longest subarray with sum ≤ K
4.Max consecutive ones (with flips)

*/

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
//=============================================================

//Q- Max Consecutive Ones II 
//Complexity = O(n),O(1)
// int main(){
//   int arr[]{1,0,0,1,1,1,0};
//   int size = sizeof(arr)/sizeof(arr[0]);

//   int left{},right{};
//   int maxlen{};
//   int zero_count{};

//   while(right < size){
//     if(arr[right] == 0){
//       zero_count++;
//     }
//     while(zero_count > 1){
//       if(arr[left] == 0){
//         zero_count--;
//       }
//       left++;
//     }
//     maxlen = max(maxlen,right - left + 1);
//     right++;
//   }
//   cout<<maxlen;

//   return 0;
// }

//===========================================================
//Q - Max Consecutive Ones III
// int main(){
//   int arr[]{1,0,0,1,1,1,0};
//   int size = sizeof(arr)/sizeof(arr[0]);

//   int left{},right{};
//   int maxlen{},zero_count{};

//   int user_pref{};
//   cout<<"->";
//   cin>>user_pref;

//   while(right < size){
//     if(arr[right] == 0){
//       zero_count++;
//     }
//     while(zero_count > user_pref){
//       if(arr[left] == 0){
//         zero_count--;
//       }
//       left++;
//     }
//     maxlen = max(maxlen,right - left + 1);
//     right++;

//   }
//   cout<<maxlen;


//   return 0;
// }

//=============================================================
// Q - 904 Fruit into Basket

//Using Hash Map (unordered_map)
// int main(){
//   int arr[]{3,3,3,1,2,1,1,2,3,3,2};
//   int size = sizeof(arr)/sizeof(arr[0]);

//   int left{},right{};
//   int maxlen{};
//   int k{};
  
//   cout<<"Values->";
//   cin>>k;

//   unordered_map<int,int>basket;

//   while(right < size){
//     basket[arr[right]]++;

//     if(basket.size() > k){
//       while(basket.size() > k){
//         basket[arr[left]]--;
        
//         if(basket[arr[left]] == 0){
//           basket.erase(arr[left]);
//         }
//         left++;
//       }
//     }
//     //if(basket.size() <= k ){} NOT NEEDED ALLREADY CHECKED
//     maxlen = max(maxlen,right - left + 1);
//     right++;

//   }
//   cout<<maxlen;
//   return 0;
// }


//BIT MORE OPTIMIZED
//(Currenly Not Working)

// int main(){
//   int arr[]{1, 2, 3, 4, 2, 2};
//   int size = sizeof(arr)/sizeof(arr[0]);

//   int left{},right{};
//   int maxlen{};

//   int k{};
//   cout<<"->";
//   cin>>k;

//   unordered_map<int,int>basket;

//   while(right < size){
//     basket[arr[right]]++;

//     while(basket.size() > k){//USE if BUT AGAINST ALGO PRINCIPLE ALSO REMOVE 356 line if condition 
//       basket[arr[left]]--;

//       if(basket[arr[left]] == 0){
//         basket.erase(arr[left]);
//       }
//       left++;
//     }
//     if(basket.size() <= k){
//       maxlen = max(maxlen,right - left + 1);
//       right++;
//     }
//   }
//   cout<<maxlen;


//   return 0;
// }

//==============================================================
//340 - Longest Substring with atmost K distinct character

// int main(){
//     string arr{"aaabbccd"};
//     int length = arr.length();

//     int left{},right{};
//     int maxlen{};
//     int k{};
//     cout<<"->";
//     cin>>k;

//     unordered_map<char,int>limit;
    

//     while(right < length){
//         //char c = arr[right];
//         limit[arr[right]]++;

//         while(limit.size() > k){//USE if IT WORKS TOO,BUT AGAINST PRICIPLE
//             limit[arr[left]]--;

//             if(limit[arr[left]] == 0){
//                 limit.erase(arr[left]);
//             }
//             left++;
//         }
//         maxlen = max(maxlen,right - left + 1);
//         right++;

//     }
//     cout<<maxlen;

//     return 0;
// }

//==============================================================
//Q -1358  Number of substrings containing all three characters
//   (Given a string s consisting only of characters a, b and c)

// Time Complexity: O(n^2)
// int main(){
//     string arr{"abcabc"};
//     int length = arr.length();

//     //int left{},right{};
//     int count{};
//     int present[3]{0};

//     for(int i = 0;i < length;++i){
//         for(int j = i;j < length;++j){
//             present[arr[j] - 'a'] = 1; // arr[j] = a -> a - a = 0 index
//              if(present[0] + present[1] + present[2] == 3){
//                 count++;
//             }
//         }
//         present[0] = present[1] = present[2] = 0;
//     }
//     cout<<count;
//     return 0;
// }

//Time Complexity: O(n)

// int main(){
//     string arr{"bbacb"};
//     int length = arr.length();

//     int right{};
//     int count{};
//     int freq[3]{-1,-1,-1};//freq[3]{-1};wont work
//     /*WHY? C++ Initialization RULE
//     If fewer initializers are provided than the array size,
//     remaining elements are value-initialized
//    */
//     while(right < length){
//         freq[arr[right] - 'a'] = right;

//         if(freq[0] != -1 && freq[1] != -1 && freq[2] != -1){
//             count = count + (1+min(freq[0],min(freq[1],freq[2])));
//         }
//         right++;
//     }
//     cout<<count;

//     return 0;
// }

//ONE MORE WAY USING VECTOR
// int main() {
//     string arr{"aabcabc"};
//     int len = arr.length();
    
//     int count{};
//     int left{},right{};
    
//     vector<int>freq(3,0);
    
//     while(right < len){
//         freq[arr[right] - 'a']++;
        
//         while(freq[0] > 0 && freq[1]>0 && freq[2]> 0){
//             count += len - right;
//             freq[arr[left] - 'a']--;
//             left++;
//         }
//         right++;
//     }
//     cout<<count;
    
//     return 0;
// }

//==================================================================
//Q - 424 Longest Repeating character Replacement

//Complexity = O(n^2)
//Space = constant O(1)
// int main(){
//     string arr{"AABABBA"};
//     int len = arr.length();
//     int maxlen{};
//     int k{};
//     cout<<"->";
//     cin>>k;
    
//     for(int i = 0;i < len;++i){

//         vector<int>freq(26,0);
//         int maxfreq{};

//         for(int j = i;j < len;++j){
//             freq[arr[j] - 'A']++;
//             maxfreq = max(maxfreq, freq[arr[j] - 'A']);
//             int changes = (j-i+1) - maxfreq;
//             if(changes <= k){
//                 maxlen = max(maxlen,j - i + 1);
//             }else{
//                 break;
//             }
//         }
//     }
//     cout<<"Max: "<<maxlen;
//     return 0;
// }

//Complexity = O(n)(Sliding Window)
//IN THE WINDOW CHANGE ITS LENGTH
// int main(){
//     string arr{"AABABBB"};
//     int len = arr.length();
//     int left{},right{};
//     int maxlen{},maxfreq{};
//     int k{};

//     cout<<"->";
//     cin>>k;

//     vector<int>freq(26,0);
    

//     while(right < len){
//         freq[arr[right] - 'A']++;
//         maxfreq = max(maxfreq,freq[arr[right] - 'A']);

//         while((right - left + 1) - maxfreq > k){
//             freq[arr[left] - 'A']--;
//             left++;
//         }
//         maxlen = max(maxlen, right - left + 1);
//         right++;
//     }
//     cout<<"Max: "<<maxlen;

//     return 0;
// }


//SAME COMPLEXITY BUT IN THIS WE WONT CHANGE THE MAXLEN WINDOW WE GOT
//OR WE WONT WE DECREASING THE MAXLEN SIZE WINDOW LIKE PREVIOUS

// int main(){
//     string arr{"AABABBB"};
//     int len = arr.length();
//     int left{},right{};
//     int maxlen{},maxfreq{};
//     int k{};
//     cout<<"->";
//     cin>>k;
    
//     vector<int>freq(26,0);

//     while(right < len){
//         freq[arr[right] - 'A']++;
//         maxfreq = max(maxfreq,freq[arr[right] - 'A']);

//         if((right - left + 1) - maxfreq > k){
//             freq[arr[left] - 'A']--;
//             left++;
//         }
//         maxlen = max(maxlen,right - left + 1);
//         right++;
//     }
//     cout<<maxlen;

//     return 0;
// }

//=================================================================================================
// Q - 930 . Binary subarray with sum

/* 1.If we try to solve this problem using a normal sliding window (moving right forward and shrinking left only 
when temp == goal), we may miss valid subarrays, especially when the array contains 0s, because multiple subarrays 
can end at the same right.

2.So instead of counting subarrays with sum exactly equal to goal directly, we first count all subarrays 
whose sum is ≤ goal using a sliding window (atMost(goal)).

3.Similarly, we count all subarrays whose sum is ≤ goal − 1 using the same logic (atMost(goal - 1)).

4.Finally, we subtract these two results:
. atMost(goal) − atMost(goal − 1)
. This gives the number of subarrays whose sum is exactly equal to goal.
*/
//DRY RUN THIS CODE TO UNDERSTAND WHY TRADITIONAL APPROACH FAILS

// int main() {
//    int arr[]{1,0,1,0,1};
//    int size = sizeof(arr)/sizeof(arr[0]);
   
//    int temp{},sum{};
//    int left{},right{};
//    int goal = 2;
   
//    while(right < size){
//        temp += arr[right];
      
//         while(temp > goal){
//             temp -= arr[left];
//             left++;
//         }
//        right++;
//        sum += (right - left + 1);
//    }
//    cout<<sum;
//    return 0;
// }
//------------

//CORRECT SOLUTION 
int fun(int arr[],int goal,int size){
    int temp{},sum{};
    int left{},right{};
    
    while(right < size){
        temp += arr[right];
        while(temp > goal){
            temp -= arr[left];
            left++;
        }
       sum += (right - left + 1);
       right++;
   }
   return sum;
}
int main() {
   int arr[]{1,0,1,0,1};
   int size = sizeof(arr)/sizeof(arr[0]);
   int goal = 2;
   
   int result = fun(arr,goal,size) - fun(arr,goal-1,size);
   cout<<result;
 
   return 0;
}



    

