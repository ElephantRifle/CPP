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

// void sub(int indx,int arr[],vector<int>&db,int size){
//   if(indx == size){
//     for(auto temp : db){
//       cout<<temp<<" ";
//     }
//     if(db.size() == 0){
//       cout<<"{}";
//     }
//     cout<<endl;
//     return ;
//   }
//   //take or pick the particular index into the subsequence
//   db.push_back(arr[indx]);
//   sub(indx+1,arr,db,size);
  
//   //not pick or no take condition,this element is not added to the subsequence
//   db.pop_back();
//   sub(indx+1,arr,db,size);
// }


// int main(){
//   int arr[]{3,1,2};
//   int size = sizeof(arr) / sizeof(arr[0]);
//   vector<int>db;
//   sub(0,arr,db,size);


//   return 0;
// }

//===========================================================

//Q - Print Subsequence where sum is equal to K

// void sub(int idx,int arr[],vector<int>&db,int size,int k,int sum){
//   if(idx == size || sum > k){ //if we remove (sum > k) it will be exhaustive search means no PRUNING of tree (dry run this bitch)
//     if(sum == k){
//       for(auto temp : db){
//         cout<<temp<<" ";
//       }
//       cout<<endl;
//     }
//     return;
//   }
//   db.push_back(arr[idx]);
//   sum += arr[idx];
//   sub(idx+1,arr,db,size,k,sum);


//   db.pop_back();
//   sum -= arr[idx];
//   sub(idx+1,arr,db,size,k,sum);
  
// }

// int main(){
//   int arr[]{1,2,1};
//   int size = sizeof(arr) / sizeof(arr[0]);
//   int k{2};
//   vector<int>db;
//   sub(0,arr,db,size,k,0);

//   return 0;
// }

//================================================================
//Q - Print only one Subsequence where sum == K

// bool sub(int idx,int arr[],vector<int>&db,int k,int size,int sum){
//   if(idx == size || sum > k){
//     if(sum == k){
//       for(auto temp: db){
//         cout<<temp<<" ";
//       }
//       return true;
//     }
//     return false;
//   }
//   db.push_back(arr[idx]);

//   sum += arr[idx];
//   if(sub(idx+1,arr,db,k,size,sum) == true) return true;
  
//   sum -= arr[idx];
  
//   db.pop_back();
//   if(sub(idx+1,arr,db,k,size,sum) == true) return true;
//   return false;

// }

// int main(){
//   int arr[]{1,2,1};
//   int size = sizeof(arr) / sizeof(arr[0]);
//   vector<int>db;
//   int k{2};
//   sub(0,arr,db,k,size,0);

//   return 0;
// }


//Q -Count the number of subsequence for k = 2

// int sub(int idx,int arr[],int size,int k ,int sum){
//   if(idx == size || sum > k){ //sum>k only when values are POSITIVE
//     if(sum == k){
//       return 1;
//     }
//     return 0;
//   }
//   sum += arr[idx];
//   int l = sub(idx+1,arr,size,k,sum);

//   sum -= arr[idx];
//   int r = sub(idx+1,arr,size,k,sum);

//   return l + r;
// }

// int main(){
//   int arr[]{1,2,1};
//   int size = sizeof(arr) / sizeof(arr[0]);
//   int k{2};

//   cout<< sub(0,arr,size,k,0);

//   return 0;
// }

////=============================================================
//Q - Merge Sort

// void merge(int arr[],int low,int mid,int high){
//   int arr_2[high - low + 1];
//   int left = low;
//   int right = mid+1;
//   int k{};

//   while(left <= mid && right <= high){
//     if(arr[left] <= arr[right]){
//       arr_2[k++] = arr[left++];
//     }else{
//       arr_2[k++] = arr[right++];
//     }
    
//   }
//   while(left <= mid){
//     arr_2[k++] = arr[left++];
//   }

