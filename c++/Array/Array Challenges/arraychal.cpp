#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

//Q-Given an array a[] of size n. For every i from 0 to n-1 output max(a[0], a[1],..., a[i]).

// int main(){
//     int size{};
//     cout<<"Enter size: ";
//     cin>>size;
    
//     int arr[size];
//     for(int i{0};i < size;i++){
//         cout<<">> ";
//         cin>>arr[i];
//     }
//     int largest{arr[0]};

//     for(int i{0};i < size;i++){
//         if(arr[i] > largest){
//             largest = arr[i];
//         }
//         cout<<largest<<" ";
//     }
//     return 0;
// }

//Q-GIven an array[] of size n.Output sum of each subarray of the given array

// int main(){
//     int size{};
//     cout<<"Enter size: ";
//     cin>>size;

//     int arr[size];
//     for(int i{0};i < size;i++){
//         cout<<">>";
//         cin>>arr[i];
//     }
//     int sum{};
//     for(int i{0};i < size;i++)
//     {
//         sum = 0;//If we want to add the sum of previous iteration then remove this as j loop executes completely the sum is made zero 
//         cout<<i<<"st iteration :";
//         for(int j{i};j < size;j++)
//         {
//             sum += arr[j];
//             cout<<sum<<endl;
//         }
//     }

//     return 0;
// }

/*
Q-An arithmetic array is an array that contains at least two integers and the
differences between consecutive integers are equal. For example, [9, 10], [3, 3, 3],
and [9, 7, 5, 3] are arithmetic arrays, while [1, 3, 3, 7], [2, 1, 2], and [1, 2, 4] are
not arithmetic arrays.
Sarasvati has an array of N non-negative integers. The i-th integer of the array is
Ai
. She wants to choose a contiguous arithmetic subarray from her array that has
the maximum length. Please help her to determine the length of the longest
contiguous arithmetic subarray.

Input
The first line of the input gives the number of test cases, T. T test cases follow.
Each test case begins with a line containing the integer N. The second line
contains N integers. The i-th integer is Ai
.

Output
For each test case, output one line containing Case #x: y, where x is the test case
number (starting from 1) and y is the length of the longest contiguous arithmetic
subarray.
*/
// int main(){
//     int size{};
//     cout<<"Size: ";
//     cin>>size;

//     int a[size];
//     for(int i{0};i < size;i++){
//         cout<<">>";
//         cin>>a[i];
//     }
//     int ans = 2;
//     int j = 2;
//     int pd = a[1] - a[0];
//     int curr = 2;

//     while(j < size){
//         if(pd == a[j] - a[j-1]){
//             curr++;
//         }
//         else{
//             pd = a[j] - a[j-1];
//             curr = 2;
//         }
//         // ans = max(ans,curr);
//         if(curr > ans){
//             ans = curr;
//         }
//         j++;
//     }
//     cout<<ans<<endl;
//     return 0;
// } 

/*
Q-Isyana is given the number of visitors at her local theme park on N consecutive
days. The number of visitors on the i-th day is Vi

. A day is record breaking if it

satisfies both of the following conditions:
● The number of visitors on the day is strictly larger than the number of
visitors on each of the previous days.
● Either it is the last day, or the number of visitors on the day is strictly larger
than the number of visitors on the following day.
Note that the very first day could be a record breaking day!
Please help Isyana find out the number of record breaking days.
Input
The first line of the input gives the number of test cases, T. T test cases follow.
Each test case begins with a line containing the integer N. The second line
contains N integers. The i-th integer is Vi
.

Output
For each test case, output one line containing Case #x: y, where x is the test case
number (starting from 1) and y is the number of record breaking days.
*/

// int main(){
//     int size{};
//     cout<<"Size: ";
//     cin>>size;

//     int a[size+1];
//     a[size] = -1;

//     for(int i{0};i < size;i++){
//         cout<<">>";
//         cin>>a[i];
//     }
//     if(size == 1){
//         cout<<"1"<<endl;
//         return 0;
//     }

//     int ans = 0;
//     int mx = -1;

