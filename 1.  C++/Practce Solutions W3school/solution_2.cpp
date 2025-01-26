#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <ctime>
using namespace std;
/*Q - 31. Write a C++ program to input a single-digit number and print it
in a rectangular form of 4 columns and 6 rows.*/
// int main(){
//     int n{};
//     int rows{6},columns{4};
//     cout<<"Enter a number: ";
//     cin>>n;

//     for(int i{1};i <= rows;i++){
//         for(int j{1}; j <= columns;j++){
//             if((j>=2 && j<=3)&& (i>=2 && i<6)){
//                 cout<<" ";
//             }else{
//                 cout<<n;
//             }
//         }
//         cout<<endl;
//     }

//     return 0;
// }

/*Q -32 Write a program in C++ to check whether a number is positive, negative or
zero.*/
// int main(){
//     int n{};
//     cout<<"Enter a number: ";
//     cin>>n;

//     if(n > 0){
//         cout<<n<<" is positive.";
//     }else if (n < 0){
//         cout<<n<<" is negative.";
//     }else{
//         cout<<n<< "is zero.";
//     }

//     return 0;
// }
/* Q-34 Write a C++ program to display the current date and time.*/
// int main(){
//     time_t t = time(NULL);
//     tm* tPtr = localtime(&t);

//     cout<<" seconds: "<<(tPtr->tm_sec)<<endl;
//     cout<<" minutes: "<<(tPtr->tm_min)<<endl;
//     cout<<" hour: "<<(tPtr->tm_hour)<<endl;
//     cout<<" day: "<<(tPtr->tm_mday)<<endl;
//     cout<<" month: "<<(tPtr->tm_mon)<<endl;
//     cout<<" year: "<<(tPtr->tm_year)+1900<<endl;
//     cout<<" weekday: "<<(tPtr->tm_wday)<<endl;
//     cout << " day of year = " << (tPtr->tm_yday) << endl;
//     cout << " daylight savings = " << (tPtr->tm_isdst) << endl;

//     cout << " Current Date: " <<(tPtr->tm_mday)<<"/"<< (tPtr->tm_mon)+1 <<"/"<< (tPtr->tm_year)+1900<< endl;
//     cout << " Current Time: " << (tPtr->tm_hour)<<":"<< (tPtr->tm_min)<<":"<< (tPtr->tm_sec) << endl;

//     return 0;
// }
/*Q -35. Write a program in C++ to compute the specified expressions and print
the output.*/
// int main(){
//     double result{};
//     result = (25.5 * 3.5 - 3.5 * 3.5) / (40.5 - 4.5) ;
//     cout<<setprecision(3);

//     cout<<" (25.5 * 3.5 - 3.5 * 3.5) / (40.5 - 4.5): ";
//     cout<<result<<endl;

//     return 0;
// }
/*Q -36. Write a program in C++ to test Type Casting.*/
// int main(){
//     int i1{7};
//     int i2{2};
//     cout<<setprecision(2);
//     cout<<i1/i2<<endl;
//     cout<<static_cast<double>(i1) / i2 <<endl;
//     cout<<i1 / static_cast<double>(i2) <<endl;

//     cout<<"------------------------------------"<<endl;

//     double j1{12.5};
//     double j2{10.56};
//     cout<<j1/j2<<endl;
//     cout<<j1/static_cast<int>(j2) <<endl;
//     cout<<static_cast<int>(j1 / j2) <<endl;
//     cout<<int(j1/j2)<<endl;

//     return 0;
// }
/*Q - 37. Write a C++ program to print a mystery series from 1 to 50.*/
// int main(){
//     int n{50};
//     vector<int>series{};
//     int count{1};
//     while(true){
//         count++;
//         if(count % 3 == 0)
//           continue;
//         if( count == 50)
//           break;
//         if( count % 2 == 0){
//           count+=3;
//           series.push_back(count);
//         }else{
//           count-=3;
//           series.push_back(count);
//         }
//     }
//     for( size_t st:series){
//         cout<<st<<" ";
//     }

//     return 0;
// }
/*Q -38. Write a C++ program that takes a number as input and prints its
multiplication table up to 10.*/
// int main(){
//     int number{};

//     cout<<"Enter a number: ";
//     cin>>number;

//     for(int i{1};i <= 10;i++){
//         cout<<number<<" * "<<i<<" = "<<number*i<<endl;
//     }

//     return 0;
// }
/*Q - 39. Write a C++ program to print the following pattern.*/

