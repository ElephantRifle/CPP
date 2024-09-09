#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::string;
using std::endl;

class Player{
    string name{};
    int xp{};
    int health{};

    public:
    //Default Constructor Parameter
    Player(string name_val = "Empty",int xp_val = 999,int health_val = 99);

    void display()const{
        cout<<"Name: "<<name<<" Xp: "<<xp<<" Health: "<<health<<endl;
    }

};
  //Overloaded Constructor with three default parameters
  Player::Player(string name_val,int xp_val,int health_val)
   :name{name_val},xp{xp_val},health{health_val}{
    cout<<"Three-args constructor called. "<<'\n';
}

int main(){
    
    Player empty;
    Player Frank("Frank");
    Player hero("OAA",10);
    Player Hosea("Hosea",120,100);
  
    return 0;
}
