#include<iostream>
#include<string>
using namespace std;

string print_guest_list(string arr[],size_t);
void clear_guest_list(string arr[],size_t);

void event_guest_list()
{
    string guest_list[]{"Larry","Moa","Curly"};
    size_t guest_list_size{3};
}

void print_guest_list()
{
    for(size_t  i{0};i<guest_list_size();i++)
        cout<<guest_list()[i]<<endl;
}

int main(){
    print_guest_list();


    return 0;
}