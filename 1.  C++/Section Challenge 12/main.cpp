#include<iostream>
using namespace std;

/*You can also use this to print array element using ranged based for loop
we need this modifiation in function parameter because when we pass array 
to a function it is passed as a pointer(cuz name of the array is the memory
address of first element of array).

Problem: Size have to be put manually as ranged based for loop dosen't use size
(Dont use it).

void print(int (&array)[5]){
    for(auto arr: array){
      cout<<"[";
      cout<<arr;
      cout<<"]";
    }
}*/

void print (const int*const array,size_t size){
    for(int i{0}; i < size; i++)
      cout<<"[" << array[i] << "]";
      cout<<endl;
}

int *apply_all(const int*const array1,size_t array1_size,const int*const array2,size_t array2_size){
    int *f_result{nullptr};
    int size=array1_size*array2_size;
    f_result=new int[size];

    int index{0};

    for(int i{0}; i < array2_size; i++){
        for(int j{0}; j < array1_size; j++){
            int result=array2[i]*array1[j];//Store product of array1 and array2 in result
            f_result[index++] = result;//Stores Product of array1 and array2 in f_result starting at position 0 till the loop teminates 
        }
    }
    return f_result;
}

int main(){
    const size_t array1_size{5};        
    const size_t array2_size{3};

    int array1[]{1,2,3,4,5};
    int array2[]{10,20,30};

    cout<<"Array 1: ";
    print(array1,array1_size);

    cout<<"Array 2: ";
    print(array2,array2_size);

    int *result=apply_all(array1,array1_size,array2,array2_size);

    print(result,15);

    //Deleting the allocated memory
    delete []result;
    return 0;

}
