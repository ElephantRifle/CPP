#include<iostream>
#include<vector>
#include<string>
#include<cmath>
using namespace std;
//Factorial
// unsigned long long factorial(unsigned long long n)
// {
//     if(n==0)
//        return 1;
//     return n*factorial(n-1);   
// }

// int main(){
//     int n{};
//     cout<<"Enter the value to cal. factorail: ";
//     cin>>n;
//     cout<<factorial(n);

//     return 0;
// }
// //------------------------------------------------------------
// //Fibonacci 

// unsigned long long fibonacci(unsigned long long n)
// {
//     if(n<=1)
//       return n;
//     return fibonacci(n-1)+fibonacci(n-2);  
// }

// int main(){
//     int n{};
//     cout<<"Enter the value to cal. fibonacci: ";
//     cin>>n;
//     cout<<fibonacci(n);

//     return 0;
// }
// //------------------------------------------------------------
// //Sum

// int sum(int n)
// {
//   if(n==0)
//      return 0;
//   return n+sum(n-1);
// }

// int main(){
//   int n{};
//   cin>>n;
//   cout<<sum(n);
//   return 0;
// }
// //------------------------------------------------------------
// n Raised to power p

// {
//     if(p==0)
//       return 1;
//     else
//       return n* power(n,p-1); 
// }

// int main(){
//     int n{};
//     cout<<"\nEnter base (n): ";
//     cin>>n;
//     int p{};
//     cout<<"Enter exponent(p): ";
//     cin>>p;

//     int result{power(n,p)};
//     cout<<n<<"^"<<p<<" = "<<result<<endl;
//     cout<<endl;

//     return 0;
// }

// //------------------------------------------------------------
// //To check array is sorted or not

// bool sorted(int arr[],int n)
// {
//     if(n==1)
//       return 1;
//     bool rest_array=sorted(arr+1,n-1);
//     return(arr[0]<arr[1] && rest_array);
// }

// int main(){
//     int arr[]{1,6,7,3,9};
//     int n{};
//     cout<<boolalpha;
//     cout<<sorted(arr,5);

//     return 0;
// }
// //------------------------------------------------------------

// //Print number till n i)Decreasing order ii)Increasing order

// void decreasing(int n)
// {
//   if(n==0)
//     return ;
//   cout<<n<<",";
//   decreasing(n-1);  
// }
// void increasing(int n)
// {
//   if(n==0)
//     return ; 
//   increasing(n-1); 
//   cout<<n<<",";
// }

// int main(){
//   int n{};
//   cout<<"\nEnter numbers: ";
//   cin>>n;

//   decreasing(n);
//   cout<<endl;
//   increasing(n);

//   // for(int i{0};i<=n-1;i++)
//   // {
//   //   cout<<n-i<<",";
//   // }  
//   // cout<<endl;
//   // for(int i{0};i<=n-1;i++)
//   // {
//   //   cout<<i+1<<",";
//   // }

//   return 0;
// }
// //------------------------------------------------------------
// //Find First and Last occurance of a number in an array

// int main(){

//   int array[]{4,2,1,2,5,2,7};
//   int firstposition{-1};
//   int lastposition{-1};
//   int n{};

//   cout<<"\nEnter a number: ";
//   cin>>n;

//   int arraySize = sizeof(array) / sizeof(array[0]);

//   for(int i{0};i<arraySize;i++)
//   {
//     if(array[i]==n)
//      {
//       if(firstposition==-1){
//         firstposition=i;
//       }
//       lastposition=i;
//      }   
//   } 
//   if(firstposition!=-1){
//     cout<<"Postion of first occurance: "<<firstposition<<endl;
//     cout<<"Postion of last occurance: "<<lastposition<<endl;
//   }else{
//     cout<<"Number not found in array."<<endl;
//   }   
//   return 0;
// }

//========================================================================
//Q - Reverse an Array using Recursion
//Don't Print reverse of a DS swap it


//USING TWO POINERS(Variables)
// void reverse(vector<int> &arr,int last,int first){
  
//   if(last == first){
//     return;
//   }
//   int temp = arr[first];
//   arr[first] = arr[last];
//   arr[last] = temp;
//   reverse(arr,last-1,first+1);

// }

// int main(){
//   vector<int>arr{1,2,3,4,2};
//   int size = arr.size();

//   reverse(arr,size -1,0);

//   for(int i = 0;i < size;++i)
//     cout<<arr[i]<<" ";
  
//   return 0;
// }
//===================================================================
//USING SINGLE POINTER(Variable)
// void reverse(vector<int>&arr,int left,int size){
//   if(left >= size/2){
//     return;
//   }
//   int temp = arr[left];
//   arr[left] = arr[size-1-left];
//   arr[size-1-left] = temp;
//   reverse(arr,left+1,size);
// }

// int main(){
//   vector<int>arr{1,2,3,4,2};
//   int size = arr.size();
//   reverse(arr,0,size);
//   for(int i = 0 ;i < size;++i){
//     cout<<arr[i]<<" ";
//   }


//   return 0;
// }
//=====================================================================

//Q - Check if a String is Plindrome or Not

// void isIt(string str,int size,int i){
  
//   if(i >= size/2){
//     cout<<"Is Palindrome.";
//     return;
//   }
//   if(str[i] != str[size-1-i]){
//     cout<<"Is not A Palindrome.";
//     return;
//   }
//   isIt(str,size,i+1);
// }

// int main(){
//   string str= "madam";
//   int size = str.length();
  
//   isIt(str,size,0);
//   return 0;
// }

//===================================================================

//MULTIPLE RECURSIONS

// int fibo(int n){
//     if(n <= 1){
//         return n;
//     }
//     int prev = fibo(n-1);
//     int prev2 = fibo(n-2);
    
//     return prev + prev2;
// }

// int main(){
//     int n{6};
//     cout<<fibo(n);

//     return 0;
// }

//==============================================================

//RECURSIONS ON SUBSEQUENCES

void sub(int arr[],int size,int i){
  if(i >= size){
    return;
  }
  cout<<arr[i]<<" ";
  cout<<endl;
  return sub(arr,size,i+1);
  return sub(arr,size,i+1);
}

int main(){
  int arr[]{3,2,1};
  int size = sizeof(arr) / sizeof(arr[0]);

  sub(arr,size,0);

  return 0;
}

