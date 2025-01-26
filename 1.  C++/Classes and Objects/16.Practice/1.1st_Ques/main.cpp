// /*1. Basic Relationship Between Two Classes
// Problem:
// Create two classes: Author and Book.

// The Author class should have a name and a list of books they have written.
// The Book class should have a title and an Author object to indicate who wrote the book.

// Objective:
// Understand how one class can contain objects of another class.
// Practice using constructors and methods to interact between classes.
// */

#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

class Author; // Class prototype

class Book{
    private:
    string title;
    Author* author;

    public:
    //Constructor
    Book(const string& title, Author* author = nullptr)
        :title(title), author(author){};

    //Shallow Copy constructor
     Book(const Book& other)
        : title(other.title), author(other.author) {
        cout << "\nShallow copy constructor invoked for book: " << title << endl;
    }

    //Method
    string get_title(){
        return title;
    } 
    //Method Prototype
    string get_Authors_name()const;
    

};
class Author{
    private:
    string name{};
    vector<Book>books;

    public:
    //Constructor
    Author(const string& name){
        this->name = name;
    }

    //Methods
    string get_name(){     
        return name;
    }

    void add_book(const string& title){
        Book new_book{title,this};
        books.push_back(new_book);
    }

    void display_book(){
        cout<<"\nBook written by "<<name<<": \n";
        for(auto& bk : books){
            cout<<"\n-"<<bk.get_title()<<" (Author: "<<bk.get_Authors_name()<<")"<<endl;
        }
    }
    //~Destructor
    ~Author(){
        cout<<"\nDestructor called for "<<name<<endl;
    }

};
string Book::get_Authors_name() const {
    // return (author != nullptr) ? author->get_name() : "Unknown";
    if(author != nullptr){
        return author->get_name();
    }else{
        return "Unknown";
    }
}

int main(){
    Author obj1{"J.K Rowling"};
    obj1.add_book("Harry Potter and the Philosopher's Stone");
    obj1.add_book("Harry Potter and the Chamber of Secrets");
    obj1.add_book("Harry Potter and the Prisoner of Azkaban");

    obj1.display_book();

    return 0;
}



// int main(){


//     return 0;
// }






