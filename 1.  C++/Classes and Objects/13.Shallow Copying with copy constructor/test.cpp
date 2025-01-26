#include<iostream>
using namespace std;

class test{
    public:
    int age{};

    //Constructor
    test(int a);
    //Copy Constructor
    test(test &source);
    //Destructor
    ~test(){
        cout<<"Destructor Called for "<<age<<endl;
    }
};
//Constructor
test::test(int a){
    age = a;
}
//Copy Constructor
test::test(test& source)
     :age(source.age){

}
void display_test(const test& obj_2){ 
/*If we remove the & we will get one more destructor as we are passing obj1 by 
value so it will make a copy which will lead to another constructor*/
    cout<<"Age: "<<obj_2.age<<endl;
    test obj_3(obj_2.age); // a new object using the obj_1

}
int main(){
    test obj_1{12};
    display_test(obj_1);

    return 0;
}
/*1.Copy constructor is called to create the copy of the object.
  2.The copy behaves like a full-fledged object with its own lifetime.
  3.Destructor is called for each object, including any temporary copies created 
  during the execution.*/

/*
 When you pass an object by value in C++, you're making a copy of the original 
 object, and that copy behaves just like any other object:

 1.It has its own memory space.
 2.It gets constructed (via the copy constructor).
 3.It lives for the duration of its scope.
 4.It gets destroyed when it goes out of scope, which triggers its destructor.*/

 /*If we are passing obj1 with pass by reference any changes done on the obj1 will
 affect obj2 ,as the value are passed by reference both objects are refering to the 
 same memory location means the data these object holds have the same memory 
 location but they as objects have seperate memory location. */