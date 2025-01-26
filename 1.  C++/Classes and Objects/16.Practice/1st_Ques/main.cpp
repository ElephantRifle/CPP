/*Problem: Implement a class Person that contains a name (string) and age
(int). In the constructor, allocate dynamic memory for a string (name).
Implement both a shallow copy constructor and a deep copy constructor.
Test the difference by creating a Person object and copying it using
both methods.*/

// #include<iostream>
// using std::string;
// using std::cout;
// using std::cin;
// using std::endl;

// class Person{
//     private:
//     string* name{};
//     int age{};

//     public:
//     //Construtor
//     Person(const string& value,int age); // Passing val as a reference avoids creating a copy of the string. Without &, the parameter would be passed by value, which means the constructor would need to create a temporary copy of the string 

//     // Shallow Copy Constructor(Shallow copy)
//     // Person(const Person& copy_obj);

//     //Deep copy Constructor
//     Person(const Person& deep_obj);

//     //Destructor
//     ~Person();

//     //Method
//     void print_info(); 

// };

// //Constructor
// Person::Person(const string& value,int age){ //Const to avoid any unnecessary changes and & to prevent a extra copy of string 
//     name = new string(value);                //remove "(value)" to use the below line
//     // *name = value;                          //Dereferences name to store val init
//     this->age = age;
// }

// // Shallow Copy constructor
// Person::Person(const Person& copy_obj)
//     :name{copy_obj.name},age{copy_obj.age}
// {
//     cout<<"Copy Constructor made copy of: "<<*name<<"  "<<age<<endl;
// }

// //Deep Copy Constructor
// // Person::Person(const Person& deep_obj){
// //     name = new string(*deep_obj.name);
// //     //*name = *deep_obj.name;
// //     age = deep_obj.age;
// // }

// //Destructor
// Person::~Person(){
//     cout<<"Destructor called for "<<*name<< "  " <<age<<endl;
//     delete name;
// }
// void Person::print_info(){
//     cout<<"Name: "<<*name<< " Age: "<<age<<endl;
// }
// int main(){
//     Person object{"Ramesh",40};
//     object.print_info();

//     Person object2 = object;
//     object.print_info();

//     return 0;
// }


#include<iostream>
using std :: string;
using std :: cout;
using std :: cin;
using std :: endl;

class Person{
    string *name;
    int age;
    
    public:
    //Constructor
    Person(const string &value,int age);
    
    //Shallow Copy Constructor
    // Person(const Person &copy_obj);
    
    //Deep Copy Constructor
    Person(const Person &deep_copy);
    
    //Function to Print name
    void display_info();
    
    //Destructor
    ~Person();
};

//Constructor
Person::Person(const string &value,int age){
    name = new string(value);
    this->age = age;
    
}
//Shallow Copy Constructor
// Person::Person(const Person &copy_obj)
// :name{copy_obj.name},age{copy_obj.age}
// {
//     cout<<"Copy Constructor made copy of "<<*name<<endl;
// }

//Deep Copy Constructor
Person::Person(const Person &deep_copy){
    name = new string(*deep_copy.name);
    this->age = deep_copy.age;
    cout<<"Deep copy made of "<<*name<<endl;
}

//Display info
void Person :: display_info(){
    cout<<"Name: "<<*name<< " " <<"age = "<<age<<endl;
}
//Destructor
Person::~Person(){
    cout<<"Destructor called for "<<*name<< " " <<age<<endl;
    delete name;
}

int main(){
    Person obj1{"Ram",40};
    obj1.display_info();
    
    Person obj2{obj1};
    obj2.display_info();
    
    return 0;
}







































// #include<iostream>
// #include<string>

// using std::cout;
// using std::cin;
// using std::endl;
// using std::string;

// class Person{
//     string *name;
//     int age;
    
//     public:
//     //Constructor
//     Person(const string& name,int age);  //Passing val as a reference avoids creating a copy of the string. Without &, the parameter would be passed by value, which means the constructor would need to create a temporary copy of the string 

//     //Copy Constrcutor
//     // Person(const Person& copyobj);

//     //Deep Constructor
//     Person(const Person& deobj);

//     //Destructor
//     ~Person();

//     //Method to display person name
//     void display_data()const;

// };

// //Constructor Definition
// Person::Person(const string& val,int age){//Const to avoid any unnecessary changes and & to prevent a extra copy of string 
//     name = new string(val);               //remove (val) to use the below line
//     // *name = val;                       //Dereferences name to store val init
//     this->age = age;
// }

// // //Copy Constructor 
// // Person::Person(const Person& copyobj)
// //     :name(copyobj.name),age(copyobj.age)
// // {
// //     // cout<<"copyobj memory address: "<<&copyobj<<endl;
// //     cout<<"Copy Constructor made copy of "<<*name<<" "<<age<<endl;
// // }

// //Deep Copy Constructor
// Person::Person(const Person& deobj)
//     // :Person(*name,age)
// {
//     name = new string(*deobj.name);               //name = new string(*deobj.name)
//     // *name = *deobj.name;
//     this->age = deobj.age;
//     cout<<"Deep Copy of "<<*name<<" "<<age<<endl;
// }

// //Destructor
// Person::~Person(){
//     cout<<"Destuctor called for "<<*name<<" "<<age<<endl;
//     delete name;
// }

// //Method to display persond data
// void Person:: display_data()const{
//     cout<<"Name: "<<*name<<" "<<"Age: "<<age<<endl;
// }

// int main(){
//     Person obj1{"Hello",45};
//     // cout<<"obj1 memory address: "<<&obj1<<endl;
//     obj1.display_data();

//     Person obj2 = obj1;
//     cout<<"obj2 memory address: "<<&obj2<<endl;
//     obj2.display_data();

//     return 0;
// }










// Code that can run both shallow and deep copy at same time without giving error of overloading constructor
// #include <iostream>
// using std::string;
// using std::cout;
// using std::endl;

// class Person {
// private:
//     string* name{};
//     int age{};

// public:
//     // Constructor
//     Person(const string& value, int age);

//     // Shallow Copy Constructor
//     Person(const Person& copy_obj);

//     // Destructor
//     ~Person();

//     // Deep Copy Method
//     Person create_deep_copy() const;

//     // Method
//     void print_info() const;
// };

// // Constructor
// Person::Person(const string& value, int age) {
//     name = new string(value);
//     this->age = age;
// }

// // Shallow Copy Constructor
// Person::Person(const Person& copy_obj)
//     : name(copy_obj.name), age(copy_obj.age) {
//     cout << "Shallow Copy Constructor invoked\n";
// }

// // Destructor
// Person::~Person() {
//     if (name) {
//         cout << "Destructor called for " << *name << "  " << age << endl;
//         delete name; // Free dynamically allocated memory
//     }
// }

// // Deep Copy Method
// Person Person::create_deep_copy() const {
//     Person deepCopy(*name, age); // Create a new Person object with its own memory
//     cout << "Deep Copy Created\n";
//     return deepCopy;
// }

// // Method to print information
// void Person::print_info() const {
//     cout << "Name: " << *name << " Age: " << age << endl;
// }

// int main() {
//     // Original object
//     Person object("Ramesh", 40);
//     object.print_info();

//     // Shallow Copy
//     Person shallowCopy = object; // Invokes shallow copy constructor
//     shallowCopy.print_info();

//     // Deep Copy
//     Person deepCopy = object.create_deep_copy(); // Uses deep copy method
//     deepCopy.print_info();

//     return 0;
// }