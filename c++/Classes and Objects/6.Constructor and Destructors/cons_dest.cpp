//Debug this code to find how constructor and destructor works
#include<iostream>
#include<string>
using namespace std;

class Player{
    //Attributes
    private:
    string name{};
    int health{};
    int xp{};

    //Method or Function
    public:
    void set_name(string name_val){
        name = name_val;
    }
    //Constructor
    Player(){
        cout<<"No args constructor called."<<endl;
    }
    Player(string name){
        cout<<"String args constructor called"<<endl;
    }
    Player(string name,int health,int xp){
        cout<<"Three args called. "<<endl;
    }
    Player(int health){
        cout<<" One args called."<<endl;
    }

    //Destructor
    ~Player(){
        cout<<"Destructor called for "<<name<<endl;
    }
};
int main(){
    {
        Player slayer;
        slayer.set_name("Slayer");
    }
    {
        Player frank;
        frank.set_name("Frank");    
        Player enemy;
        enemy.set_name("Enemy");
        Player hero("Hero",100,13);
        hero.set_name("Hero");
    }
    
    Player *enemy = new Player;
    enemy->set_name("OLaa");
    
    
    Player *level_boss = new Player("Boss",100,0);
    level_boss->set_name("Boss");
    
    delete enemy;
    delete level_boss;

    return 0;
}