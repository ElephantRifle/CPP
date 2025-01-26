// #include<iostream>
// #include<vector>
// using namespace std;

// void display_menu()
// {
//     cout<<"\nP-Print the number"<<endl;
//     cout<<"A-Add a number"<<endl;
//     cout<<"C-Clear the list "<<endl;
//     cout<<"M-Display Mean of all the number"<<endl;
//     cout<<"S-Display the smallest number"<<endl;
//     cout<<"L-Display the largest number"<<endl;
//     cout<<"Q-Quit"<<endl;
// }

// void selectPrint(vector<int>&list)
// {
//     if(list.size()==0)
//        cout<<"[]-List is empty."<<endl;
//     else{
//         cout<<"[";
//         for(auto num :list)
//         cout<<num<<"  ";
//         cout<<"]";   
//         } 
// }

// void selectAdd(vector<int>&list)
// {
//     int add_number{};
//     cout<<"Add a number:-> ";
//     cin>>add_number;

//     bool is_dublicate{false};
//     for(auto num:list)
//     {
//         if(num==add_number){
//           is_dublicate=true;
//           break;
//         }  
//     }
//     if(!is_dublicate){
//         list.push_back(add_number);
//         cout<<"Added -> "<<add_number<<endl;
//         }else{
//             cout<<"Dublicate numbers are not allowed."<<endl;
//     }  
// }

// void selectClear(vector<int>&list)
// {
//     if(list.size()==0)
//         cout<<"[]-List is empty."<<endl;
//     else{
//         list.clear();
//         cout<<"List is cleared and empty."<<endl;
//         }  
// }

// void selectMean(vector<int>&list)
// {
//     if(list.size()==0)
//       cout<<"[]-List is empty."<<endl;
//     else{
//         double total{};
//         for(auto avg:list)
//           total+=avg;

//         cout<<"The Mean is: "<<(total/list.size());  
//         cout<<endl;
//     }  
// }

// void selectSmall(vector<int>&list)
// {
//     if(list.size()==0)
//       cout<<"[]-List is empty."<<endl;
//     else{
//         int smallest{list.at(0)};
//         for(auto num:list)
//         if(num<smallest)
//           smallest=num;

//         cout<<"Smallest number is: "<<smallest<<endl;  
            
//     }  
// }

// void selectLarge(vector<int>&list)
// {
//     if(list.size() == 0)
//       cout<<"[]-List is empty."<<endl;
//     else{
//         int largest{list.at(0)};
//         for(auto num:list)
//           if(num>largest)
//             largest=num;

//         cout<<"Largest number is: "<<largest<<endl;    
//     }  
// }

// void selectQuit()
// {
//     cout<<"Goodbye!"<<endl;
// }


// int main(){
//     vector<int>list{};
//     char selection{};
//     do{
//         display_menu();
//         cout<<"\nEnter your Choice: ";
//         cin>>selection;

//         if(selection =='P' || selection =='p'){
//             selectPrint(list);

//         }else if(selection =='A' || selection =='a'){
//             selectAdd(list);

//         }else if(selection == 'C' || selection == 'c'){
//             selectClear(list);

//         }else if(selection == 'M' || selection == 'm'){
//             selectMean(list);

//         }else if(selection == 'S' || selection == 's'){
//             selectSmall(list);

//         }else if(selection == 'L' || selection == 'l'){
//             selectLarge(list);

//         }else if(selection == 'Q' || selection == 'q'){
//             selectQuit();
//             break;

//         }else{
//             cout<<"\n============================="<<endl;
//             cout<<"Unknown selection,try again.."<<endl;
//             cout<<"============================="<<endl;
//         }              

//     }while(selection !='q' || selection !='Q');


//     return 0;
// }

// // cout<<"---------------------------------------------------------"<<endl;

// #include<iostream>
// #include<vector>
// #include<cctype>
// using namespace std;

