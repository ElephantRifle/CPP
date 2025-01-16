/*Array of Objects and Copy Semantics

Problem: Create a class Library that contains an array of Book objects, where each Book has 
a string title. Implement the copy constructor for both shallow and deep copies. Compare the 
effects of the shallow and deep copy on the array of Book objects when the Library object is 
assigned to another.

Objective: Practice working with arrays of objects and copying them correctly to prevent 
unwanted sharing of data.
*/

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;


class Library{
    private:
    string title{};

};