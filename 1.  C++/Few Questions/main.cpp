#include<iostream>
#include<string>
#include<vector>
#include<cctype>
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

// for(;number != 0;number/=10){
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



