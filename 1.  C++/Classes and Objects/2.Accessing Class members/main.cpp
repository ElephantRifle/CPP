// #include<iostream>
// #include<string>
// #include<vector>
// using namespace std;

// class Player{
//     public:
//     string name;            //Attribute
//     int xp;                 //Attribute
//     int health;             //Attribute
    
//     //Methods
//     void talk(string text_to_say){cout<<name<<" says "<<text_to_say<<endl;}  
//     bool is_dead();       

// };
// class Account{
//     public:
//     //Attributes , we can initialize these attributes in c++
//     string name;
//     double balance;

//     //Methods
//     void deposit(double bal){balance+=bal;cout<<"In deposit"<<endl;};  
//     void withdraw(double bal){balance-=bal;cout<<"In Withdraw"<<endl;};
// };

// int main(){
//     Account franks_account;
//     franks_account.name="Franks_account";
//     franks_account.balance=5000;
//     franks_account.deposit(1000.0);
//     franks_account.withdraw(200);



//     Player frank{};
//     frank.name="Frank";
//     frank.xp=70;
//     frank.health=100;
//     frank.talk("Hello");/*when we call talk method from frank object these 
//     attributes(player attributes) are available  to that method*/

//     Player *enemy=new Player;//if we de-refference the pointer we get the object 
//     (*enemy).name="Enemy";
//     (*enemy).xp=15;
//     enemy->health=100;
//     enemy->talk("I will destroy you!");

//     delete enemy;

//     return 0;
// }






#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Player{
    public:
    //Attributes
    //We can initialize these attributes in c++
    string name{"Player"};
    int health{75};
    int xp{3};

    //Methods or member function
    void talk(string text_to_say){
        cout<<name<<" says "<<text_to_say<<endl;
    };
    bool is_dead();

};
class Account{
    public:
    //Attributes
    //We can initialize these attributes in c++
    string name{"Account"};
    double balance{0.0};

    //Methods
    bool deposit(double bal){balance += bal; cout<<"In deposit";};
    bool withdraw(double bal){balance -= bal; cout<<"In withdraw";};

};
int main(){
    Account franks_acc{};
    franks_acc.name = "Frank";
    franks_acc.balance = 5000;
    franks_acc.deposit(10000);
    franks_acc.withdraw(2450);

    Account jims_acc{};
    jims_acc.name = "Jim";
    jims_acc.balance = 1500;
    jims_acc.deposit(25000);
    jims_acc.withdraw(20000);


    Player frank{};
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 234;
    frank.talk("Hello there");

    Player *enemy = new Player;
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy->xp = 0;

    enemy->talk("I will destroy you!");

    // Account franks_account{};
    // Account Jims_account{};

    // Player frank{};
    // Player hero{};

    // Player playes[]{frank,hero};

    // vector<Player>player_vec{frank};
    // player_vec.push_back(hero);

    // Player *enemy {nullptr};
    // enemy = new Player;

    // delete enemy;



    return 0;
}