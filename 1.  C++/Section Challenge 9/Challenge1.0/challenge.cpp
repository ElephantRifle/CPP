// #include<iostream>
// #include<vector>
// #include<numeric>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int>numbers{};
//     char choice{};
//     int items{};
    
    
//     do{
//         cout<<"\nP- Print numbers"<<endl;
//         cout<<"M- Add a number"<<endl;
//         cout<<"A- Find the Mean"<<endl;
//         cout<<"S- Display the smallest number"<<endl;
//         cout<<"L- Display the largest number"<<endl;
//         cout<<"Q- Quit"<<endl;

//         cout<<"\nEnter your choice: ";
//         cin>>choice;

//         if(choice =='m' || choice =='M'){
//             cout<<"Enter the integer to add to the list: ";
//             cout<<" add->";
//             cin>>items;
//             numbers.push_back(items);
            
//         }else if(choice == 'p' || choice == 'P'){
//             if(numbers.empty())
//               cout<<"[ ]- the list is empty."<<endl; 
//             else
//                for(int i{0};i<numbers.size();i++)
//                     cout<<numbers.at(i);

//         }else if(choice == 'a' || choice == 'A'){
//             double mean{};
//             int sum{};
//             if(numbers.empty())
//               cout<<"No Values to calculate."<<endl;
//             else{
//               sum=accumulate(numbers.begin(),numbers.end(),0);
//               mean=sum/numbers.size();
//               cout<<"The Mean is: "<<mean<<endl;  
//             }   
//         }else if(choice == 's' || choice == 'S'){
//           cout<<"Minimum number: ";
//           int min{};
          
//         }

//     }while(choice!='q' && choice!='Q');
      
//     return 0;
// }


#include<iostream>
#include<vector>
using namespace std;
int main(){
    char selection{};
    vector<int>list{};
    do{
        cout<<"\nP-Print the number"<<endl;
        cout<<"A-Add a number"<<endl;
        cout<<"C-Clear the list "<<endl;
        cout<<"M-Display Mean of all the number"<<endl;
        cout<<"S-Display the smallest number"<<endl;
        cout<<"L-Display the largest number"<<endl;
        cout<<"Q-Quit"<<endl;

        cout<<"\nEnter your Choice: ";
        cin>>selection;

        if(selection =='P' || selection =='p'){
            if(list.size()==0)
                cout<<"[]-List is empty."<<endl;
            else{
                cout<<"[";
                for(auto num:list)
                   cout<<num<<"  ";
                cout<<"]";   
            } 

        }else if(selection =='A' || selection =='a'){
            int add_number{};
            cout<<"Add a number:-> ";
            cin>>add_number;

            bool is_dublicate{false};
            for(auto num:list)
            {
              if(num==add_number)
                is_dublicate=true;
                break;
            }
            if(!is_dublicate){
              list.push_back(add_number);
              cout<<"Added -> "<<add_number<<endl;
            }else{
                cout<<"Dublicate numbers are not allowed."<<endl;
            }        
            

            
        }else if(selection == 'c' || selection == 'C'){
            if(list.size()==0)
              cout<<"[]-List is empty."<<endl;
            else{
                list.clear();
                cout<<"List is cleared and empty."<<endl;
            }  

        }else if(selection =='M' || selection =='m'){
            if(list.size()==0)
              cout<<"[]-List is empty."<<endl;
            else{
                double total{};
                for(auto avg:list)
                   total+=avg;

                cout<<"The Mean is: "<<(total/list.size());
                cout<<endl;   
            }  

        }else if(selection == 's' || selection == 'S'){
            if(list.size()==0)
              cout<<"[]-List is empty."<<endl;
            else{
                int smallest{list.at(0)};
                for(auto num:list)
                  if(num<smallest)
                    smallest=num;

                cout<<"Smallest number is: "<<smallest<<endl;    
            }

        }else if(selection == 'l' || selection == 'L'){
            if(list.size()==0)
              cout<<"[]-List is empty."<<endl;
            else{
                int largest{list.at(0)};
                for(auto num:list)
                 if(num>largest)
                   largest=num;

                cout<<"Largest number is: "<<largest<<endl;    
            }   

        }else if(selection =='q' || selection =='Q'){
            cout<<"Goodbye!"<<endl;
            break;    
        }else{
            cout<<"\n============================="<<endl;
            cout<<"Unknown selection,try again.."<<endl;
            cout<<"============================="<<endl;
        }

    } while (selection!='Q' && selection!='q');
    
}