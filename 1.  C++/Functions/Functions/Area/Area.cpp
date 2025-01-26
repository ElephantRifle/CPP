#include<iostream>
using namespace std;

const double pi{3.14159};
double calc_area_circle(double radius){
    return pi*radius*radius;
}

double calc_volume(double radius,double height){
    // return pi*radius*radius*height;
    return calc_area_circle(radius)*height;
}


void area_of_circle(){
    double radius{};
    cout<<"\nEnter the radius of circle: ";
    cin>>radius;
    cout<<"The area of circle with radius "<<radius<<" is: "<<calc_area_circle(radius)<<endl;
    cout<<endl;
}

void volume_of_cylinder(){
    double radius{};
    double height{};

    cout<<"\nEnter the radius of cylinder: ";
    cin>>radius;
    cout<<"\nEnter the height of cylinder: ";
    cin>>height;

    cout<<"The volume of cylinder with radius "<<radius<<" and height "<<height<<" is: "<<calc_volume(radius,height)<<endl;
    cout<<endl;
}

int main(){
    area_of_circle();
    volume_of_cylinder();
    return 0;
}
//-----------------------------------------------------------------


// #include<iostream>
// using namespace std;
// const double pi{3.14159};

// void area_of_circle()
// {
//     double radius{};
//     cout<<"Enter radius: ";
//     cin>>radius;
//     cout<<"The area of circle with radius "<<radius<<" is: "
//     <<pi*radius*radius<<endl;
// }

// void volume_of_cylinder()
// {
//     double radius{};
//     double height{};
//     cout<<"Enter radius and height: ";
//     cin>>radius>>height;
//     cout<<"The area of cylider with radius "<<radius<<" and "<<height
//     <<" is: "<<pi*radius*radius*height;
// }

// int main(){
//     area_of_circle();
//     volume_of_cylinder();

//     return 0;
// }


//-----------------------------------------------------------------

// #include<iostream>
// using namespace std;
// const double pi{3.14159};

// double area_of_circle(double radius)
// {
//     return pi*radius*radius;
// }
// double area_of_cylinder(double radius,double height)
// {
//     return pi*radius*radius*height;
// }

// int main(){
//     double radius{};
//     double height{};
//     cout<<"Enter radius for area of circle: ";
//     cin>>radius;
//     cout<<"Enter radius and height: ";
//     cin>>radius>>height;

//     cout<<"The area of circle is: "<<area_of_circle(radius)<<endl;
//     cout<<"The area of cylinder is: "<<area_of_cylinder(radius,height)<<endl;

//     return 0;
// }

//-----------------------------------------------------------------


