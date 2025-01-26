#include<iostream>
using namespace std;
//Q -- WAP to check if a given number is power of 2
bool isPowerofTWO(int n){
    if(n <= 0) return false;
    return (n & (n-1)) == 0;
}
int main(){
    int n{};
    cout<<"Enter number: ";
    cin>>n;

    // bool a = isPowerofTWO(n);
    if(isPowerofTWO(n)){
        cout<<n<<" is power of 2"<<endl;
    }else{
        cout<<n<<" is not power of 2"<<endl;
    }

    return 0;
}

//ANOTHER APPROACH
//Q -- WAP to check if a given number is power of 2

// bool isPowerofTWO(int n){
//     return n && !(n & (n-1));
// }
// int main(){
//     int n{};
//     cout<<"Enter number: ";
//     cin>>n;

//     if(isPowerofTWO(n)){
//         cout<<n<<" is power of 2"<<endl;
//     }else{
//         cout<<n<<" is not power of 2"<<endl;
//     }

//     return 0;
// }
//---------------------------------------------------------------------------------------

//Q -- WAP to count the number of onces in binary representation of a number

// int count(int n){
//     int count{};
//     while(n){ // while(n != 0)
//         n = (n &(n-1));
//         count++;
//     }
//     return count;
// }
// int main(){
//     int n{};
//     cout<<"Enter a number: ";
//     cin>>n;

//     cout<<count(n);

//     return 0;
// }
//-------------------------------------------------------------------------------------------

//Q--WAP to generate all possible subset of a set {a,b,c}
// if we count setbit in binary from 1(001) to 7(111) ans: 123567  if we count non setbit 0(zero) ans:7654321 
// void subsets(int arr[],int n){
//     for(int i{0};i < (1<<n);i++){
//         for(int j{0};j < n;j++){
//             if(i & (1<<j)){ //same results :  (i & (1 << j) != 0) opposite result:(i & (i<<j)) == 0 
//                 cout<<arr[j]<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int arr[3]{1,2,3};
//     subsets(arr,3);

//     return 0;
// }
//-------------------------------------------------------------------------------------------------

//Q--WAP to find a unique number in an array where all numbers except one, are present twice

//it will only work if we have two dublicate value of same number in array if there are two unique value it produces wrong answer 
// void unique(int arr[],int n){
//     int unique = 0;
//     for(int i{0};i < n;i++){
//         unique ^= arr[i];
//     }
//     cout<<unique;
// }
// int main(){
//     int arr[]{2,3,5,4,2,4,3,7};
//     int size{8};

//     unique(arr,size);

//     return 0;
// }
//-----------------------------------------------------------------------------------------------
//Q -- WAP to find a unique 2 numbers in an array where all numbers except two , are present twice

// int setBit(int n,int pos){
//     return ((n & (1<<pos))!= 0);
// }
// void unique(int arr[],int n){
//     int xorsum{};
//     for(int i{0};i < n;i++){
//         xorsum ^= arr[i];
//     }
//     int tempxorsum = xorsum;   // Save the original xorsum for later use

//     int pos{};
//     while((xorsum & 1) == 0){  //finding the  postion of right most bit (1) in xorsum
//         xorsum >>= 1;
//         pos++;
//     }
    
//     int first_unique{};  //First Unique value
//     for(int i{0};i < n;i++){
//         if(setBit(arr[i],pos)){
//             first_unique ^= arr[i];
//         }
//     }
//     int sec_unique = first_unique ^ tempxorsum;  //Second Unique valuse

//     cout<<first_unique<<" "<<sec_unique<<endl;


// }
// int main(){
//     // int arr[]{5,4,1,4,3,5,1,2};
//     int arr[]{2,4,6,7,4,5,6,2};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     unique(arr,size);

//     return 0;
// }

//---------------------------------------------------------------------------------------------

//Q -- WAP to find a unique number in an array where all numbers except one ,is present thrice

// int unique(int arr[],int size){
//     int ar2[32]{0};
    
//     for(int i{0};i < size;i++){
//         int pos{0};
//         int n = arr[i];
//         while(n != 0){
//             if(n & 1 == 1){
//                 ar2[pos]+=1;
//             }
//             n >>= 1;
//             pos++;
//         }
//     }
//     int result{};
//     for(int i{0};i < 31;i++){
//         ar2[i] %= 3;
//         if (ar2[i] != 0) {  // If the bit count is not zero
//             result |= (1 << i);  // Set the corresponding bit in the result
//         }
//     }
//     return result;
// }
// int main(){
//     int arr[]{1,3,2,3,4,2,1,1,3,2};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     int num = unique(arr,size);
//     cout<<num<<endl;
//     return 0;
// }
