#include<iostream>
#include<vector>
using namespace std;

// void print_guest_list(const string &guest_1,const string &guest_2,const string &guest_3);
// void clear_guest_list(string &guest_1, string &guest_2, string &guest_3);

// void event_guest_list()
// {
//     string guest_1{"Larry"};
//     string guest_2{"Moa"};
//     string guest_3{"Curly"};
    
//     cout<<endl;
//     print_guest_list(guest_1,guest_2,guest_3);
//     clear_guest_list(guest_1,guest_2,guest_3);
//     print_guest_list(guest_1,guest_2,guest_3);
//     cout<<endl;
// }

// int main(){
//     event_guest_list();

//     return 0;
// }

// void print_guest_list(const string &guest_1,const string &guest_2,const string &guest_3)
// {
//     cout<<guest_1<<endl;
//     cout<<guest_2<<endl;
//     cout<<guest_3<<endl;
    
// }
// void clear_guest_list( string &guest_1, string &guest_2, string &guest_3)
// {
//     guest_1="empty";
//     guest_2="empty";
//     guest_3="empty";
// }

// int function(int arr[],size_t size)
// {
//     for(int i{0};i<=n;i++){
//       return cout<<arr[i];
//     }
    
// }

// // --------------------------------------------------------------------------

// int *function(int arr[],int size)
// {
//     for(int i{0};i<size;i++){
//         arr[i]+=1;
//     }
//     return arr;
// }

// int main(){
//     int arr[]{10,20,30,40,50,60};

//     int size=sizeof(arr)/sizeof(arr[0]);

//     cout<<"\nArray: ";
//     for(int i{0};i<size;i++){
//         cout<<arr[i]<<",";
//     }

//     *function(arr,size);

//     cout<<"\narray modified: ";

//     for(int i{0};i<size;i++){
//         cout<<arr[i]<<",";
//     }
    

//     return 0;
// }
// // --------------------------------------------------------------------------

// int function(int a,int b)
// {
//     return a+b;
// }
// double function(double a,double b)
// {
//     return a+b;
// }

// int main(){

//     double a{};
//     double b{};

//     cout<<"\nEnter a: ";
//     cin>>a;

//     cout<<"\nEnter b: ";
//     cin>>b;

//     cout<<function(a,b); 


//     return 0;
// }

// // --------------------------------------------------------------------------

int swap(int &x,int &y)
{
    int num{};
    num=x;
    x=y;
    y=num;
    
    return x,y;
}

int main(){
    int a{},b{};

    cout<<"\nEnter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;

    cout<<"a: "<<a<<" ,b: "<<b<<endl;
    swap(a,b);
    cout<<"a: "<<a<<" ,b: "<<b<<endl;

    return 0;
}