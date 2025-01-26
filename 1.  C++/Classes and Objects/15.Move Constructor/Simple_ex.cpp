#include<iostream>
using std::endl;
using std::cout;
using std::cin;

class test{
    int *data{};

    public:
    //Get Method 
    int get_data(){return *data;}

    //Set Method
    void set_data(int source){*data = source;}

    //Constructor
    test(int source){};
    
    //Deep copy Ctor
    test(const test &source);

    //Move Constructor
    test(test &&source);    //(test &&) tells compiler that ctor accepts R-Value ref to an object of type test

    //Deconstructor
    ~test();
}



//Constructor Def
test::test(int source){
    data = new int;
    *data = source;
}

//Deep copy ctor
test::test(const test &source){
    int 
}

//Move Constructor Def
test::test(test &&source)except{
    data = source.data;
    source.data = nullptr;
    cout<<"Move constructor called."<<endl;
}

int main(){



    return 0;
}