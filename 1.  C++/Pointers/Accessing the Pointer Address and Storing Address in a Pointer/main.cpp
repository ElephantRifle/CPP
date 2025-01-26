#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int num{10};
    cout<<"\nValue of num : "<<num<<endl;
    cout<<"Size of num: "<<sizeof(num)<<endl;
    cout<<"Address of num: "<<&num<<endl;
    int *p;

    cout<<"\nValue of p: "<<p<<endl;
    cout<<"Size of p: "<<sizeof(p)<<endl;
    cout<<"Address of p: "<<&p<<endl;

    p=nullptr;

    cout<<"\nValue of p: "<<p<<endl;

    int *p1{nullptr};
    double *p2{nullptr};
    unsigned long long *p3{nullptr};
    string *p4{nullptr};
    vector<string> *p5{nullptr};

    cout<<"\nSize of p1: "<<sizeof(p1)<<endl;
    cout<<"Size of p2: "<<sizeof(p2)<<endl;
    cout<<"Size of p3: "<<sizeof(p3)<<endl;
    cout<<"Size of p4: "<<sizeof(p4)<<endl;
    cout<<"Size of p5: "<<sizeof(p5)<<endl;

    int score{10};
    double temp{100.7};

    int *score_ptr{nullptr};

    score_ptr=&score;

    cout<<"\nValue of score: "<<score<<endl;
    cout<<"Address of score: "<<&score<<endl;
    cout<<"Address of score_ptr: "<<score_ptr<<endl;

    // score_ptr=&temp;//Compiler error

    cout<<"\nValue of score_ptr: "<<score_ptr<<endl;



    return 0;
}