/*Use if to specify a block of code to be executed, if a specified condition
 is true. Use else to specify a block of code to be executed, if the same 
 condition is false. Use else if to specify a new condition to test, if the 
 first condition is false. Use switch to specify many alternative blocks of code 
 to be executed.*/

 #include<iostream>
 using namespace std;
 int main(){

    char letter_grade{};
    cout<<"Enter the letter grade you expect in exam: ";
    cin>>letter_grade;

    switch(letter_grade){

    case 'a':
    case 'A':
      cout<<"You need 90 or above."<<endl;
      break; 

    case 'b':
    case 'B':
      cout<<"You need 80-89 for B."<<endl;
      break;

    case 'c':
    case 'C':
      cout<<"You need 70-79 for C."<<endl;
      break;

    case 'd':
    case 'D':
      cout<<"Your need 60-69 for D."<<endl;
      break;

    case 'f':
    case 'F':
      {
        char confirm{};
        cout<<"Are you sure(y/n)?"<<endl;
        cin>>confirm;

        if(confirm=='y' || confirm=='Y')
          cout<<"Ok you don't want to study."<<endl;

        else if(confirm== 'n' || confirm=='N')
          cout<<"Good,Go study."<<endl; 

        else
          cout<<"Illegal Choice."<<endl;  

         break; 
      }
     
    default:
      cout<<"Not a valid Grade."; 

    }
    return 0;
 }