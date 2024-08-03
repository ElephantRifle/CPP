#include<iostream>
using namespace std;
int main(){
    // int arr[]{100,200,300};

    // cout<<arr<<endl;
    // cout<<arr[0]<<endl;

    // int *ptr{arr};

    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;

    // // --------------------------------------------------------------------

    // int arr[]{100,300,200,500};

    // cout<<arr<<endl;
    // cout<<*arr<<endl;

    // int *pointer{arr};

    // cout<<pointer<<endl;
    
    // cout<<pointer+1<<endl;

    // cout<<*pointer<<endl;

    // //----------------------------------------------------------------------

    int scores[]{100,95,89};
    cout<<"\nValue of scores: "<<scores<<endl;

    int *score_ptr{scores};
    cout<<"Value of score_ptr: "<<score_ptr<<endl;

    cout<<"\nArray subscript operator:- "<<endl;
    cout<<scores[0]<<endl;
    cout<<scores[1]<<endl;
    cout<<scores[2]<<endl;

    cout<<"\nPointer subscript operator:-"<<endl;
    cout<<score_ptr[0]<<endl;
    cout<<score_ptr[1]<<endl;
    cout<<score_ptr[2]<<endl;

    cout<<"\nPointer offset notation:-"<<endl;
    cout<<*(score_ptr+0)<<endl;
    cout<<*(score_ptr+1)<<endl;
    cout<<*(score_ptr+2)<<endl;

    cout<<"\nArray offset notation:-"<<endl;
    cout<<*(scores+0)<<endl;
    cout<<*(scores+1)<<endl;
    cout<<*(scores+2)<<endl;
    
    return 0;
}

