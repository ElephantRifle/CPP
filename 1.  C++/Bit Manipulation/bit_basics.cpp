#include<iostream>
using namespace std;


//We have to find the bit at the given postion
int getbit(int n, int pos){
    return (n &(1 << pos)!= 0);
}
//We have to place 1 at the given position
int setbit(int n, int pos){
    return (n | (1 << pos));
}
//We have to clear or make the bit at the given position zero
int clearbit(int n, int pos){
    int mask = ~(1 << pos);
    return n & mask;
}
//We have to update the bit at the given postion either by 1 or 0(update = clearbit & setbit)
int updatebit(int n, int pos, int value){
    int mask = ~(1 << pos);
    // return ((n & mask) & (n | (value << pos)));
    n = n & mask;
    return (n | (value << pos));
}
int main(){
    cout<<getbit(5,2)<<endl;
    // cout<<setbit(5,1)<<endl;
    //cout<<clearbit(10,1)<<endl;
    // cout<<updatebit(5,1,1)<<endl;

    return 0;
}



