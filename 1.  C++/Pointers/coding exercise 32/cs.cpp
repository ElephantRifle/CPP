//Reverse an array
#include<iostream>
using namespace std;

void reverse_array(int array[],int size){
   /*These are able to change original array because *start and *end have 
   direct access to memory location of array elements wich are being changed
   in reverse_array.*/
   int *start{array};
   int *end{array+size-1};
   while(start < end) {
        // swap elements pointed to by start and end pointers
        int temp = *start;
        *start = *end;
        *end = temp;
        
        // Move the pointers towards the center
        start++;
        end--;
    }
    for(int i{0};i<size;i++)
      cout<<array[i]<<" ";
}
int main(){
    int array[]{1,2,3,4,5,6,7,8,9,10};
    int size{10};

    reverse_array(array,size);

    return 0;
}