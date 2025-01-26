#include<iostream>
using namespace std;
int main(){
    int score{};
    cout<<"Enter your score on the exam : ";
    cin>>score;

    char letter_grade{};

    if(score>=0 && score<=100){
        if(score>=90)
          letter_grade='A';
        else if(score>=80)
          letter_grade='B';
        else if(score>=70)
          letter_grade='C';
        else if(score>=60)
          letter_grade='D';
        else
          letter_grade='F';

        cout<<"Your Grade is: "<<letter_grade<<endl;  
        if(letter_grade=='F')
          cout<<"Your Failed.Try again";
        else
          cout<<"You Passed.Congrats!" ; 
        
    }else{
        cout<<"Enter a valid score between(0-100).";
    }
}
 
