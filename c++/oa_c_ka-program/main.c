#include <stdio.h>

/*1)Write a program to convert temperature from degree centigrade to Fahrenheit.
 °F =°C*9/5+32*/

// int main(){
//     double celcius,fahrenheit;

//     printf("Enter temperature in celcius: ");
//     scanf("%lf",&celcius);

//     fahrenheit = (celcius*9)/5 + 32;
//     printf("%f",fahrenheit );


//     return 0;
// }

/*2)Write a program to compute the addition, subtraction, product, quotient and
remainder of two given numbers.*/

// int main(){
//     int a = 20;
//     int b = 10;

//     printf("Addition: %d",a+b);
//     printf("\nSubtract: %d",a-b);
//     printf("\nMultiply: %d",a*b);
//     printf("\nDivide: %d",a/b);
//     printf("\nRemainder: %d",a%b);

//     return 0;
// }

/*3). Write a program to swap the values of two variables*/
// int main(){
//     int a = 10;
//     int b = 5;
//     int temp;

//     printf("Before swap: %d  %d",a,b);

//     temp = a;
//     a = b ;
//     b =temp;

//     printf("\nAfter swap: %d  %d",a,b);

//     return 0;
// }
/*4). Write a program to compute net amount from the given quantity purchased and 
rate per quantity. Discount of 10 .is allowed if quantity purchased exceeds 100.
*/
// int main(){
//     int rate = 1000;
//     double quantity,amount;
//     double discount = 0.10;

//     printf("Enter the quantity you want: ");
//     scanf("%lf",&quantity);

//     if(quantity < 100){
//         amount = rate * quantity;
//     }else{
//         discount = 0.10*(rate * quantity);
//         amount = (rate * quantity) - discount;
//     } 
//     printf("Net Amount: %.2f",amount);

//     return 0;
// }
/*5)5. Write a program to print the sum of digit of a given number.
*/
// int main(){
//     int n;
//     int sum;
//     printf("Enter the number:" );
//     scanf("%d",&n);

//     while(n != 0){
//         int last = n % 10;
//         sum += last;
//         n = n / 10;
//     }
//     printf("Sum of n: %d",sum);

//     return 0;
// }

/*6). Write program to print the Fibonacci series up to a given number.*/
//Better , management with less printf
// int main(){
//     int n,next;
//     int fibo1 = 0;
//     int fibo2 = 1;

//     printf("Enter the limit: ");
//     scanf("%d",&n);

//     printf("%d",fibo1);
    

//     for(int i = 3;i < n;++i){
//         if(next >= n){
//             break;
//         }else{
//            printf(",");
//            printf("%d",next);
//            fibo1 = fibo2;
//            fibo2 = next;
//            next = fibo1 + fibo2;
//         }
        
//     }

//     return 0;
// }

//Not to good
// int main(){
//     int n,next;
//     int fibo1 = 0;
//     int fibo2 = 1;

//     printf("Enter the limit: ");
//     scanf("%d",&n);

//     printf("%d",fibo1);
//     printf(",");                   

//     for(int i = 3;i < n;++i){
//         if(next <= n){
//            printf("%d",next);
//            fibo1 = fibo2;
//            fibo2 = next;
//            next = fibo1 + fibo2;
//            printf(",");
//         }else{
//             break;
//         }
//     }

//     return 0;
// }

/*7). Write a program to print the prime numbers within a given number.
*/
// int main(){
//     int n;

//     printf("Enter the limit: ");
//     scanf("%d",&n);
    
//     if(n <2 ){
//         printf("No Prime numbers");
//     }
//     for(int i = 2;i < n;++i){
//         int j;
//         for(j = 2; j < i;++j){
//             if(i % j == 0 ){
//                 break;
//             }
//         }
//         if(j==i){
//             printf("%d ",i);
//         }
//     }


//     return 0;
// }

/*8. Write a program to check a given number is prime or not.
*/
// int main(){
//     int n;
//     int isprime = 1;
//     printf("Enter a number: ");
//     scanf("%d",&n);

//     if (n < 2) {
//         printf("is not a prime number\n");
//         return 0;
//     }
//     for(int i = 2 ;i <= n/2;++i){
//         if(n % i == 0){
//             isprime = 0;
//             break;
//         }
//     }
//     if(isprime){
//         printf("is prime number");
//     }else{
//         printf("is not prime");
//     }

//     return 0;
// }
/*9. Write a program to check whether a no is an Armstrong number.*/

// //Function to return the power to count value of a number
// int power(int temp,int count){
//     int sum = 1;
//     for(int i = 0;i < count;++i){
//         sum *= temp;
//     }
     
//     return sum;
// }
// int main(){
//     int n,count = 0,sum = 0;