// void display_menu()
// {
//     cout<<"\nP-Print the number"<<endl;
//     cout<<"A-Add a number"<<endl;
//     cout<<"C-Clear the list "<<endl;
//     cout<<"M-Display Mean of all the number"<<endl;
//     cout<<"S-Display the smallest number"<<endl;
//     cout<<"L-Display the largest number"<<endl;
//     cout<<"Q-Quit"<<endl;
//     cout<<"\nEnter your Choice: ";
// }

// void selectPrint(vector<int>&list)
// {
//     if(list.size()==0)
//        cout<<"[]-List is empty."<<endl;
//     else{
//         cout<<"[";
//         for(auto num :list)
//         cout<<num<<"  ";
//         cout<<"]";   
//         } 
// }

// void selectAdd(vector<int>&list)
// {
//     int add_number{};
//     cout<<"Add a number:-> ";
//     cin>>add_number;

//     bool is_dublicate{false};
//     for(auto num:list)
//     {
//         if(num==add_number){
//           is_dublicate=true;
//           break;
//         }
//     }
//     if(!is_dublicate){
//         list.push_back(add_number);
//         cout<<"Added -> "<<add_number<<endl;
//         }else{
//             cout<<"Dublicate numbers are not allowed."<<endl;
//     }  
// }

// void selectClear(vector<int>&list)
// {
//     if(list.size()==0)
//         cout<<"[]-List is empty."<<endl;
//     else{
//         list.clear();
//         cout<<"List is cleared and empty."<<endl;
//         }  
// }

// void selectMean(vector<int>&list)
// {
//     if(list.size()==0)
//       cout<<"[]-List is empty."<<endl;
//     else{
//         double total{};
//         for(auto avg:list)
//           total+=avg;

//         cout<<"The Mean is: "<<(total/list.size());  
//         cout<<endl;
//     }  
// }

// void selectSmall(vector<int>&list)
// {
//     if(list.size()==0)
//       cout<<"[]-List is empty."<<endl;
//     else{
//         int smallest{list.at(0)};
//         for(auto num:list)
//         if(num<smallest)
//           smallest=num;

//         cout<<"Smallest number is: "<<smallest<<endl;  
            
//     }  
// }

// void selectLarge(vector<int>&list)
// {
//     if(list.size() == 0)
//       cout<<"[]-List is empty."<<endl;
//     else{
//         int largest{list.at(0)};
//         for(auto num:list)
//           if(num>largest)
//             largest=num;

//         cout<<"Largest number is: "<<largest<<endl;    
//     }  
// }

// void selectQuit()
// {
//     cout<<"Goodbye!"<<endl;
// }

// char get_selection()
// {
//     char selection{};
//     cin>>selection;
//     return toupper(selection);
// }

// void handleunknown()
// {
//     cout<<"\n============================="<<endl;
//     cout<<"Unknown selection,try again.."<<endl;
//     cout<<"============================="<<endl;
// }



// int main(){
//     vector<int>list{};
//     char selection{};
//     do{
//         display_menu();
//         selection=get_selection();

//         switch(selection){
//             case 'P':
//             selectPrint(list);
//             break;

//             case 'A':
//             selectAdd(list);
//             break;

//             case 'C':
//             selectClear(list);
//             break;

//             case 'M':
//             selectMean(list);
//             break;

//             case 'S':
//             selectSmall(list);
//             break;

//             case 'L':
//             selectLarge(list);
//             break;

//             case 'Q':
//             selectQuit();
//             break;

//             default:
//             handleunknown();
//         }
                   
//     }while(selection !='q' || selection !='Q');


//     return 0;
// }

// // cout<<"---------------------------------------------------------"<<endl;

#include<iostream>
#include<vector>
#include<cctype>//The C++ <cctype> header file declares a set of functions to classify (and transform) individual characters. For example, isupper() checks whether a character is uppercase or not.
using namespace std;

void display_menu();   
void selectPrint(vector<int>&list);
void selectAdd(vector<int>&list);
void selectClear(vector<int>&list);
void const selectMean(vector<int>&list);
void selectSmall(vector<int>&list);
void selectLarge(vector<int>&list);
void display_list(vector<int>&list);
double calculate_mean(vector<int>&list);
double smallest_number(vector<int>&list);
double largest_number(vector<int>&list);
void addNumberIfNotDuplicate(vector<int>&list,int &add_number);
void selectQuit();
char get_selection();
void handleunknown();


