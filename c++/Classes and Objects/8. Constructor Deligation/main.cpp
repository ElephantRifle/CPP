/*Constructor Delegation -> Allows one constructor to use another constructor or call
another constructor within the same class ,By doing this we can reduce the dublicating 
code within the Class.
*/
//In first approach you can see code duplication in Constructors.
//If we have a bug in one section of the code we then have to fix it in another places.
/*this is not good for code in ways like:
  1.Code Reusability 
  2.Maintainability
*/  

//#define First_Approach
#define Better_Approach

#include<iostream>
#include<string>

using std::string;
using std::cout;
using std::cin;

class Rectangle{
    //Attributes
    int length{};
    int width{12000};
    int area{};
    string color{};

//---------------------------------------------------------------------------
    #ifdef First_Approach
    //Constructor
    public:
    Rectangle(int l,int w){
        length = l;                         //Duplicate
        width = w;                          //Duplicate
        area = length * width;              //Duplicate
    }                                       //OR CLONE CODE
    Rectangle(int l,int w,string c){
        length = l;                         //Duplicate
        width = w;                          //Duplicate
        area = length * width;              //Duplicate
        color = c;
    }
    #endif
//---------------------------------------------------------------------------

    #ifdef Better_Approach

    public:
    //Constructor Initialization
    Rectangle(int l,int w){
        length = l;
        width = w;
        area = length * width;
        cout<<"Constructor 1 Called."<<'\n';
    }
    Rectangle(int l,int w,string c):Rectangle(l,w){
        color = c;
        cout<<"Constructor 2 Called."<<'\n';
    }
    #endif
//---------------------------------------------------------------------------
    void print(){
        cout<<"Length : "<<length<<'\n';
        cout<<"Width : "<<width<<'\n';
        cout<<"Area : "<<area<<'\n';
        cout<<"Color : "<<color<<'\n';
    }
};

int main(){
    Rectangle rectangle_1{10,10,"Yellow"};
    rectangle_1.print();

    return 0;
}