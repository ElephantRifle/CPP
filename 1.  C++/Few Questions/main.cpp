#include<iostream>
#include<string>
#include<vector>
#include<cctype>
#include<algorithm>
using namespace std;


/*Q-Write a program to print the multiplication 
table of a given number using a while loop.*/
// int main(){
//     int number{1};
//     int counter{};
//     cout<<"Enter a number : ";
//     cin>>counter;
    
// while(number <=10 ){
//     cout<<counter<<" * "<<number<<" = "<<counter*number<<endl;
//     number++;
// }
//     return 0;
// }

/*Q-Write a program to find the sum of alleven numbers between
 1 and 100 using a for loop.*/

// int main(){
//     int number{100};
//     int total{};
//     for(int i{0};i<=100;i+=2){
//         total+=i;
//     }
//     cout<<total;

//     return 0;
// }

/*Q-Write a program to check if a given number is prime or not 
using a while loop.*/

// int main(){
//     int number{};
//     int i{2};
//     bool set{false};
//     cout<<"Enter a number: ";
//     cin>>number;

//     while(i < number){
//         if( number % i ==0 && i != number){
//             set = true;
//             break;    
//         }
//         i++;
//     }
//     if(set){
//         cout<<number<<" is not a Prime number."<<endl;
//         cout<<number<<" is divisible by "<<i<<endl;
//     }else{
//         cout<<number<<" is Prime."<<endl;
//     }

//     return 0;
// }
/*Q-Write a program to calculate the factorial of a number using a for loop.*/
// int main(){
//     int number{};
//     int factorail{1};//Make it 1 or zero * any number will be zero

//     cout<<"Enter a number: ";
//     cin>>number;

//     for(int i{1};i<=number;i++){
//         factorail*=i;
//     }
//     cout<<factorail;

//     return 0;
// }

/*Q-Write a program to print the Fibonacci series up to a 
given limit using a for loop.*/
// int main(){
//     int number{};
//     int fibo_0{0};
//     int fibo_1{1};
//     int fibo{};

//     cout<<"Enter  a number: ";
//     cin>>number;

//     for(int i {1}; i< number;i++){
//         fibo = fibo_0 + fibo_1;
//         fibo_0 = fibo_1;
//         fibo_1 = fibo;
//     }
//     cout<<fibo<<endl;

//     return 0;
// }
/*Q- Write a program to find the largest element in an array using a for loop.*/
// int main(){
//     int arr[]{12,1,34,5,7,36,89,654,45,257,6,1};
//     int point{arr[0]};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int largest{};

//     for(int i{1};i<size;i++){
//         if( point <= arr[i]){
//             point = arr[i];
//             largest = point ;
//             cout<<largest<<endl;
//         }
//     }
//     cout<<largest;
//     return 0;
// }
/*Q- Write a program to reverse a given string using a while loop.*/
// int main(){
//     string value{};
//     int i{};

//     cout<<"Enter a string: ";
//     getline(cin,value);

//     int size = value.length();
//     int start {0};
//     int end{size-1};

//     while(start < end){
//         char temp = value[start];
//         value[start] = value[end];
//         value[end] = temp;

//         start++;
//         end--;   
//     }
//     cout<<value;
    

//     return 0;
// }


/*Q- Write a program to print the ASCII values of all 
uppercase letters using a for loop.*/



/*Q-Write a program to check if a given string is a palindrome using a 
for loop.*/
// int main(){
//     string input_string{};
//     bool plaindrome{true};
//     cout<<"Enter a number: ";
//     getline(cin,input_string);

//     int length = input_string.length();
//     int start{0};
//     int end{length-1};

//     while(start < end){
//         if( input_string[start] != input_string[end]){
//             plaindrome = false;
//             break;
//         }
//         start++;
//         end--;
//     }
//     if( plaindrome == true ){
//         cout<<input_string<<" is a Palindrome."<<endl;
//     }else{
//         cout<<input_string<<" not a Plaindrome."<<endl;
//     }
//     return 0;
// }

/*Q- Write a program to calculate the average of a list of numbers 
using a for loop.*/
// int main(){
//     vector<int>num{12,23,54,75,35,78,34};
//     int size = num.size();
//     int total{};
//     for(int i{0};i < size;i++){
//         total+=num.at(i);
//     }
//     int avg = total/size;
//     cout<<avg<<endl;

//     return 0;
// }

