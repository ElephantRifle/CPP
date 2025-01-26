#include<iostream>

using std::cout;
using std::cin;
using std::endl;

class Player{
    //Attributers
    public:
    double health{};
    double xp{};

    // No copy constructor provided, so the compiler will generate one
    
    Player(double a,double b):health{a},xp{b}{}
};

int main(){
    Player obj_1{1000,199};
    
    // Default copy constructor is invoked here
    Player obj_2 = obj_1;// obj_2 will be a copy of obj_1

    //Lets see the values
    cout<<"Obj1: "<<obj_1.health <<"  Obj1: "<<obj_1.xp<<"\n";
    cout<<"Obj2: "<<obj_2.health <<"  Obj2: "<<obj_2.xp<<"\n";

    return 0;
}


//SAME SAME BUT DIFFERENT (without making class attributes public)

// #include<iostream>

// using std::cout;
// using std::cin;
// using std::endl;

// class Player{
//     //Attributes
//     double health{};
//     double xp{};

//     public:
//     double get_health();
//     double get_xp();
    
//     Player(double a,double b):health{a},xp{b}{}
// };
// double Player:: get_health(){
//     return health;
// }
// double Player::get_xp(){
//     return xp;
// }

// int main(){
//     Player obj_1{1000,199};

//     Player obj_2 = obj_1;

//     cout<<"Obj1: "<<obj_1.get_xp() <<"  Obj1: "<<obj_1.get_health()<<"\n";
//     cout<<"Obj2: "<<obj_2.get_xp() <<"  Obj2: "<<obj_2.get_health()<<"\n";

//     return 0;
// }