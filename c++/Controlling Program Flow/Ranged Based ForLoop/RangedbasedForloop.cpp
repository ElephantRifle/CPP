#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
int main(){
    vector<double> temperatures{89.9,77.9,80.0,77.5};
    double average_temp{};
    double total{};

    for(auto temp:temperatures)
      total+=temp;

    if(temperatures.size()!=0)
      average_temp=total/temperatures.size();
    cout<<fixed<<setprecision(1); 
    cout<<"\nAverage temperature is : "<<average_temp<<" Fehrenhite"<<endl;
    cout<<endl;
        


    return 0;
}