//     printf("Enter numbers: ");
//     scanf("%d",&n);

//     int n2 = n;  //Assigned n2 and n3 after n gets its value
//     int n3 = n;  

//    //Used to count the number of digits
//    while(n2 != 0){
//     count++;
//     n2 = n2/10;
//    }
   
//    //calculates the sum to the power of count 
//    int i = 0;
//    while(i != count){
//     int temp = n3 % 10;
//     sum += power(temp,count);          //calls function that calculates the power 
//     ++i;
//     n3 = n3 / 10;
//    }

//    //checks and print if n == sum 
//    printf("%d",sum);
//     if (n == sum) {
//         printf("\n is an Armstrong number.\n");
//     } else {
//         printf(" is not an Armstrong number.\n");
//     }
//     return 0;
// }

/*10. Write a program to determine and print the sum of the following harmonic series 
for a given value of n =1 +1/2+1/3+1/4+……+1/n
*/
// int main(){
//     int n;
//     double sum = 0 ;

//     printf("Enter a number: ");
//     scanf("%d",&n);

//     for(int i = 1;i <= n;++i){
//         sum += 1.0/i;
//     }
//     printf("Harmonic mean of %d is %.2lf",n,sum);


//     return 0;
// }

/*11. Write a program to print the Floyds triangle.*/
// int main(){
//     int n ,a = 0;

//     printf("Enter a number: ");
//     scanf("%d",&n);
    
//     for(int i = 1;i <= n; ++i){
//         for(int j = 1; j <= i; ++j){
//             ++a;
//             printf("%d ",a);
//         }
//         printf("\n");
//     }

//     return 0;
// }

/*12. Write a program to read three integer values from the keyboard and display 
the output stating that they are the sides of right angled triangle.
*/

// int main(){
//     int a,b,c;

//     printf("Enter three values: ");
//     scanf("%d %d %d",&a,&b,&c);
    
//     int large = a;
//     if(b > large){
//         large = b;
//     }
//     if(c > large){
//         large = c;
//     }

//     int a2 = a*a;
//     int b2 = b*b;
//     int c2 = c*c;

//     if(a2 + b2 == large * large || a2 + c2 == large * large
//        ||  b2 + c2 == large * large){
//         printf("It is a right angle triangle.");
//     }else{
//         printf("\nIt is not a right angle triangle");
//     }

//     return 0;
// }

/*13. Write a program to accept an year from the user and check whether the entered 
year is a leap year or not.*/
// int main(){
//     int year;

//     printf("Enter a year: ");
//     scanf("%d",&year);

//     if(year % 4 == 0 && year % 100 != 0 ||(year % 400 == 0)){
//         printf("%d is a leap year.",year);
//     }else{
//         printf("%d is not a leap year.",year);
//     }

//     return 0;
// }

/*14. Write a program to print binary equivalent of an integer number.
*/
// int main(){
//     int n,quotient = 1 ,remainder,bin ;
//     int posi = 1;
//     const int a = 2;

//     printf("Enter a number: ");
//     scanf("%d",&n);

//     while(n != 0){
//         remainder = n % 2;
//         n /=2;
//         bin += remainder * posi;
//         posi *= 10;
//     }
//     printf("%d",bin);
//     return 0;
// }

/*15. Write a program to print the following pattern (take number of lines as input 
from the user).
*****
****
***
**
*/
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);

//     for(int i = n;i >=0 ;--i){
//         for(int j = 0 ;j < i;++j){
//             printf("* ");
//         }
//         printf("\n");
//     }

//     return 0;
// }

/*16. Write a program to _nd out the length of a given string without using the library
function strlen().
*/
// int main(){
//     char n[100];
//     int count ,i = 0;
//     printf("Enter a statement: ");
//     fgets(n,sizeof(n),stdin);

//     while(n[i] != '\0' && n[i] != '\n'){
//         if(n[i] != ' '){
//             count++;
//         }
//         i++;
//     }
//     printf(" length of the string is: %d\n", count);
   

//     return 0;
// }
/*17. Write a program to print the reverse of a given string.*/
// #include <stdio.h>

// int main() {
//     char str[100];
//     int count = 0;

//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);

//     while (str[count] != '\0' && str[count] != '\n') {
//         count++;
//     }

//     printf("Reversed string: ");

//     for (int i = count ; i >= 0; i--) {
//         printf("%c", str[i]);
//     }

//     return 0;
// }


/* Write a program to check if given character is digit or not by using only 
operators*/
// int is_digit(char a){
//     if(a >= '0' && a <='9' ){
//         return 1;
//     }else{
//         return 0;
//     }
// }

// int main(){
//     char a;
    
