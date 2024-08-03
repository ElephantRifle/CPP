//use breakpoint to run in debugger
#include<iostream>
#include<string>
using namespace std;

class Player{
    private:
    //Attributes
    string name{"Player"};
    int health;
    int xp;

    public:
    //Methods
    void talk(string text_to_say){cout<<name<<text_to_say<<endl;};
    bool is_dead();
};
int main(){
    Player frank;
    //Compiler errors! these attributes are private
    // frank.name="HEllo";
    // frank.health=100;
    frank.talk("says Hello");//It will run as we are accessing public method
    

    return 0;
}