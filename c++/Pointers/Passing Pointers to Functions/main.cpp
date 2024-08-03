#include<iostream>
#include<vector>
#include<string>
using namespace std;

void double_data(int *int_ptr)
{
    *int_ptr*=2;
}

int main(){

    int value{10};
    int *int_ptr{nullptr};

    cout<<"\nValue is: "<<value<<endl;

    double_data(&value);

    cout<<"Value is: "<<value<<endl;

    cout<<"---------------------------------------------"<<endl;

    int_ptr=&value;

    double_data(int_ptr);

    cout<<"Value is: "<<value<<endl;

    return 0;
}

//-------------------------------------------------------------------------

// void swap(int *a,int *b)
// {
//     int temp{};
//     temp=*a;
//     *a=*b;
//     *b=temp;
// }

// int main(){

//     int x{1000};
//     int y{2000};
    
//     cout<<"\nx: "<<x<<endl;         
//     cout<<"y: "<<y<<endl;

//     swap(&x,&y);        

//     cout<<"\nx: "<<x<<endl;
//     cout<<"y: "<<y<<endl; 

//     cout<<endl;
//     return 0;
// }
// //-------------------------------------------------------------------------

// void display(const vector<string>*const v)
// {
//     // (*v).at(0)="Funny";
//     for(auto s:*v)
//       cout<<s<<" ";
//     cout<<endl;  

// }
// void display(int *array,int sentinel)
// {
//     while(*array != sentinel)
//         cout<<*array++<<" ";
//     cout<<endl;     
        
// }
// int main(){

//     // vector<string>stooges{"Larry","Moa","Curly"};
//     // display(&stooges);

//     int scores[]{10,20,30,40,50,-1};
//     display(scores,-1);

//     return 0;
// }