//     printf("Enter a value: ");
//     scanf("%c",&a);


//     if(is_digit(a)){
//         printf("%c is a digit",a);
//     }else{
//         printf("%c is not a digit",a);
//     }

//     return 0;
// }





// int digit(char a){
//     return (a >= '0' && a <= '9');
// }
// int main(){
//     char a;

//     printf("Enter a value: ");
//     scanf("%c",&a);

//     printf("%c is %s digit",a,digit(a)? "a" : "not a");

//     return 0;
// }

//---------------------------------------------------------------

// int main(){
//     int a;
//     printf("Enter a digit: ");
//     scanf("%d",&a);
//     int b = a;
//     while(b % 2 != 0){
//         printf("Enter a digit: ");
//         scanf("%d",&b);
//     }
//     return 0;
// }

//---------------------------------------------------------------------------------

// int main(){
//     char c;
//     printf("Enter: ");
//     scanf("%c",&c);

//     int i = (c >= '0' && c <= '9');
//     printf("%d",i);

//     return 0;
// }


//--------------------------------------------------------------------------------

//Question - To find the largest element in an array
// #include<stdio.h>
// int main(){
//     int arr[]={12,100,9,60,7,32};
//     int largest = arr[0];
//     int second_largest;

//     int size = sizeof(arr)/sizeof(arr[0]);

//     for(int i = 0 ;i < size;++i){
//         if(arr[i] > largest){
//             second_largest = largest;
//             largest = arr[i];
//         }else if(arr[i] > second_largest){
//             second_largest = arr[i];
//         }
//     }
//     printf("\n%d",second_largest);

//     return 0;
// }

//----------------------------------------------------------------------------------------
//Question - WAP to rotate an array to left by n - position

// #include<stdio.h>
// int main(){
//     int arr[]={10,20,30,40,50,60,70,80,90,100};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);

    
//     while(n > 0){
//         int temp = arr[0];
//         for(int z = 0;z < size - 1;++z){
//             arr[z] = arr[z+1];
//         }
//         arr[size - 1] = temp;
//         n--;
//     }
//     for(int i = 0;i < size;++i){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

//----------------------------------------------------------------------------------------
//Question - WAP to check if two strings are anagram to each other or not

// #include<stdio.h>

// int main(){
//     char str[]={"evil"};
//     char str2[]={"vile"};

//     int count = 0,count_2 = 0;
//     int i = 0,z = 0;
    

//     while(str[i] != '\n' && str[i] != '\0'){
//         if(str[i] != ' '){
//             count++;
//         }
//         i++;
//     }
//     while(str2[z] != '\n' && str2[z] != '\0'){
//         if(str2[z] != ' '){
//             count_2++;
//         }
//         z++;
//     }

//     int flag = 0;
//     if(count != count_2){
//         printf("Strings are not Anagram to each other.");
//         return 0;
//     }
//     for(int i = 0;i < count;++i){
//         flag = 0;
//         for(int j = 0;j < count;++j){
//             if(str[i] == str2[j]){
//                 flag = 1;
//                 break;
//             }
//         }
//         if(!flag){
//             printf("Strings are not Anagram to each other.");
//             return 0;
//         }
//     }
    
//     printf("Strings are Anagram to each other.");
    

//     return 0;
// }

//-------------------------------------------------------------------------------
//Question - WAP to print pyramid pattern

// #include<stdio.h>

// int main(){
//     int n ;
//     printf("Enter a number: ");
//     scanf("%d",&n);

//     for(int i = 0 ;i < n;++i){
//         for(int k = n ; k > i;--k){
//             printf(" ");
//         }
//         for(int j = 0;j <= i;++j){
//             printf("* ");
//         }
//         printf("\n");
//     }

//     return 0;
// }

//--------------------------------------------------------------------------------


//Question - WAP to print all armstrong numbers between two given numbers

#include<stdio.h>

//To Calculate value upto its power
int power(int temp2,int count){
    int sum_product = 1;
    for(int i = 0;i < count;++i){
        sum_product *= temp2;
    }
    return sum_product;
}

int main(){
    int n,m;
    printf("Enter Range: ");
    scanf("%d %d",&n,&m);


   for(int i = n; i <= m;++i){
    //To find the length of a number
    int count = 0;
    int temp = i;
    while(temp != 0){
        temp /= 10;
        count++;
    }
    //To calculate sum of product with count as power
    temp = i; 
    int sum = 0;
    int a = 0;
    while(a != count){
        int temp2 = temp % 10;
        sum +=power(temp2,count);
        ++a;
        temp /= 10;
    } 

    if(sum == i){
        printf("%d\n",i);
    }
   }
   
    return 0;
}