#include<iostream>
#include<string>
using std::cout;
using std::string;
using std::endl;

class Player{
    //Attributes
    string name{};
    int health{};
    int xp{};

    //Overloading Constructors
    public:
    Player();
    Player(string name_val);
    Player(string name_val,int health_val,int xp_val);

};
    // Player::Player(){
    //     name = "Empty";
    //     health = 0;
    //     xp = 0;
    // }
    // Player::Player(string name_val){
    //     name = name_val;
    //     health = 0;
    //     xp = 0;
    // }
    // Player::Player(string name_val,int health_val,int xp_val){
    //     name = name_val;
    //     health = health_val;
    //     xp = xp_val;
    // }
    Player::Player()
        :Player{"Empty",0,0}{
            cout<<"No args Consructor."<<'\n';
        }
    Player::Player(string name_str)
        :Player{name_str,0,0}{
            cout<<"One-args Constructor."<<'\n';
        }
    Player::Player(string name_str,int health_str,int xp_str)
        :name{name_str},health{health_str},xp{xp_str}{
        //:Player{name_str,health_str,xp_str} // this will not work as there are no thre args constructor to be called execept this one
            cout<<"All args-Constuctor."<<endl;
        }    

int main(){
    Player empty;
    Player Frank{"Frank"};
    Player Mojo{"Mojo",12,19};

    return 0;
}