#include<iostream>
#include<vector>
using  namespace std;
int main(){
    vector<int>numbers{};
    char selection{};
    
    do{
        cout<<"\nP-Print numbers "<<endl;
        cout<<"A-Add numbers."<<endl;
        cout<<"M-Display mean of the number."<<endl;
        cout<<"S-Display the smallest number."<<endl;
        cout<<"L-Display the largest number."<<endl;
        cout<<"Q-Quit"<<endl;
        cout<<"\nEnter your choice: ";
        cin>>selection;

        if(selection == 'p' || selection == 'P'){
            if(numbers.size()==0)
              cout<<"[]- List is empty."<<endl;
            else{
                cout<<"[";
                for(auto num:numbers)
                  cout<<num<<" ";
                cout<<"]";
            }  
        }else if(selection =='a' || selection== 'A'){
            int num_add{};
            cout<<"Enter number you want to add: ";
            cout<<"Add->";
            cin>>num_add;
            cout<<" Added->"<<num_add<<endl;
            numbers.push_back(num_add);
            
            
        }else if(selection == 'm'|| selection == 'M'){
            if(numbers.size()==0)
              cout<<"[]-List is empty."<<endl;
            else{
                int total{};
                for(auto num:numbers)
                  total+=num;

                cout<<"The Mean of list: "<<static_cast<double>(total)/numbers.size()<<endl;
            }  
            
        }else if(selection == 's' || selection == 'S'){
            if(numbers.size() == 0)
              cout<<"[]- List is empty."<<endl;

            else{
              int smallest=numbers.at(0);
              for(auto num:numbers)
                if(num<smallest)
                   smallest=num;
              
            cout<<"The Smallest is : "<<smallest<<endl;   
            }     
        }else if(selection == 'l' || selection == 'L'){
            if(numbers.size()==0)
              cout<<"[]- List is empty."<<endl;

            else{  
              int largest=numbers.at(0);
              for(auto num:numbers)
                if(num>largest)
                  largest=num;

              cout<<"The Largest is: "<<largest<<endl;    
            } 
        }else if(selection == 'q' || selection == 'Q'){
            cout<<"You quit.Goodbye.."<<endl;

        }else{
            cout<<"\n============================="<<endl;
            cout<<"Unknown selection,try again.."<<endl;
            cout<<"============================="<<endl;
        }


    }while(selection!='q' && selection!='Q');
}