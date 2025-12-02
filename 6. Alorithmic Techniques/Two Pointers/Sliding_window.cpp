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
//Q - 

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