/*Q- Write a program to find the smallest element in an array using a 
while loop.*/
// int main(){
//     int arr[]{12,11,34,576,4567,54,89,10,7,4,3,7,4,1};
//     int size =sizeof(arr)/sizeof(arr[0]);
//     int point{arr[0]};
//     int smallest{};
//     int i{1};
//     while( i <= size){
//         if(point >= arr[i]){
//             point = arr[i];
//             smallest = point;
//         }
//         i++;
//     }
//     cout<<smallest<<endl;
//     return 0;
// }

/*Q- Write a program to calculate the sum of digits of a number using a 
for loop.*/
// int main(){
// int number{},sum{},digit{};

// cout<<"Enter a number: ";
// cin>>number;

// for(number != 0;number/=10){
//     digit = number % 10;
//     sum += digit;
// }
// cout<<sum;
// return 0;
// }

/*Q- Write a program to check if a given list of years has a leap year using a 
while loop.*/
// int main(){
//     int year{},size{4};
    
//     while( true ){
//         cout<<"Enter Year: ";
//         cin>>year;
//         int length = to_string(year).length();

//         if( length != size){
//             cout<<"Enter value in correct form Ex-1949,2000"<<endl;
//         }else if( year % 4 == 0 && ( year % 100 != 0 || year % 400 == 0)){
//             cout<<year<<" is a leap year."<<endl;
//             break;
//         }else{
//             cout<<year<< " Not a Leap year,"<<endl; 
//         }
//     }
   
//     return 0;
// }

/*Q- Write a program to print the multiplication table of numbers from 
1 to 5 using a for loop.*/
// int main (){
//     int s{1},e{5};

//     for(int i{1};i <= e;i++){
//         cout<<endl;
//         cout<<"Table of "<<i<<endl;
//         cout<<"----------"<<endl;
//         for(int j{1}; j<= 10;j++){
//             cout<<i<<" * "<<j<<" = "<<i*j<<endl;
//         }
//     }  


//     return 0;
// }
/*Q- Write a program to find the factorial of a number using a for loop.*/
// int main(){
//     int factorial{1},number{};

//     cout<<"Enter a number: ";
//     cin>>number;

//     for(int i{number};i > 0;i--){
//         factorial*=i;
//     }
//     cout<<"Factorail: "<<factorial;
    
//     return 0;
// }
/*Q- Write a program to count the number of vowels in a given string using a 
for loop.*/
// int main(){
//     string str{};
//     char vowels[]{'a','e','i','o','u'};

//     cout<<"Enter a string: ";
//     getline(cin,str);

//     int count{};
//     string stored{};

//     for(char s : str){
//         for(char v : vowels){
//             if(tolower(s) == v){
//                 stored+= s;
//                 count+=1;
//             }
//         } 
//     }
//     cout<<"Vowels: "<<stored<<endl;
//     cout<<"No of volwels: "<<count<<endl;
//     return 0;
// } 

//Another Approach

// int count_vowels( string &input_user){
//     int count{};

//     for( char c : input_user){
//         char lower_case = tolower(c);

//         if(isalpha(lower_case) && (lower_case == 'a' || lower_case == 'e'|| lower_case == 'i' || lower_case == 'o' || lower_case == 'u')){
//             count++;
//         }
//     }
//     return count;
// }

// int main(){
//     string input_user{};

//     cout<<"Enter a string: ";
//     getline(cin,input_user);

//     int result = count_vowels(input_user);
    
//     cout<<result;

//     return 0;
// }

//Another Approach

// int count_vowels(string &input_user){
//     int count{};
//     string vowels{"aeiouAeiou"};

//     for(char c : input_user){
//         if(vowels.find(c) != string::npos)
//         count++;
//     }
//     return count;
// }

// int main(){
//     string input_user{};

//     cout<<"Enter a string: ";
//     getline(cin,input_user);

//     int result = count_vowels(input_user);
    
//     cout<<result;

//     return 0;
// }

/*Q - Write a program to find the largest and smallest 
elements in an array using a for loop.*/

//With Using Functions
// int elements(int arr[],int length_arr,int &smallest,int &largest){
    
//     for(int i{1};i < length_arr;i++){
//         if(largest <= arr[i]){
//             largest = arr[i];
//         }
//     }

//     for(int i{1};i < length_arr;i++){
//         if(smallest >= arr[i]){
//             smallest = arr[i];
//         }
//     }
// }

// int main(){
//     int arr[]{1,34,25,674,35,76,1,876,96,43,563,63,12,34,54};
//     int smallest{arr[0]},largest{arr[0]};
//     int length_arr = sizeof(arr)/sizeof(arr[0]);

//     elements(arr,length_arr,smallest,largest);

//     cout<<"\nLargest: "<<largest<<endl;
//     cout<<"Smallest: "<<smallest<<endl;

