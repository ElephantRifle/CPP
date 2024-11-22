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
    //Getter function
    string get_name()const{return name;}
    int get_health()const{return health;}
    int get_xp()const{return xp;}

    // constructor with default values for its parameters
    Player(string name_val="None",int health_val=999,int xp_val=9999);

    //Copy Constructor Prototype
    Player(const Player &source);

    //Destructor
    ~Player(){
        cout<<"Destuctor called for "<<name<<endl;
    }

};
//Constructor declared outside the class
Player::Player(string name_val,int health_val,int xp_val)
    :name{name_val},health{health_val},xp{xp_val}{
}

//Copy Constructor Definition with Player as a return type
Player::Player(const Player &source)
    // :name(source.name),health(source.health),xp(source.xp){
    :Player{source.name,source.xp,source.health}{
        cout<<"Copy Constructor - made copy of "<<source.name<<endl;
}
/*When an object is created inside a function (either as a local variable or as a 
parameter passed by value), it will go out of scope when the function ends. This 
causes its destructor to be called before any other objects that are still in 
scope outside the function.to avoid this extra destructor and to avoid a extra copy
of empty use pass by pointers pointer or pass by reference and try to use const */
//Function
void display_player(const Player &p){ //destructor will be called first for this remove & to see what is am saying
    cout<<"Name: "<<p.get_name()<<endl;
    cout<<"Health: "<<p.get_health()<<endl;
    cout<<"Xp: "<<p.get_xp()<<endl;
}

int main(){
    
    Player empty{"Mojo",120,100};

    Player empty_two(empty);

    display_player(empty);

    Player tom{"Hello"};

    return 0;
}