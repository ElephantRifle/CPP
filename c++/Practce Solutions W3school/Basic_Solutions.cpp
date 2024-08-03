#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
using namespace std;
// int main(){

//     cout<<"\nFormating the output: \n";
//     cout<<"-------------------------\n";

//     double pie{3.14159265};
//     cout<<fixed<<setprecision(4);
//     cout<<"The value of pie"<<pie<<endl;
//     cout<<"The value of pie with 8 width space: |"<<setw(8)<<pie<<"|"<<endl;
//     cout<<"The value of pie with 10 width space: |"<<setw(10)<<pie<<"|"<<endl;

//     cout << setfill('-'); // setfill() sets to fill the blanks with specified character
//     cout<<"\nThe value of pie with 8 width space: |"<<setw(8)<<pie<<"|"<<endl;
//     cout<<"The value of pie with 10 width space: |"<<setw(10)<<pie<<"|"<<endl;

//     cout << scientific;  // set value in scientific format with exponent
//     cout<<"\nThe value of pie in scientific format is: "<<pie<<endl;

//     bool done{false};
//     cout<<"\nThe value or status in numbers: "<<done<<endl;
//     cout<<boolalpha;
//     cout<<"The value or status in alphabets: "<<done<<endl;
//     cout<<endl;+

//     return 0;
// }
 // =======================================================================================
 //20 . Write a C++ program to convert temperature in Celsius to Fahrenheit.

// int main(){
//     double celsius{};

//     cout<<"\nEnter temp in celsius: ";
//     cin>>celsius;

//     double celcius_to_fahrenheit{(celsius*9)/5+32};

     // cout<<fixed<<setprecision(2);
//     cout<<celsius<<" is equal to "<<celcius_to_fahrenheit<<" fahrenheit."<<endl;
//     cout<<endl;

//     return 0;
// }

 // 37. Write a C++ program to print a mystery series from 1 to 50.
// int main(){
//     int num{1};

//     while(true){
//         if(num==1)
//           continue;

//     }
//     return 0;
// }

 //38. Write a C++ program that takes a number as input and prints its multiplication table up to 10.
// int main(){
//     int number{};
//     cout<<"\nEnter a number: ";
//     cin>>number;

//     for(int i{1};i<=10;i++)
//     cout<<number<<" * "<<i<<" = "<<number*i<<endl;     
//     cout<<endl;
    
//  return 0;
// }

 // 40. Write a C++ program to print the area and perimeter of a rectangle.
// int main(){
//     double length{};
//     double width{};

//     cout<<"\nEnter the length: ";
//     cin>>length;

//     cout<<"Enter the width: ";
//     cin>>width;

//     double peri{2*(length+width)};
//     double area{length*width};

//     cout<<"The area of rectangle are "<<area<<endl;
//     cout<<"The perimeter of rectangle are: "<<peri<<endl;

//     cout<<endl;

//     return 0;
// }

 // 42. Write a C++ program that accepts the user's first and last name and prints them in reverse order with a space between them.

// int main(){
//     string first_name{};
//     string last_name{};

//     cout<<"\nEnter your first name: ";
//     getline(cin,first_name);

//     cout<<"\nEnter your last name: ";
//     getline(cin,last_name);

//     string full_name{(first_name+' '+last_name)};

//     cout<<"\nYour Fullname is: ";

//     size_t length{full_name.length()};
//     for(int i{0};i<=length-1;i++)
//       cout<<full_name[length-i-1];

//     return 0;
// }

//47. Write a C++ program to calculate the sum of all even and odd numbers in an array.

// int main(){
//   int array[]{1,2,3,4,5,6,7,8,9};
//   int size{sizeof(array)/sizeof(array[0])};
//   int odd{};
//   int even{};

//   for(int i{0};i<size;i++){
     // if(array[i]%2 == 0){
      //   even+=array[i];
     // }else{
    //   odd+=array[i];
     // }
//     array[i]%2==0? even+=array[i]:odd+=array[i];
//   }
//   cout<<"Addition of even numbers are: "<<even<<endl;
//   cout<<"Addition of odd numbers are: "<<odd<<endl;

//   return 0;
// }
//48. Write a C++ program that swaps two variables without using a third variable.

// int main(){
//   int a{20};
//   int b{30};

//   a=a+b;
//   b=a-b;
//   a=a-b;
//   cout<<a<<" "<<b;

//   return 0;
// }

 //49. Write a C++ program to print the code (ASCII code / Unicode code etc.) of a given character.
// int main(){
//     char character{};
//     cout<<"\nEnter a character to print its ASCII/Unicode: ";
//     cin>>character;

//     cout<<"ASCII code of a character "<<character<< " is: " <<(int)character<<endl;
//     cout<<"The Character for the ASCII value "<<(int)character<< " is: "<<(char)(int)character;

//     return 0;
// }

 //61. Write a C++ program to swap the first and last digits of any number.
// int main(){
//     vector<int>numbers{};
//     int num{};

//     cout<<"\nEnter numbers to swap: ";
//     cin>>num;

//     numbers.push_back(num);

//     if(!numbers.empty()){
//         int temp=numbers.at(0);
//         numbers.at(0)=numbers.at(numbers.size()-1);
//         numbers.at(numbers.size()-1)=numbers.at(0);

//     }else{
//       cout<<"Vector is empty. "<<endl;
//       return 1;
//     }

//     for(size_t n:numbers)
//       cout<<n;

//     return 0;
// }

 //60. Write a C++ program to add two binary numbers.


// string  binary_addition(string &s1, string &s2)
// {
//     string result{};
//     int carry{};

//     int i=s1.size()-1;
//     int j=s2.size()-1;

//     while(i>=0 || j>=0 || carry!=0){
//         int sum = carry;

//         if(i>=0){
//             sum+=s1[i]-'0';
//             i--;
//         }
//         if(j>=0){
//             sum+=s2[j]-'0';
//             j--;
//         }
//         carry=sum/2;
//         sum=sum%2;
//         result = to_string(sum) + result;
//     }
//     return result;

// }

// int main(){
//     string s1{};
//     string s2{};

//     cout<<"Enter binary numbers to add: ";
//     getline(cin,s1);
//     cout<<"Enter another numbers to add: ";
//     getline(cin,s2);
//     string sum=binary_addition(s1,s2);
//     cout << "Sum of the two binary numbers: " << sum << endl;

//     return 0;
// }
 //TO UNDERSTAND HOW THE lOOP WORKS IN FUNCTION binary_addition
#include <iostream>
#include<string>
using namespace std;

int main() {
    
    int i=3;
    int j=3;
    
    int s1{1};
    int s2{5};
    
    while(i>=0 || j>=0 ){
        int sum{};
        
        if(i>=0){
            sum+=s1;
            i--;
            cout<<sum;
        }
        if(j>=0){
            sum+=s2;
            j--;
            cout<<sum;
        }

    }
    return 0;
}

 // 62. Write a C++ program that reads the integer n and prints a twin prime that has the maximum size among twin primes less than or equal to n.
