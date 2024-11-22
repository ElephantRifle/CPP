/*Problem: Write a class Student that holds a pointer to an array of grades 
(of type int). Implement both a shallow and deep copy constructor. 
Demonstrate memory management issues when copying using shallow copy and fix it 
with deep copy.
Objective: Show how shallow copy can cause memory corruption (e.g., double delete) 
and why deep copy is necessary.*/

/*
FEW THINGS ABOUT ARRAY:

arr is not a variable that occupies separate memory->

   The array arr is just a label for the contiguous block of memory that holds the 
   elements.arr itself does not have an independent memory address because it is not 
   a variable in the usual sense. Instead, it is just a symbolic representation of the
    memory address of the first element (arr[0]).8
*/

/*TO see the difference b/t shallow and deep copy remove (*) from display
object and from destructor */

/*If we don't comment out either the shallow or deep  the compiler will never know 
whether to call the shallow copy constructor or the deep copy constructor when a 
Student object is copied. Both constructors take the same type (const Student&), 
leading to an ambiguity.*/


#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Student{
    private:     //if we swap it will public it will remove encapsulation and we can access it from outside the class
    int* array[5];
    static const int SIZE= 5;

    public:

    // Constructor
    Student(const int (&arr)[SIZE]);

    //Shallow copy constructor
    // Student(const Student& sho_cpy);

    // Deep copy constructor
    Student(const Student& dep_cpy);

    // Display method
    void display_grades();

    // Destructor
    ~Student();

};
// Constructor
Student::Student(const int (&arr)[SIZE]){
    for(int i{0};i < SIZE;i++){
        array[i] = new int (arr[i]);   //assigning new mem to each element of the array
    }
}

/*// When array is passed it will decay into a pointer so the int arr[5],
5 the size will be lost to prevent this pass array by reference that will 
preserve the size or define a new int that stores he size of array */

//Shallow copy constructor using reference
// Student::Student(const Student& sho_cpy){     
//     for(int i{0};i < SIZE;++i){
//         array[i] = sho_cpy.array[i];          //(an array of integers and an array of pointers to integers learn this if confused about how sho_cpy.array[i] gives memory address)
//     }
// }

// Deep copy constructor
Student::Student(const Student& dep_cpy){
    for(int i{0};i < SIZE;++i){
        array[i] = new int (*dep_cpy.array[i]);
    }
}

//Display method
void Student::display_grades(){
    for(int i{0};i < SIZE;++i){  
        cout<<*array[i]<<endl;  //remove * to see the memory address do the same for destructor
    }
}

//Destructor
Student::~Student(){
    for(int i{0};i < SIZE;++i){
        cout<<"Destructor called for: "<<*array[i]<<endl;  //remove * to see for which memory address the destructor is being called
        delete array[i];
    }
}

int main(){
    int grades[]= {10,20,30,40,50};

    Student obj1{grades};
    obj1.display_grades();

    Student obj2{obj1};
    obj2.display_grades();

    return 0;
}


