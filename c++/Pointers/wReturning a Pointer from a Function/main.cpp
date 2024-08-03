#include<iostream>
using namespace std;

int *largest_num(int *a,int *b)
{
    if(*a>*b)
      return a;
    else
      return b;
}

int main(){

    int a{100};
    int b{200};

    int *largest_ptr{nullptr};
    largest_ptr=largest_num(&a,&b);
    cout<<*largest_ptr<<endl;

    return 0;
}