//     return 0;
// }
//Another Approach
// int main(){
//     int arr[]{1,34,25,674,35,76,1,876,96,43,563,63,12,34,54};
//     int smallest{arr[0]},largest{arr[0]};
//     int length_arr = sizeof(arr)/sizeof(arr[0]);
    
//     for(int i{1};i <=length_arr;i++){
//         if(largest <= arr[i]){
//             largest = arr[i];
//         }
//     }

//     for(int i{1};i <=length_arr;i++){
//         if(smallest >= arr[i]){
//             smallest = arr[i];
//         }
//     }
//     cout<<"\nLargest: "<<largest<<endl;
//     cout<<"Smallest: "<<smallest<<endl;


//     return 0;
// }

//Q- WAP to count the number of 1's in numbers ranging from 0 to n?

//THIS CODE PROVIDES THE ACTUAL BINARY OF NUMBER AND THE OCCURANCE IF 1's FROM(0,n)
// #include <iostream>
// using namespace std;

// int main() {
//     int num{};
//     cout<<"Enter a number: ";
//     cin>>num;
    
//     int posi = 1;
//     int result{};
//     int count{};
//     for(int i = 1; i <= num; ++i){
//         int temp = i;
//         while(temp != 0){
//             int remainder = temp % 2;
//             result += remainder * posi;
//             temp /= 2;
//             posi *= 10;
//             if(remainder == 1){
//                 count ++;
//             }
//         }
//         posi = 1;
//         cout<<i<<"-> "<<result<<endl;
//         result = 0;
//     }
//     cout<<"Number if 1's "<<count;

//     return 0;
// }


/*Q- Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.*/

// int main(){
//     int arr[]{3,2,2,3};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int k{0};
//     int val{3};

//     for(int i = 0;i < size;++i){
//         if(arr[i] != val){
//             arr[k] = arr[i];
//             k++;
//         }
//     }
//     for(int i = 0;i < k;++i){
//         cout<<arr[i]<<" ";
//     }
//     cout<<"\n"<<k;
    
// }

//Q - Remove Duplicates from Sorted Array

// int main(){
//     int arr[]{1,1,2,3,4,4,5,6,7,7,7,8};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int k{1};

//     for(int i = 1;i < size;++i){
//         int prev = i - 1;
//         int curr = arr[i];
//         if(arr[prev] != curr){
//             arr[k] = arr[i];
//             k++;
//         }
//     }
//     for(int i = 0;i < k;++i){
//         cout<<arr[i]<<" ";
//     }
//     cout<<"\n"<<k;

//     return 0;
// }


/*Q - Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.*/

// int main(){
//     int arr[]{1,3,5,6};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int target{5};
//     int a{};

//     for(int i = 0;i < size;++i){
//         if(target > arr[i]){
//             a++;
//         }else{
//             break;
//         }
//     }
//     cout<<a;
    
//     return 0;
// }


/*Q - Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.(TWO SUM)*/

//TO FIND ALL THE AVAILABLE PAIR
// int main(){
//     int arr[]{1,5,3,7};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int target{8};
//     int sum{};

//     for(int i = 0;i < size;++i){
//         for(int j = i+1;j < size;++j){
            
//             if(arr[i] + arr[j] == target){
//                 cout<<"["<<i<<","<<j<<"]";
//             }else{
//                 sum -= arr[j] ;
//             }
//         }
//     }

//     return 0;
// }

//TO FIND ONLY ONE

// int main(){
//     int arr[]{1,5,3,7};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int target{8};
 

//     for(int i = 0;i < size;++i){
//         for(int j = i+1;j < size;++j){
//             if(arr[i] + arr[j] == target){
//                 cout<<"["<<i<<","<<j<<"]";
//                 return 0;
//             }
//         }
//     }
//     return 0;
// }


/*Q - Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.
      ---------------------THREE SUM------------------------- 
*/
//COMPLEXITY - O(n^3) not good and provides dublicated values
// int main(){
//     int arr[]{-1,0,1,2,-1,-4};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int target{0};

//     for(int i = 0;i < size;++i){
//         for(int j = i + 1;j < size;++j){
//             for(int k = j + 1;k < size;++k){
//                 if(arr[i] + arr[j] + arr[k] == target){
//                     cout<<i<<","<<j<<","<<k<<",";
//                 }
//             }
//             cout<<"\n";
//         }
//     }

//     return 0;
// }

// int main(){
//     int arr[]{-1,0,1,2,-1,-4};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     vector<vector<int>>arr_2{}; // without vector<vector>int>>arr_2 we cannot pass so many value at one time (Line 599)

//     sort(arr,arr+size);

