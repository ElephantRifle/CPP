#include <iostream>
using namespace std;
// int main(){
//     int num1{10};//Initialization
//     int num2{20};//Initialization

//     num1=1000;
//     cout<<"Num1: "<<num1<<endl;
//     cout<<"Num2: "<<num2<<endl;

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int num1{10};
    int num2{20};

    num1 = num2 = 1000;

    cout << "Num1: " << num1 << endl;
    cout << "Num2: " << num2 << endl;

    return 0;
}