#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(){
    // string s1 {};
    // string s2 {"Frank"};
    // string s3 {s2};
    // string s4 {"Frank",3};
    // string s5 {s3,0,2};
    // string s6 {3 ,'x'};
    // cout<<s1<<endl;
    // cout<<s2<<endl;
    // cout<<s3<<endl;
    // cout<<s4<<endl;
    // cout<<s5<<endl;
    // cout<<s6<<endl;

    // string s1{};
    // s1="C++Rocks";
    // string s2{"Hello"};
    // s2=s1;
    // cout<<s1<<endl;
    // cout<<s2<<endl;

    // string s1{"c++"};
    // string s2{"is a powerfull"};
    
    // string sentence;
    // sentence=s1+" "+s2+" language.";
    // cout<<sentence;

    // string s1;
    // string s2{"Frank"};

    // // s2[0]='f';
    // s2.at(0)='P';

    // cout<<s2[0]<<endl;
    // cout<<s2.at(0)<<endl; 

    // string s1{"Frank"};

    // for(char c:s1)
    //   cout<<c<<endl;

    // string s1{"Frank"};
    // for(int c:s1)
    //   cout<<c<<endl;
    // string s1{"This is a test"};
    // cout<<s1.substr(0,4)<<endl;
    // cout<<s1.substr(5,2)<<endl;
    // cout<<s1.substr(10,4)<<endl;

    // string s1{"This is a test"};
    // cout<<s1.find("This")<<endl;
    // cout<<s1.find("is")<<endl;
    // cout<<s1.find("test")<<endl;
    // cout<<s1.find('e')<<endl;
    // cout<<s1.find("is",4)<<endl;
    // cout<<s1.find("xx");

    string s1="The secret word is Boo.";
    string word{};

    cout<<"Enter the word: ";
    cin>>word;

    size_t position=s1.find(word);

    if(position !=string::npos)
      cout<<"Found '"<<word<< "' at position "<<position<<endl;
    else
      cout<<"Sorry '"<<word<<"' not found."<<endl;  

    // string s1{"This is a test"};
    // cout<<s1.erase(0,5)<<endl;
    // cout<<s1.erase(5,4)<<endl;

    // string s1{"Frank"};
    // cout<<s1.length()<<endl;
    // s1+=" James";
    // cout<<s1<<endl;


    // string s1;
    // cout<<"Enter anything: ";
    // cin>>s1;
    // // cout<<s1<<endl;

    // getline(cin,s1);//getline(cin,s1,'x);
    // cout<<s1<<endl;



    return 0;
}