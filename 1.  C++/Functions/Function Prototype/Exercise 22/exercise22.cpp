/*In this exercise you will create a program that will be used to convert Fahrenheit temperatures to Celsius and Kelvin temperatures through the use of two functions.*/
// #include<iostream>
// #include<cmath>
// using namespace std;

// double fahrenheit_to_celsius(double);
// double fahremheit_to_kelvin(double);

// void conversion(void)
// {
//     double temperature{};
//     cout<<"\nEnter the temperature in fahrenheit to convert: ";
//     cin>>temperature;

//     cout<<temperature<<" fahrenheit is equivalent to "<<fahrenheit_to_celsius(temperature)<<" degree celsius."<<endl;

//     cout<<temperature<<" fahrenheit is equivalent to "<<fahremheit_to_kelvin(temperature)<<" Kelvin."<<endl;
//     cout<<endl;
// }

// int main(){
//     conversion();

//     return 0;
// }

// double fahrenheit_to_celsius(double temperature)
// {
//     return round((temperature - 32) *5/9);
// }

// double fahremheit_to_kelvin(double temperature)
// {
//     return round((temperature - 32) * 5/9 + 273.15);
// }


#include<iostream>
#include<cmath>
using namespace std;

double convert(double temperature, double factor, double offset)
{
    return ((temperature - offset)*factor);
}

int main(){
    double temperature{};

    cout<<"\nEnter the temperature in fahrenheit to convert: ";
    cin>>temperature;

    cout<<temperature<<" fahrenheit contains "<<convert(temperature,5.0/9.0,32)<<" degree celsius. "<<endl;
    cout<<temperature<<" fahrenheit contains "<<convert(temperature,5.0/9.0,32)+273.15<<" kelvin. "<<endl;

    return 0;
}