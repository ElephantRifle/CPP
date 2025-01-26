#include<iostream>
#include<string>
using namespace std;
int main(){
    //substitution Cipher
    string alphabets{" abcdefghijklmnopqrstuvwxyzABCDEFGHIJLKMNOPQRSTUVWXYZ"};
    string keys     {"^zxcvbnmlkjhgfrdeswaqtyuiopZXCVBNMLKJHGFRDESWAQTYUIOP"};
    
    string message{};
    string encrypted{};
    string decrypted{};
 

    cout<<"\nEnter your message: ";
    getline(cin,message);

    cout<<"\nEncrypting message...."<<endl;

    for(char m:message)
    {
        size_t position=alphabets.find(m);
        if(position != string :: npos){
            char new_char{keys.at(position)};
            encrypted+=new_char; 

        }else{
            encrypted+=m;
        }   

    }
    cout<<"\nEncrypted message: "<<encrypted<<endl;

    cout<<"Do you want to Decrypt the encrypted message(y/n): ";
    
    char selection{};
    cin>>selection;

    if(selection=='N'||selection=='n')
    {
        cout<<":("<<endl;
    }
    else if(selection == 'y' || selection == 'Y')
    {
        cout<<"\nDecrypting message...."<<endl;

        for(char e: encrypted)
        {
            size_t position=keys.find(e);
            if(position != string :: npos){
                char new_char{alphabets.at(position)};
                decrypted+=new_char;
                }else{
                    decrypted+=e;
                }
        }
    cout<<"Decrypting message: "<<decrypted<<endl;  

    }else{

        cout<<"\nUnknown selection.."<<endl;
    }
    cout<<"\n";  
    
    return 0;
}