// In this exercise you will create a program that computes the area of two shapes, a square and a rectangle, by calling the overloaded function find_area.

// Begin by declaring the function prototypes for the square find_area function and the rectangle find_area function.

// The square find_area function is passed an integer value and returns an integer value.

// The rectangle find_area function is passed two double values and returns a double value.

// Remember that both function prototypes should have the same function name find_area.

// Now that the function prototypes have been declared,  at the bottom of the file define both functions.

// The square find_area function will be passed the argument side_length and return the area of the square. The formula for the area of a square is side_length*side_length . You may use the <cmath> function pow to compute this value if you wish.

// The rectangle find_area function will be passed the arguments length and width and return the area of the rectangle. The formula for the area of a rectangle is length*width.

// Now, from the function body of area_calc, declare and initialize the variables square_area and rectangle_area by calling the find_area function and passing the appropriate arguments which are listed below.

// The square has a side_length of 2.

//-----------------------------------------------------------------

// #include<iostream>
// #include<cmath>
// using namespace std;

// int find_area(int);
// double find_area(double,double);

// int main(){
//     int side_length{5};
//     double length{12.5};
//     double width{11.8};

//     int square_area{find_area(side_length)};
//     double rectangle_area{find_area(length,width)};

//     cout<<"\nArea of square: "<<square_area<<endl;
//     cout<<"Area of rectangle: "<<rectangle_area<<endl;
//     cout<<endl;


//     return 0;
// }

// int find_area(int side_length)
// {
//     return side_length*side_length;
// }

// double find_area(double length,double width)
// {
//     return length*width;
// }

//-----------------------------------------------------------------

#include<iostream>
#include<cmath>
using namespace std;

int find_area(int);//Prototype
double find_area(double,double);//Prototype

void definition()//definition
{
    int side_length{5};
    double length{12.5};
    double width{11.8};

    int square_area{find_area(side_length)};
    double rectangle_area{find_area(length,width)};

    cout<<"\nArea of square: "<<square_area<<endl;
    cout<<"Area of rectangle: "<<rectangle_area<<endl;
    cout<<endl;

}

int main(){
    definition();//calling

    return 0;
}

int find_area(int side_length)//definition
{
    return side_length*side_length;
}

double find_area(double length,double width)//definition
{
    return length*width;
}


