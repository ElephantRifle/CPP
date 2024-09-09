#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::endl;
using std::string;

class Player{

    string name{};
    int health{};
    int xp{};

    public:
    string get_name(){return name;}
    int get_health(){return health;}
    int get_xp(){return xp;}

    // constructor with default values for its parameters
    Player(string name_val="None",int health_val=999,int xp_val=9999);

    //Copy Constructor Prototype
    Player(const &source);

};
//Constructor declared outside the class
Player::Player(string name_val,int health_val,int xp_val)
    :name{name_val},health{health_val},xp{xp_val}{
}

//Copy Constructor Definition
Player::Player(const &source)
    :name(source.name),health(source.health),xp(source.xp){
        cout<<"Copy Constructor - made copy of "<<source.name<<endl;
}

int main(){
    Player empty{};
    Player tom{"Hello"};
    

    return 0;
}