/*Q - 43. Write a C++ program that accepts the radius of a circle from the user and
computes the area and circumference.
*/
// int main(){
//     const double pie{3.141};
//     double radius{},area{},circumference{};

//     cout<<"Enter radius: ";
//     cin>>radius;

//     area = pie*radius*radius;
//     circumference = 2*pie*radius;

//     cout<<"Area: "<<area<<endl;
//     cout<<"Circumference: "<<circumference<<endl;

//     return 0;
// }

/*Q- 44. Write a C++ program to get the volume of a sphere with radius 6.*/
// int main(){
//     const double pie{3.141};
//     double rad{},volume{};

//     cout<<"Enter radius: ";
//     cin>>rad;

//     volume = (4*pie*rad*rad*rad)/3;

//     cout<<"Volume: "<<volume<<endl;

//     return 0;
// }

/*Q -47. Write a C++ program to calculate the sum of all even and odd numbers in an
array.*/
// int main(){
//     int arr[]{12,11,45,34,67,88,90,76,51,21,43};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int even_t{};
//     int odd_t{};

//     for(int i{0};i < size;i++){
//         if(arr[i] % 2 == 0){
//             even_t+= arr[i];
//         }else{
//             odd_t+= arr[i];
//         }
//     }
//     cout<<even_t<<endl;
//     cout<<odd_t<<endl;

//     return 0;
// }
/*Q- 59. Write a C++ program to compute the distance between two points on the surface of the
earth.*/
// int main(){
//     double distance{},la1{},la2{},lo1{},lo2{};
//     double r{0.01745327};//conversion factor pi/180
//     double earth_rad{6371.01};

//     cout<<"Enter latitude and logitude of Point A: "<<endl;
//     cin>>la1>>lo1;

//     cout<<"Enter latitude and logitude of Point B: "<<endl;
//     cin>>la2>>lo2;

//     la1*=r;
//     lo1*=r;
//     la2*=r;
//     lo2*=r;

//     distance = earth_rad * acos((sin(la1) * sin(la2)) + (cos(la1) * cos(la2) * cos(lo1 - lo2)));

//     cout<<"The distance between two points are: "<<distance<<" km"<<endl;

//     return 0;
// }

/*Q - 60. Write a C++ program to add two binary numbers.*/

// string binary_addition(string &b1 ,string &b2){
//     int carry{};
//     int i{},j{};
//     string result{};

//     i = b1.length()-1;
//     j = b2.length()-1;

//     while(i >= 0 || j >= 0 || carry!=0){
//         int sum = carry;

//         if(i >= 0){
//             sum+=b1[i] -'0';
//             i--;
//         }
//         if(j >= 0){
//             sum+=b2[j] - '0';
//             j--;
//         }
//         carry = sum/2;
//         sum = sum % 2;
//         result = to_string(sum) + result;
//     }
//     return result;
// }

// int main(){
//     string b1{},b2{};

//     cout<<"Enter binary no1: ";
//     cin>>b1;
//     cout<<"Enter binary no2: ";
//     cin>>b2;

//     string sum =binary_addition(b1,b2);
//     cout<<sum;

//     return 0;
// }
/*Q - 61. Write a C++ program to swap the first and last digits of any number.*/
// int main(){
//     int number{};
//     int size{};
//     cout<<"Enter a number: ";
//     cin>>number;

//     string n = to_string(number);
//     size = n.length()-1;

//     char t = n[0];
//     n[0] = n[size];
//     n[size] = t;

//     cout<<n;

//     return 0;
// }
/*Q - 62. Write a C++ program that reads the integer n and prints a twin prime that
has the maximum size among twin primes less than or equal to n.*/

// Primality refers to the property of a number being prime.

// Finding Prime number till n
//  int main(){
//      int n{};
//      cout<<"Enter a number: ";
//      cin>>n;
//      vector<int>prime{};
//      vector<pair<int, int>>pair_prime{};

//     /*In C++, std::pair is a template class that holds two values of potentially
//     different types. When you create a pair using make_pair or by other means,
//     you can access the individual elements using first and second member variables.
//     (here first and second means (4,7) 4 be first and 7 be second)*/

//     for(int i{2}; i<=n;i++){
//         bool isprime = true;

//         for(int j{2};j * j <= i;j++){ //j*j<=i  equalto  j<=sqroot(i)
//             if(i % j == 0){
//                 isprime = false;
//                 break;
//             }
//         }
//         if(isprime){
//             prime.push_back(i);
//         }
//     }
//     int size = prime.size();
//     for(int z{0};z <= size-1;z++){
//         if((prime[z+1] - prime[z]  == 2)){
//             pair_prime.push_back(make_pair(prime[z],prime[z+1]));
//         }
//     }

