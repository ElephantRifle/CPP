#include<iostream>
using namespace std;
// int main(){
//     int *int_ptr{nullptr};
//     int_ptr=new int;
//     cout<<int_ptr<<endl;

//     delete int_ptr;
  
//     size_t size{};

//     double *temp_ptr{nullptr};

//     cout<<"How many temps?: ";
//     cin>>size;
    
//     temp_ptr=new double(size);

//     cout<<*temp_ptr<<endl;

//     delete []temp_ptr;
  
//     return 0;
// }

//--------------------------------------------------------------------------------------------

// int main(){
//     //new , delete
//     int size{};//statically allocated

//     int *int_ptr{nullptr};//staically allocated

//     cout<<"How big you want the size of an array: ";
//     cin>>size;
//     //Creating a Array using Dynamic memory allocation
//     int_ptr=new int[size];

//     for(int i{0};i<size;i++){
//         cout<<"Enter the elements to add in array: "<<i<<":"; 
//         cin>>int_ptr[i];
//     }
//     for(int i{0};i<size;i++){
//         cout<<int_ptr[i]<<" ";
//     }
    
//     delete[]int_ptr;

//     return 0;
// }
//---------------------------------------------------------------------------------------
int *create_array(size_t size,int init_value=0){
    int *new_storage{nullptr};
    new_storage=new int[size];
    for(size_t i{0};i<size;i++)
      new_storage[i]=init_value;//we can use this subscript Notation or Offset notation (below this)both are valid
    //   *(new_storage+i)=init_value;
    return new_storage;  
}
void display(int *array,size_t size){
    for(size_t i{0};i<size;i++)
      cout<<array[i]<<" ";
      cout<<endl;  
}

int main(){
    size_t size{};
    int *my_array{nullptr};
    int init_value{};
    
    cout<<"\nHow many values will yout like to allocate -> ";
    cin>>size;

    cout<<"What value would you like them to be intialized -> ";
    cin>>init_value;
    my_array=create_array( size,init_value);
    

    cout<<"\n----------------------------------"<<endl;

    display(my_array,size);
    delete []my_array;

    return 0;
}
