#include<iostream>
#include<cctype>//For Character-based function
#include<cstring>//for C-Style String Function
using namespace std;
int main(){
    char first_name[20]{};//if not instiallised {},will produce garbage value (#$234*4$)
    char last_name[20]{};
    char full_name[50]{};
    char temp[50]{};

    cout<<first_name;

    cout<<"Enter your first name: ";
    cin>>first_name;

    cout<<"Enter your last name: ";
    cin>>last_name;
    cout<<"================================="<<endl;

    cout<<"Hello "<<first_name<<" your first name has "<<strlen(first_name)<<" characters"<<endl;
    cout<<"and your last name "<<last_name<<" has "<<strlen(last_name)<<" characters."<<endl;
    
    cout<<"================================="<<endl;

    strcpy(full_name,first_name);
    strcat(full_name," ");
    strcat(full_name,last_name);

    cout<<"Your Fullname is: "<<full_name<<endl;

    cout<<"================================="<<endl;
    // // // ---------------------------------------------------------------------------------------------------------------//

    // cout<<"Enter your fullname: ";
    // cin>>full_name;

    // cout<<"Your Fullname is: "<<full_name<<endl;

    // // ---------------------------------------------------------------------------------------------------------------//
    // cout<<"======================================"<<endl;
    // cout<<"Enter your fullname: ";
    // cin.getline(full_name,50);
    // cout<<"Your Fullname is: "<<full_name<<endl;
    
    // strcpy(temp,full_name);
    // if(strcmp(temp,full_name) == 0 )
    //   cout<<temp<<" and "<<full_name<<" are the same. "<<endl;
    // else
    //   cout<<temp<<" and "<<full_name<<" are different. "<<endl;


    // cout<<"========================================"<<endl;

    // for(size_t i{0};i<strlen(full_name);i++){
    //   if(isalpha(full_name[i]))
    //     full_name[i]=toupper(full_name[i]);
    // }
    // cout<<"Your fullname is: "<<full_name<<endl;

    // if(strcmp(temp,full_name) == 0 )
    //   cout<<temp<<" and "<<full_name<<" are same."<<endl;
    // else
    //   cout<<temp<<" and "<<full_name<<" are different."<<endl;

    // cout<<"======================================="<<endl;  
    // cout<<" Result of Comparing "<<temp<<" and "<<full_name<<" : "<<strcmp(temp,full_name)<<endl;
    // cout<<" Result of Comparing "<<full_name<<" and "<<temp<<" : "<<strcmp(full_name,temp)<<endl;
  
    return 0;
}