//     if (!pair_prime.empty()) {
//         cout << "Twin prime pair with maximum size:" << endl;
//         auto maxSizePair =pair_prime.back();
//         cout << "(" << maxSizePair.first << ", " << maxSizePair.second << ")" << endl;
//     }
//     return 0;
// }

// Another way of doing this code
//  int main(){
//      int n{};
//      cout<<"Enter a number: ";
//      cin>>n;

//     vector<pair<int, int>>pair_prime{};

//     /*In C++, std::pair is a template class that holds two values of potentially
//     different types. When you create a pair using make_pair or by other means,
//     you can access the individual elements using first and second member variables.
//     (here first and second means (4,7) 4 be first and 7 be second)*/

//     for(int i{2}; i<=n;i++){
//         bool isprime1 = true;
//         bool isprime2 = true;

//         for(int j{2};j * j <= i;j++){ //j*j<=i  equalto  j<=sqroot(i)
//             if(i % j == 0){
//                 isprime1 = false;
//                 break;
//             }
//         }
//         for(int j{2};j * j <= i+2;j++){ //j*j<=i+2  equalto  j<=sqroot(i+2)
//             if((i+2) % j == 0){
//                 isprime2 = false;
//                 break;
//             }
//         }
//         if(isprime1 && isprime2){
//             pair_prime.push_back(make_pair(i,i+2));
//         }
//     }

//     if (!pair_prime.empty()) {
//         cout << "Twin prime pair with maximum size:" << endl;
//         auto maxSizePair =pair_prime.back();
//         cout << "(" << maxSizePair.first << ", " << maxSizePair.second << ")" << endl;
//     }
//     return 0;
// }

// Using functions and reducing the code

// bool isprime(int n){
//     if(n<2){
//         return false;
//     }

//     for(int j{2};j * j <= n;j++){ //j*j<=i  equalto  j<=sqroot(i)
//         if(n % j == 0){
//             return false;
//             break;
//         }
//     }
//     return true;
// }

// int main(){
//     int n{};
//     cout<<"Enter a number: ";
//     cin>>n;

//     vector<pair<int, int>>pair_prime{};

//     for(int i{2}; i<= n-2;i++){
//         if(isprime(i) && isprime(i+2) && isprime(i) + isprime(i+2) <= n){
//             pair_prime.push_back(make_pair(i,i+2));
//         }
//     }
//     if (!pair_prime.empty()) {
//         cout << "Twin prime pair with maximum size:" << endl;
//         auto maxSizePair =pair_prime.back();
//         cout << "(" << maxSizePair.first << ", " << maxSizePair.second << ")" << endl;
//     }

//     return 0;
// }

/* Q - 63. Write a C++ program that prints the three highest numbers from a
list of numbers in descending order.*/
// int main(){
//     int list[]{12,89,768,45,35,78,6,4,6,3,4,678,4,5,34};
//     int size = sizeof(list)/sizeof(list[0]);
//     int highest = size-1;

//     int first{list[0]},second{list[0]},third{list[0]};

//     for(int i{1};i <= size;i++){
//         if(list[i] >= first ){
//             third = second;
//             second = first;
//             first = list[i];

//         }else if(list[i] > second){
//             third = second;
//             second = list[i];

//         }else if(list[i] > third){
//             third = list[i];
//         }

//     }
//     cout<<first<<","<<second<<","<<third<<endl;

//     return 0;
// }

/*Q - 64. Write a C++ program to compute the sum of the two given integers and
count the number of digits in the sum value.*/
// int main(){
//     int a{},b{},sum{};
//     cout<<"Enter two numbers with space: ";
//     cin>>a>>b;

//     sum = a + b;

//     string converting = to_string(sum);
//     int size = converting.length();
//     cout<<sum<<endl;
//     cout<<size<<endl;

//     return 0;
// }

/* Q - 66. Write a C++ program to add all the numbers from 1 to a given number.*/
// int main(){
//     int n{},sum{};
//     cout<<"Enter a number: ";
//     cin>>n;

//     for(int i{1};i <= n;i++){
//         sum+= i;
//     }
//     cout<<sum;

//     return 0;
// }

/* Q -68. Write a C++ program that reads seven numbers and sorts them in descending order.*/
// int main(){
//     int size{7};
//     int arr[7];

