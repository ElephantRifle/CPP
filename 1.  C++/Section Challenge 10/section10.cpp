#include<iostream>
#include<string>
using namespace std;
int main(){
    string alphabets{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJLKMNOPQRSTUVWXYZ"};
    string keys     {"zxcvbnmlkjhgfrdeswaqtyuiopZXCVBNMLKJHGFRDESWAQTYUIOP"};

    string encrypted{};
    string message{};

    cout<<"\nProvide the message you want to encrypt: ";
    getline(cin,message);


    cout<<"Encrypting message..."<<endl;

    for(char c:message){
        size_t position=alphabets.find(c);
        if(position != string :: npos){
            char new_char{keys.at(position)};
            encrypted+=new_char;

        }else{
            encrypted+=c;
        }
    }
    cout<<"Encrypted message: "<<encrypted<<endl;

    cout<<"\nDecrypting message..."<<endl;
    string decrypted{};
    for(char c:encrypted){
        size_t position=keys.find(c);
        if(position !=string::npos){
            char new_char{alphabets.at(position)};
            decrypted+=new_char;

        }else{
            decrypted+=c;
        }
    }
    cout<<"Decrypted message: "<<decrypted<<endl;
    cout<<endl;

    return 0;
}