//     for(int i = 0;i < size;++i){
//         if(i > 0 && arr[i] == arr[i-1])continue;
//         int left = i + 1;
//         int right = size - 1;

//         while(left < right){
//              int sum = arr[i] + arr[left] + arr[right] ;
//              if(sum == 0){
//                 arr_2.push_back({arr[i],arr[left],arr[right]});
//                 left++;
//                 right--;
//                 while(left < right && arr[left] == arr[left - 1]){
//                     left++;
//                 }
//                 while(left < right && arr[right] == arr[right + 1]){
//                     right--;
//                 }
//              }else if(sum < 0){
//                 left++;
//              }else{
//                 right--;
//              }
//         }
//     }
//      for (auto &triplet : arr_2) {//& Makes it faster (NO EXTRA COPY)
//         cout<<"[";
//         for(auto &tri : triplet)cout<<tri<<" ";
//         cout<<"]\n";
        
//      }

//     return 0;
// }





//Q - 4SUM Problem

// int main(){
//     int arr[]{-2,-1,-1,1,1,2,2};
//     int size = sizeof(arr) / sizeof(arr[0]);
    
//     vector<vector<int>>result{};
//     sort(arr,arr+size);
    
//     for(int i = 0;i < size;++i){
//         if(i > 0 && arr[i] == arr[i-1])continue;
//         for(int j = i+1;j < size;++j){
//             if(j > i+1 && arr[j] == arr[j-1])continue;
            
//             int left = j + 1;
//             int right = size - 1;
            
//             while(left < right){
//                 int sum = arr[i] + arr[j] + arr[left] + arr[right];
                
//                 if(sum == 0){
//                     result.push_back({arr[i],arr[j],arr[left],arr[right]});
//                     left++;
//                     right--;
//                     while(left < right && arr[left] == arr[left - 1]){
//                         left ++;
//                     }
//                     while(left < right && arr[right] == arr[right +1]){
//                         right--;
//                     }
//                 }else if(sum < 0){
//                     left ++;
//                 }else{
//                     right --;
//                 }
//             }
//         }
//     }
//     for(auto &temp : result){
//         cout<<"[";
//         for(auto & tem : temp){
//             cout<<tem<<" ";
//         }
//         cout<<"]";
//         cout<<endl;
//     }
    
//     return 0;
// }


//Q - Given a vector of integers, increment the last element only, and if it becomes multi-digit, split it into separate digits in the vector

// int main() {
//     vector<int>arr{9,9};
//     int size = arr.size();
//     int a = arr[size - 1] ;
//     a += 1;
//     arr.pop_back();
    
//     int div = 1;
//     while(a / div >= 10){
//         div *= 10;
//     }
//     while(div > 0){
//         int left = a / div;
//         arr.push_back(left);
//         a %= div;
//         div /= 10;
        
//     }
//     for(auto temp : arr){
//         cout<<temp<<" ";
//     }

//     return 0;
// }


//Q - Plus One

// int main() {
//     vector<int>arr{9,9,9,9};
//     int size = arr.size();
    
//     int carry{1};
    
//     for(int i = size -1;i >= 0;--i){
//         int sum = arr[i] + carry;
//         arr[i] = sum % 10;
//         if(sum > 9){
//             carry = 1;
//         }else{
//             carry = 0;
//         }
//     }
//     if(carry > 0){
//         //arr.resize(size + carry); OR
//         arr.push_back(0);
//         for(int i = size;i > 0;i--){ //Stop at i = 1
//             arr[i] = arr[i-1];
//         }
//         arr[0] = carry;
//     }
    
//     for(auto temp : arr){
//         cout<<temp<<" ";
//     }
    

//     return 0;
// }

//Q - Merge Sorted Array
int main(){
    //We need to add zeros = m so that we can rewrite num_1 with combined  elements
    vector<int>num_1{1,2,3,5,6,7,0,0,0};
    vector<int>num_2{2,5,6};
    vector<int>result{};

    int n{6};
    int m{3};
    int left{0},right{0};
    
    // Merge until one list is exhausted
    while(left < n   && right < m  ){
        if(num_1[left] <= num_2[right]){
            result.push_back(num_1[left]);
            left++;
        }else{
            result.push_back(num_2[right]);
            right++;
        }
    }
    //Copy remaining elements from num_1
    while(left < n ){
        result.push_back(num_1[left]);
        left++;
    }
    //Copy remaining elements from num_2
    while(right < m ){
        result.push_back(num_2[right]);
        right++;
    }

   for(int i = 0;i < m+n;++i){
        num_1[i] = result[i];
   }
   for(auto temp :num_1){
        cout<<temp<<" ";
   }


    return 0;
}


































