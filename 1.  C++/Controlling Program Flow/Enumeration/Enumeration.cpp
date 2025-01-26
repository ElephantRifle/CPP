#include<iostream>
using namespace std;
int main(){
    enum direction{
        left,right,up,down
    };

    direction heading(left);
    
    switch(heading){
        case left:
          cout<<"\nHeading left."<<endl;
          break;  

        case right:
          cout<<"Heading right."<<endl;  
          break;

        default://to handle the fall through,in case one of them dosen't match.
          cout<<"No Warnings.";  
    }
    
    cout<<endl;
    return 0;
}