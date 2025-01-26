//Find the Maximum Element in an Array using Pointers
#include<iostream>
using namespace std;

void find_max_element(int *int_ptr,int size=0){
    int max{*int_ptr};
    for(int i{0};i<size;i++)
      if(int_ptr[i]>max)
        max=int_ptr[i];
    cout<<max;    
        
}
int main(){
    int array[]{12,11,1,80,65,56,45,300};
    int size{8};
    int *int_ptr{array};
    find_max_element(int_ptr,size);

    return 0;
}