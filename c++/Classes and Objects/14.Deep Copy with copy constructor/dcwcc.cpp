#include<iostream>
using std::cout;
using std::cin;
using std::endl;

class Deep{
    int *data{};

    public:
    //Methods
    void set_data(int d){*data = d;}
    int get_data(){return *data;}

    //Constructor
    Deep(int d){};
    //Copy Constructor
    Deep(const Deep& source);
    //Destructor
    ~Deep(){};


};
//Constructor
Deep::Deep(int d){
    data = new int;
    *data = d;
}
//Copy Constructor
Deep::Deep(const Deep& source){
    data = new int;
    *data = *source.data;
    cout<<""<<endl;   
}
//Destructor
Deep::~Deep(){
    delete data;
    cout<<"Destructor freeing data. "<<endl;
}
//Funtion 
void display_deep(Deep s){
    s.get_data();
}

int main(){
    Deep obj1{100};
    display_deep(obj1);

    obj1.set_data(1000);
    Deep obj2{obj1};

    return 0;
}