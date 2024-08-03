// #include<iostream>
// using namespace std;

// void print_array(int arr[],size_t size);//prototype
// void set_array(int arr[],size_t size,int value);//prototype

// void print_array(int arr[],size_t size)//definition
// {
//     for(size_t i{0};i<size;i++)
//        cout<<arr[i]<<" ";
//     cout<<endl;   
// }

// void set_array(int arr[],size_t size,int value)//definition
// {
//     for(size_t i{0};i<size;i++)
//        arr[i]=value;
// }

// int main(){
//     int my_score[]{100,98,90,86,84};
//     print_array(my_score,5);//function call
//     set_array(my_score,5,100);//function call
//     print_array(my_score,5);//function call

//     return 0;
// }

#include<iostream>
using namespace std;

void print_array(int arr[],size_t size);
void set_array(int arr[],size_t size,int numbers);

void print_array(int arr[],size_t size)
{
    for(int i{0};i<size;i++)
       cout<<arr[i]<<endl;
    cout<<endl;   
}
void set_array(int arr[],size_t size,int numbers)
{
    for(size_t i{0};i<size;i++)
       arr[i]=numbers;
}

int main(){
    int my_score[]{100,98,90,86,84};
    print_array(my_score,5);//function call
    set_array(my_score,5,100);//function call
    print_array(my_score,5);//function call

    return 0;
}