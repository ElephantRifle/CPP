#include<iostream>
using std::cout;
using std::cin;
using std::endl;

class Deep{
    int *data{};

    public:

    //Set value Method
    void set_data(int d){*data = d;}
    //Return Value Method
    int get_data(){return *data;}

    //Constructor
    Deep(int d);

    //Copy Constructor
    Deep(const Deep& source);

    //Destructor
    ~Deep();


};
//Constructor
Deep::Deep(int d){
    data = new int;
    *data = d;
}

//Copy Constructor(Deep Copy)
/*We can use delegating constructor as Regular cons is doing the same thing as copy 
cons(assigning new space in heap)*/
Deep::Deep(const Deep& source)
    //Deep{*source};               //Constr delegation with constr initialization
{
    data = new int;
    *data = *source.data;
    cout<<"Copy Constructor Deep Copy."<<endl;   
}

//Destructor
Deep::~Deep(){
    delete data;   //Free Allocated Memory
    cout<<"Destructor freeing data. "<<endl;
}

//Funtion 
void display_deep(Deep s){
    s.get_data();
}

int main(){
    Deep obj1{100};     
    display_deep(obj1);

    Deep obj2{obj1};
    obj2.set_data(1000);

    return 0;
}