//     for(int i{0};i < size;i++){
//         cout<<"Enter a num: ";
//         cin>>arr[i];
//     }

//     for(int i{0};i < size;i++){
//         for(int j{0};j < size -1 -i;j++){
//             if(arr[j] < arr[j + 1]){
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
//     for(int i{0};i < size;i++){
//         cout<<arr[i]<<endl;
//     }

//     return 0;
// }
/*Q - 69. For n = 10, write a C++ program that reads the integer n and prints its factorial.*/
// int main(){
//     int n{10};
//     int factorail{1};
//     for(int i{1};i <= n;i++){
//         factorail*=i;
//     }
//     cout<<factorail;

//     return 0;
// }
/*Q - 70. Write a C++ program to replace all the lower-case letters in a given
 string with the corresponding capital letters.*/
// int main(){
//     string s{};
//     cout << "-> ";
//     getline(cin, s);

//     int size = s.length();
//     for(int i{0};i < size;i++){
//         s[i] = toupper(s[i]);
       
//     }
//     cout<<s;

//     return 0;
// }
//Another approach using reference and ranged based for loop,this dosen't copy data
// int main(){
//     string s{};
//     cout<<"->";
//     getline(cin,s);

//     for(char &c : s)  {
//         c = toupper(c);
//     }
//     cout<<s;

//     return 0;
// }
/*Q - 72. Write a C++ program that reads n digits chosen from 0 to 9 and counts 
the number of combinations where the sum of the digits equals the given number
. Do not use the same digits in a combination.*/

// int main(){
//     int n{},s{};
//     cout<<"How many number your want ex.3=(123)->";
//     cin>>n;
//     cout<<"What should be the sum of those number ex.5=3+2+1->";
//     cin>>s;


    
//     return 0;
// }

/* Q - 73. Write a C++ program that accepts the sales unit price and sales 
quantity of various items and computes the total sales amount and the average 
sales quantity. All input values must be greater than or equal to 0 and less
 than or equal to 1,000. In addition, the number of pairs of sales unit and 
 sales quantity does not exceed 100. If a fraction occurs in the average of the 
 sales quantity, round to the first decimal place.*/

//  int main(){
//     int unit{},unit_price{};

//     int total_sale{},average_sale{};

//     bool run{false};

//     cout<<"No of items bought: ";
//     cin>>unit;
//     cout<<"Price per item: ";
//     cin>>unit_price;

//     if(unit > 1000 || unit < 0 || unit_price > 1000 || unit_price < 0 ){
//         cout<<"Enter value between 0 and 1000"<<endl;
//         run = true;
//     }
//     total_sale = unit * unit_price;
//     average_sale = static_cast<double>(total_sale) * unit;

//     cout<<"Total Sale: $"<<total_sale<<endl;
//     cout<<"Average of Sales Quantity: $"<<average_sale<<endl;


//     return 0;
//  }

/* Q - 74. Write a C++ program that accepts various numbers and computes the difference between 
the highest number and the lowest number. All input numbers should be real numbers 
between 0 and 1,000,000. The output (real numbers) may include an error of 0.01 or less.*/

// int main(){
//     vector<double>numbers;
//     int size{};
//     double input{};
//     double diff{};
//     const double error{0.01};

//     cout<<"Enter a number between 0 and 1,000,000(enter negative value to stop): ";

//     while(true){
//         cout<<">>";
//         cin>>input;
        
//         if(input < 0) break;
//         if(input >= 0 && input <= 1000000){
//             numbers.push_back(input);
//         }else{
//             cout<<"Invalid input";
//         }
//     }
//     if(numbers.empty()){
//         cout<<"No valid value entered. Exiting...";
//     }

//     size = numbers.size();
//     double largest = numbers[0];
//     double smallest = numbers[0];

//     for(int i{1}; i < size;i++){
//         if(numbers[i] > largest){
//             largest = numbers[i];
//         }
//         if(numbers[i] < smallest){
//             smallest = numbers[i];
//         }
//     }
//     diff = largest - smallest;

//     if (abs(diff) <= error) {
//         cout << "The difference between the highest and lowest numbers is within the acceptable error range: " << diff << "\n";
//     } else {
//         cout << "The difference between the highest and lowest numbers is greater than the acceptable error range.\n";
//     }

//     return 0;
// }

/* Q - 75. Write a C++ program to compute the sum of the specified number of prime numbers.*/
int main(){
    vector<int>prime{};
    int count{1};
    int n{};
    

    return 0;
}