//   while(right <= high){
//     arr_2[k++] = arr[right++];
//   }

//   for(int i = low;i <= high;++i){
//     arr[i] = arr_2[i-low];
//   }
// }

// void call(int arr[],int low,int high){
//   if(low >= high){
//     return;
//   }
//   int mid = low +(high - low)/2;
//   call(arr,low,mid);
//   call(arr,mid+1,high);
//   merge(arr,low,mid,high);
// }

// int main(){
//   int arr[]{5,4,6,3,2,1,0,7,8,9};
//   int size = sizeof(arr)/sizeof(arr[0]);

//   call(arr,0,size-1);
//   for(auto temp : arr){
//     cout<<temp<<" ";
//   }


//   return 0;
// }
////=============================================================

//Q - Quick Sort
//1.Pick a Pivot & place it in its correct PLACE
/*  a.Pick first element of an array
    b.Pick last element of an array
    c.Pick median of an array
    d.Random element of an array
*/
//2.Smaller in the LEFT and larger on the RIGHT

//HOARE's Partition Technique(Two Pointer Approach) 

// int pivot(int arr[],int low,int high){
//   int i = low;
//   int j = high;
//   int pivot = low;

//   while(i < j){
//     while(arr[i] <= arr[pivot] && i < high){//<= to place similar value on left
//       i++;
//     }
//     while(arr[j] > arr[pivot] && j > low){
//       j--;
//     }
//     if(i < j){
//       int temp = arr[i];
//       arr[i] = arr[j];
//       arr[j] = temp;
//     }
//   }
//   int temp = arr[pivot];
//   arr[pivot] = arr[j];
//   arr[j] = temp;
//   return j;
// }

// void quick(int arr[],int low,int high){
//   if(low >= high){
//     return ;
//   }
//   int british= pivot(arr,low,high);

//   quick(arr,low,british-1);
//   quick(arr,british+1,high);
// }

// int main(){
//   int arr[]{4,6,2,5,7,9,1,3};
//   int size = sizeof(arr) / sizeof(arr[0]);

//   quick(arr,0,size-1);

//   for(auto temp: arr){
//     cout<<temp <<" ";
//   }


//   return 0;
// }

//=========================
//LOMUTO Partition Technique (One For Loop)

// int sort(int arr[],int low,int high){
//   int i = low-1;
//   int pivot = arr[high];

//   for(int j = low;j < high;++j){
//     if(arr[j] <= pivot){
//       i++;
//       swap(arr[i],arr[j]);
//     }
//   }
//   swap(arr[high],arr[i+1]);
//   return i + 1;

// }

// void quick(int arr[],int low,int high){
//   if(low >= high){
//     return;
//   }
//   int british = sort(arr,low,high);
//   quick(arr,low,british-1);
//   quick(arr,british+1,high);
// }

// int main(){
//   int arr[]{4,6,2,5,7,9,1,3};
//   int size = sizeof(arr) / sizeof(arr[0]);

//   quick(arr,0,size-1);
//   for(auto temp: arr){
//     cout<<temp<<" ";
//   }


//   return 0;
// }

//================

//“Three-Way Partitioning Quick Sort”
//also called Dutch National Flag Quick Sort

void quick(int arr[],int low,int high){
  if(low >= high)return;
  int pivot = arr[high];
  int i = low;
  int lt = low;
  int gt = high;

  while(i <= gt){
    if(arr[i] < pivot){
      swap(arr[i++],arr[lt++]);
    }else if(arr[i] > pivot){
      swap(arr[i],arr[gt--]);
    }else{
      i++;
    }
  }
  quick(arr,low,lt-1);
  quick(arr,gt+1,high);

}

int main(){
  int arr[]{4,6,2,5,7,9,1,3};
  int size = sizeof(arr) / sizeof(arr[0]);

  quick(arr,0,size-1);
  for(auto temp: arr){
    cout<<temp<<" ";
  }

  return 0;
}