#include<iostream>
using namespace std;
int main(){
    int small_rooms{};
    int large_rooms{};

    const double small_room_price{25};
    const double large_room_price{35};

    const double tax_rate{0.06};
    const double estimation{30};

    cout<<"Welcome to Cleaning service. "<<endl;

    cout<<"How many small rooms you want to be cleaned: ";
    cin>>small_rooms;
    cout<<"How many large rooms you want to be  cleaned: ";
    cin>>large_rooms;


    cout<<"Estimate for carpet cleaning is: "<<endl;
    cout<<"Number of Small rooms: "<<small_rooms<<endl;
    cout<<"Number of Large rooms: "<<large_rooms<<endl;


    cout<<"Price per small room: $"<<small_room_price<<endl;
    cout<<"Price per large room: $"<<large_room_price<<endl;   


    cout<<"Price: $"<<(small_rooms*small_room_price)+(large_rooms*large_room_price)
        <<endl;
        

    cout<<"Tax: $"<<(small_rooms*small_room_price*tax_rate)+(large_rooms*large_room_price*tax_rate)
        <<endl;

    cout<<"======================================================================"<<endl;

    cout<<"Total Estimation: $"<<(small_rooms*small_room_price)+(small_rooms*small_room_price*tax_rate)+
    (large_rooms*large_room_price)+(large_rooms*large_room_price*tax_rate)<<endl;

    cout<<"This Estimate is valid till: $"<<estimation<<endl;
    

    return 0;
}