//     for(int i{0};i < size;i++){
//         if(a[i] > mx && a[i] > a[i+1]){
//             ans++;
//         }
//         if(a[i] > mx){
//             mx = a[i];
//         }
//     }
//     cout<<ans<<endl;
    
//     return 0;
// }

/*
Q- Problem
Given an array arr[] of size N. The task is to find the first repeating element in an
array of integers, i.e., an element that occurs more than once and whose index of
first occurrence is smallest.
Constraints
1 <= N <= 106
0 <= Ai <= 106 
*/

// int main(){
//     int size{};
//     cout<<"Size: ";
//     cin>>size;

//     int a[size];
//     for(int i{0};i < size;i++)
//     {
//         cout<<">>";
//         cin>>a[i];
//     }

//     const int N = 1e6+2;
//     int idx[N];
//     for(int i{0};i < N;i++)
//     {
//         idx[i] = -1;
//     }

//     int minidx =INT_MAX;

//     for(int i{0};i < size;i++)
//     {
//         if(idx[a[i]] != -1)
//         {
//             minidx = min(minidx , idx[a[i]]);
//         }
//         else
//         {
//             idx[a[i]] = i;
//         }
//     }

//     if(minidx == INT_MAX)
//     {
//         cout<<"-1"<<endl;
//     }
//     else
//     {
//         cout<<minidx + 1<<endl;
//     }

//     return 0;
// }

/*
Problem
Given an unsorted array A of size N of non-negative integers, find a continuous
subarray which adds to a given number S.
Constraints
1 <= N <= 105
0 <= Ai <= 1010
*/

/*This Approach is good but it takes a lot of time to run as it contains two loop(nested loop)
so the time complexity will be O(n²)*/
// int main(){
//     int size{};
//     cout<<"Size: ";
//     cin>>size;
    
//     int a[size];

//     for(int i{0};i < size;i++){
//         cout<<">>";
//         cin>>a[i];
//     }
//     int s{};
//     cout<<"Target: ";
//     cin>>s;

//     int sum{0};
//     for(int i{0};i < size;i++){
//         for(int j{i};j < size;j++){
//             sum += a[j];
//             if(sum == s && i != j){
//                 cout<<i<<" to "<<j<<endl;
//             }
//             else if(sum == s && i == j)
//             {
//                 cout<<j<<endl;
//             }
//         }
//     sum = 0;    
//     }

//     return 0;
// }
//Optimized Approach to reduce Time Complexity
//Time Complexity = O(n)
// int main(){
//     int size{},s{};
//     cout<<"Size: ";
//     cin>>size;

//     cout<<"Target: ";
//     cin>>s;

//     int a[size];
//     for(int i{0};i < size;i++){
//         cout<<">>";
//         cin>>a[i];
//     }
//     int i = 0,j = 0, st = -1,en = -1,sum = 0;
//     while(j < size && sum + a[j] <= s)
//     {
//         sum += a[j];
//         j++;
//     }
//     if(sum == s){
//         cout<<i+1<<" "<<j<<endl;
//         return 0;
//     }
//     while(j < size){
//         sum += a[j];
//         while(sum > s){
//             sum -= a[i];
//             i++;
//         }
//         if(sum == s){
//             st = i+1;
//             en = j+1;
//             break;
//         }
//         j++;
//     }
    
//     cout<<st<<" "<<en<<endl;

//     return 0;
// }

/* 
Problem
Find the smallest positive missing number in the given array.
Example: [0, -10, 1, 3, -20], Ans = 2
*/

int main(){
    int size{};
    cout<<"Size: ";
    cin>>size;

    int a[size];
    for(int i{0};i < size;i++)
    {
        cout<<">>";
        cin>>a[i];
    }
    
    int N = 1e6 + 2;
    bool check[N];

    for(int i{0};i < N;i++)
    {
        check[i] = false;
    }

    for(int i{0};i < size;i++)
    {
        if(a[i] >= 0)
        {
            check[a[i]] = true;
        }
    }
    
    int ans = -1;
    for(int i{0};i < N;i++)
    {
        if(check[i] == false)
        {
            ans = i;
            break;
        }
    }
    cout<<ans;

    return 0;
}

