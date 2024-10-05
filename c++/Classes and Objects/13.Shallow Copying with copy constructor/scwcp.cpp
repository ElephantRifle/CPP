#include<iostream>
#include<string>
using std::cout;
using std::string;
using std::endl;

class shallow{
    private:
    int *data;

    public:
    void set_value(int d){
        *data = d;
    }
    int get_value(){
        return *data;
    }

    //Constructor
    shallow(int d);
    //Copy Constructor
    shallow(const shallow &source);
    //Destructor
    ~shallow();
};
//Constructor Definition
shallow::shallow(int d){
    data = new int;
    *data = d;
}
//Copy Constructor Definition
shallow::shallow(const shallow &source)
  :data(source.data){
    cout<<"Copy constructor - shallow copy"<<endl;
}
//Destructor Definition
shallow::~shallow(){
    delete data;
    cout<<"Destructor freeing data."<<endl;
}
void display_shallow(shallow s){
    cout<<s.get_value()<<endl;
}

int main(){
    shallow obj1{100};
    
    display_shallow(obj1);

    shallow obj2{obj1};
    obj2.set_value(1000);


    return 0;
}
