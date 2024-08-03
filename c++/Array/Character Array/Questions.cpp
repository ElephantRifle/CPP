#include<iostream>
using namespace std;

//Sentence is a Palindrome or Not
// int  main(){
//     int size{};
//     cout<<"Size: ";
//     cin>>size;

//     char arr[size + 1];
//     cout<<"Word: ";
//     cin>>arr;

//     bool flag{true};
//     for(int i{0};i < size-1;i++){
//         if(arr[i] != arr[size-1-i])
//           flag = false;
//     }
//     if(flag){
//         cout<<"Word is a Palindrome."<<endl;
//     }else{
//         cout<<arr<<" is ! a Palindrome."<<endl;
//     }

//     return 0;
// }
//--------------------------------------------------------------------------------------

//Largest Word In a Sentence
int main(){
    int size{};
    cout<<"Size: ";
    cin>>size;
    cin.ignore();

    char arr[size + 1];
    cin.getline(arr,size);    

    int curr_len{0},max_len{0};
    int st{0},maxst{0};
    int i{0};

    while(1){

        if(arr[i] == ' ' || arr[i] == '\0'){
            if(curr_len > max_len){
                max_len = curr_len;
                maxst = st;
            }
        curr_len = 0;
        st = i;
        }
        else
            curr_len ++;

        if(arr[i] == '\0'){
            break;
        }
        i++;
    }

    cout<<max_len<<endl;
    for(int i{0};i <= max_len;i++){
        cout<<arr[i + maxst];
    }


    return 0;
}