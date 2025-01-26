#include<iostream>
using namespace std;
int main(){
    int n{};
    cout<<"Enter the levels you want: ";
    cin>>n;

    cout<<endl;

    for(int i{1};i<=n;i++)
    {
        for(int j{1};j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    } 

    cout<<endl;
    cout<<"============================================"<<endl;
    //It will work till n=5;
    // for(int i{1};i<=n;i++)
    // {
    //     for(int j{2};j<=(n-4)+i;j++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    cout<<endl;
    cout<<"============================================"<<endl;

    for(int i{1};i<=n;i++)
    {
        for(int j{1};j<=n-i+1;j++)
          {
            cout<<"* ";
          }
          cout<<endl;
    }

    cout<<endl;
    cout<<"============================================"<<endl;
    
    for(int i{1};i<=n;i++)
    {
        for(int j{i};j<=n;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<"============================================"<<endl;

    for(int i{1};i<=n;i++)
    {
        for(int j{1};j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<"============================================"<<endl;


   if(n<=0){
    cout<<"Invalid entry."<<endl;
   }
   for(int i{1};i<=(2*n-1);i++)
   {
    if(i<=(2*n)/2)
      for(int j{1};j<=i;j++)
      {
        cout<<"* ";
      }
    else
      for(int j{1};j<=2*n-i;j++)
      {
        cout<<"* ";
      }  
            
     cout<<endl;
   }

   cout<<endl;
   cout<<"============================================"<<endl;

   for(int i{1};i<=(2*n)-1;i++)
   {
    if(i<=(n)){

      for(int j{1};j<=i;j++)
      {
          cout<<"* ";
      }

    }else{
        for(int j{i};j<=(2*n)-1;j++)
        {
            cout<<"* ";
        }    
    }  
    cout<<endl;
   }

    cout<<endl;
    cout<<"==========================================="<<endl;


   for(int i{1};i<=(2*n)-1;i++)
   {
    if(i<=(2*n)/2){
        for(int k{n-i};k>=1;k--)
        {
            cout<<" ";
        }
        for(int j{1};j<=i;j++)
        {
            cout<<"* ";
        }

    }else{
        for(int k{1};k<=i-n;k++)
        {
            cout<<" ";
        }
        for(int j{i};j<=(2*n)-1;j++)
        {
            cout<<"* ";
        }    
    }  
    cout<<endl;
   }

   cout<<endl;
   cout<<"=========================================="<<endl;

   for(int i{1};i<=n;i++)
   {
    for(int k{n-i};k>=1;k--)
    {
        cout<<" ";
    }
    for(int j{i};j>=i;j--)
    {
        cout<<j<<" ";
    }
    for(int j{2};j<=i;j++)
    {
        cout<<j<<" ";
    }
    cout<<endl;
   }

   cout<<endl;
   cout<<"==========================================="<<endl;


   for(int i{1};i<=(2*n);i++)
   {
    if(i<=n){
        for(int k{n-2};k>=(n-i);k--)
        {
            cout<<" ";
        }
        for(int j{i};j<=(n);j++)
        {
            cout<<"* ";
        }
    }else{
        for(int k{n-1};k>=(i-n);k--)
        {
            cout<<" ";
        }
        for(int j{1};j<=(i-n);j++)
        {
            cout<<"* ";
        }
    }
    cout<<endl;
   }
   
   cout<<endl;
   cout<<"==========================================="<<endl;

   

for(int i{1};i<=n;i++)
{
    for(int k{1};k<=(n-i);k++)
    {
        cout<<" ";
    }
    for(int j{1};j<=i*2-1;j++)
    {
        if(j==1 || j==i*2-1)
        {
            cout<<"*";
        }
        else if(i==n)
        {
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
}

cout<<endl;

for(int i{n};i>=0;i--)
{
    for(int k{1};k<=n-i;k++)
    {
        cout<<" ";
    }
    for(int j{1};j<=2*i-1;j++)
    {
        if(i==1 || i==n || j==1 || j==2*i-1)
        {
            cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
    cout<<"\n";
}


   cout<<endl;
   cout<<"=========================================="<<endl;

  int count{0};
  char alphabet{'a'};
  for(int i{1};i<=n;i++)
  {
    for(int j{1};j<=i;j++)
    {
        count++;
        if(count%2==0)
        {
            cout<<char(alphabet-32);  
        }
        else
        {
            cout<<alphabet;
        }
        alphabet++;
    }
    cout<<endl;
  }



    return 0;
}
