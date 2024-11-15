#include<iostream>
#include<vector>

using std::vector;
using std::endl;
using std::cout;
using std::cin;

class Move{
    private:
    int *data{};


    public:
    //Method to SET VALUE and GET VALUE
    void set_data(int d){*data = d;}
    int get_value(){return *data;}

    //Constructor
    Move(int d);

    //Copy Constructor
    Move(const Move &source);

    //Move Constructor
    Move(Move &&source)noexcept;

    //Destructor
    ~Move();
};
//Constructor
Move::Move(int d){
    data = new int;
    *data = d;
    cout<<"Constructor for: "<<d<<endl;
}


//Deep copy constructor
Move::Move(const Move &source)     
    :Move{*source.data}{
        cout<<"Copy Constructor - deep copy for: "<<*data<<endl;
}

//Move Constructor(this will eliminate the need of copy constructor )
Move::Move(Move &&source) noexcept
      :data{source.data}{
        source.data = nullptr;
        cout<<"Move constructor-Moved resource: "<<*data<<endl;
}

Move::~Move(){
    if(data != nullptr){
        cout<<"Destructor freeing data for: "<<*data<<endl; 
    }else{
        cout<<"Destructor freeing data of nullptr"<<endl;
    }
    delete data;
}


int main(){
    vector<Move> vec;
    vec.push_back(Move{10});
    vec.push_back(Move{20});
    vec.push_back(Move{30});
    vec.push_back(Move{40});
    vec.push_back(Move{50});
    vec.push_back(Move{60});
    vec.push_back(Move{70});
    vec.push_back(Move{80});

    return 0;
}