void display_menu()
{
    cout<<"\nP-Print the number"<<endl;
    cout<<"A-Add a number"<<endl;
    cout<<"C-Clear the list "<<endl;
    cout<<"M-Display Mean of all the number"<<endl;
    cout<<"S-Display the smallest number"<<endl;
    cout<<"L-Display the largest number"<<endl;
    cout<<"Q-Quit"<<endl;
    cout<<"\nEnter your Choice: ";
}

void selectPrint(vector<int>&list)//To Display List and check for empty list
{
    if(list.size()==0)
       cout<<"[]-List is empty."<<endl;
    else
      display_list(list);
}

void selectAdd(vector<int>&list)//To Add numbers
{
    int add_number{};
    cout<<"Add a number:-> ";
    cin>>add_number;

    addNumberIfNotDuplicate(list,add_number);
}

void selectClear(vector<int>&list)//To Clear the List
{
    if(list.size()==0)
        cout<<"[]-List is empty."<<endl;
    else{
        list.clear();
        cout<<"List is cleared and empty."<<endl;
        }  
}

void const selectMean(vector<int>&list)//To Find Mean of the List
{
    if(list.size()==0)
      cout<<"[]-List is empty."<<endl;
    else
       cout<<"The Mean is: "<<calculate_mean(list);
}

void selectSmall(vector<int>&list)//To Find Smallest Number
{
    if(list.size()==0)
      cout<<"[]-List is empty."<<endl;
    else
      cout<<"Smallest number is: "<<smallest_number(list);
      

}

void selectLarge(vector<int>&list)//To Find Largest Number
{
    if(list.size() == 0)
      cout<<"[]-List is empty."<<endl;
    else
        cout<<"Largest number is: "<<largest_number(list)<<endl;    
     
}

void selectQuit()//To Exit the Loop
{
    cout<<"Goodbye!"<<endl;
}

char get_selection()//To take Input and forward it as upper case
{
    char selection{};
    cin>>selection;
    return toupper(selection);
}

void handleunknown()//To handle unknown value
{
    cout<<"\n============================="<<endl;
    cout<<"Unknown selection,try again.."<<endl;
    cout<<"============================="<<endl;
}

void display_list(vector<int>&list)//To display list
{
       cout<<"[";
        for(auto num :list)
        cout<<num<<"  ";
        cout<<"]"; 
}

double calculate_mean(vector<int>&list)
{
    double total{};
    for(auto avg:list)
       total+=avg;
       
    return total/list.size();  
}

double smallest_number(vector<int>&list)
{
    int smallest{list.at(0)};
    for(auto num:list)
    if(num<smallest)
        smallest=num;
    return smallest;         
}

double largest_number(vector<int>&list)
{
    int largest{list.at(0)};
    for(auto num:list)
    if(num>largest)
      largest=num;
    return largest;  
}

void addNumberIfNotDuplicate(vector<int>&list,int &add_number)
{
    bool is_dublicate{false};
    for(auto num:list)
    {
        if(num==add_number){
          is_dublicate=true;
          break;
        }  
    }
    if(!is_dublicate){
        list.push_back(add_number);
        cout<<"Added -> "<<add_number<<endl;
        }else{
            cout<<"Dublicate numbers are not allowed."<<endl;
    }  
}

int main(){
    vector<int>list{};
    char selection{};
    do{
        display_menu();
        selection=get_selection();

        switch(selection){
            case 'P':
            selectPrint(list);
            break;

            case 'A':
            selectAdd(list);
            break;

            case 'C':
            selectClear(list);
            break;

            case 'M':
            selectMean(list);
            break;

            case 'S':
            selectSmall(list);
            break;

            case 'L':
            selectLarge(list);
            break;

            case 'Q':
            selectQuit();
            break;

            default:
            handleunknown();
        }
                   
    }while(selection !='Q');


    return 0;
}