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
#
//1st Approach
#include<iostream>
#include<string>

using std::string;
using std::cout;
using std::cin;

class Rectangle{
    //Attributes
    int length{};
    int width{};
    int area{};
    string color{};

    //Constructor
    public:
    Rectangle(int l,int w){
        length = l;                         //Duplicate
        width = w;                          //Duplicate
        area = length * width;              //Duplicate
    }
    Rectangle(int l,int w,string c){
        length = l;                         //Duplicate
        width = w;                          //Duplicate
        area = length * width;              //Duplicate
        color = c;
    }

    void print(){
        cout<<"Length : "<<length<<'\n';
        cout<<"Width : "<<width<<'\n';
        cout<<"Area : "<<area<<'\n';
        cout<<"Color : "<<color<<'\n';
    }
};
int main(){
    Rectangle rectangle_1{10,10};
    rectangle_1.print();

    // Rectangle rectangle_2{12,10,"White"};
    // rectangle_2.print();

    return 0;
}


//2nd Approach
#include<iostream>
#include<string>

using std::string;
using std::cout;
using std::cin;

class Rectangle{
    //Attributes
    int length{};
    int width{};
    int area{};
    string color{};

    //Constructor
    public:
    Rectangle(int l,int w){
        length = l;                         //Duplicate
        width = w;                          //Duplicate
        area = length * width;              //Duplicate
    }
    Rectangle(int l,int w,string c){
        length = l;                         //Duplicate
        width = w;                          //Duplicate
        area = length * width;              //Duplicate
        color = c;
    }

    void print(){
        cout<<"Length : "<<length<<'\n';
        cout<<"Width : "<<width<<'\n';
        cout<<"Area : "<<area<<'\n';
        cout<<"Color : "<<color<<'\n';
    }
};
int main(){
    Rectangle rectangle_1{10,10};
    rectangle_1.print();

    // Rectangle rectangle_2{12,10,"White"};
    // rectangle_2.print();

    return 0;
}