#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Player{
    string name{"Player"};    //Attribute(data member),(instance variable)
    int xp{3};         //Attribute(data member),(instance variable)
    int health{100};     //Attribute(data member),(instance variable)

    /*Member functions are associated with that 
    class and operate on its data members.*/ 

    /*These methods are just prototyped we never called them
    OR we just declared these but didn't defined them.*/
    void talk(string);   //member function declaration(Method)
    bool is_dead();     //member function declaration(Method)

};
class Account{
    //Attributes , we can initialize these attributes in c++
    string name{"Account"};
    double balance{0.0};

    //Methods
    bool depost(double);
    bool withdraw(double);
};
int main(){
    Account frank_account{};
    Account jim_account{};

    Player frank{};  //Object(instance of class),(entity),(components) 
    Player hero{};   //Object(instance of class),(entity),(components)
    
    //once we have object we can use them as variables like int and double
    Player player[]{frank,hero};

    vector<Player>player_vec{frank};
    player_vec.push_back(hero);

    //We can also create objects on the HEAP 
    Player *enemy{nullptr};
    enemy=new Player;

    delete enemy;

    return 0;
}