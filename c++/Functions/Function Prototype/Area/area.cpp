

#include<iostream>
using namespace std;

const double pi{3.14159};

void area_of_circle();
double calc_area(double);

void volume_of_cylinder();
double calc_volume(double);



int main(){
    area_of_circle();
    volume_of_cylinder();


    return 0;
}
double calc_area(double radius)
{
    return pi*radius*radius;
}
double calc_volume(double radius,double height)
{
    return calc_area(radius)*height;
}

void area_of_circle(void)
{
    double radius{};
    cout<<"\nEnter the radius of circle: ";
    cin>>radius;

    cout<<"The Area of circle with radius "<<radius<<" is: "<<calc_area(radius)<<endl;
    cout<<endl;
}
void volume_of_cylinder()
{
    double radius{};
    double height{};

    cout<<"\nEnter the radius of cylinder: ";
    cin>>radius;
    cout<<"Enter the height of cylinder: ";
    cin>>height;

    cout<<"The volume of cylinder with radius "<<radius<<" and height "<<height<<" is : "<<calc_volume(height,radius)<<endl;
    cout<<endl;
}