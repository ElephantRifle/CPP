#include<iostream>
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

 firstposition(int array[],int n,int i,int arraySize)
{
  if(i==arraySize){
    return -1;
  }

  if(array[i]==n){
    return i;
  }
  firstposition(array, n, i + 1, arraySize);
}
 lastposition(int array[],int n,int i,int arraySize)
{
  if(i==arraySize){
    return -1;
  }

  int restarray{lastposition( array, n, i+1, arraySize)};

  if(restarray!=-1){
    return restarray;
  }

  if(array[i]==n){
    return i;
  }
  return -1;
}

int main(){
  int array[]{4,2,1,2,5,2,7};
  int n{};
  int arraySize = sizeof(array) / sizeof(array[0]);

  cout<<"\nEnter a number: ";
  cin>>n;

  cout<<"First Position: "<<firstposition(array,n,0,arraySize);
  cout<<"\nLast Position: "<<lastposition(array,n,0,arraySize);

  return 0;
}

