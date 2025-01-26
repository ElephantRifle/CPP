#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vector_1;
    vector<int>vector_2;

    vector_1.push_back(10);
    vector_1.push_back(20);

    cout<<"Vector_1 are: ";
    cout<<vector_1.at(0)<<",";
    cout<<vector_1.at(1)<<endl;

    cout<<"Vector_1 contains "<<vector_1.size()<<" elements."<<endl;


    vector_2.push_back(100);
    vector_2.push_back(200);

    cout<<"\nVector_2 are: ";
    cout<<vector_2.at(0)<<",";
    cout<<vector_2.at(1)<<endl;
    
    cout<<"Vector_2 contains "<<vector_2.size()<<" elements."<<endl;


    vector<vector<int>>vector_2d{};

    vector_2d.push_back(vector_1);
    vector_2d.push_back(vector_2);

    cout<<"\nVector_2d is: "<<endl;
    cout<<vector_2d.at(0).at(0)<<",";
    cout<<vector_2d.at(0).at(1)<<","<<endl;
    cout<<vector_2d.at(1).at(0)<<",";
    cout<<vector_2d.at(1).at(1)<<endl;


    vector_1.at(0)=1000;


    cout<<"\nVector_2d after changing are: "<<endl;
    cout<<vector_2d.at(0).at(0)<<",";
    cout<<vector_2d.at(0).at(1)<<","<<endl;
    cout<<vector_2d.at(1).at(0)<<",";
    cout<<vector_2d.at(1).at(1)<<endl;

    cout<<"\nVector_1 after changing are: ";
    cout<<vector_1.at(0)<<",";
    cout<<vector_1.at(1)<<endl;
    
   

    return 0;
}