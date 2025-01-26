#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int length{},width{},height{};
    double base_cost{2.50};

    const int tier1_threshold{100};//volume
    const int tier2_threshold{500};//volume

    int max_dim_length{10};//dimension

    double tier1_surcharge{0.10};//surcharge
    double tier2_surcharge{0.20};//surcharge

    int package_volume{};
    
    cout<<"Enter Package length,width,height of package with spaces: ";
    cin>>length>>width>>height;

    if(length>max_dim_length || width>max_dim_length || height>max_dim_length){
        cout<<"\nPackage dimensions excedded,We cannot ship it.";

    }else{
        double package_cost{};
        package_volume=length*width*height;
        package_cost=base_cost;

        // if(package_volume > tier1_threshold && package_volume < tier2_threshold){
        //   package_cost+=(package_cost*tier1_surcharge);
        //   cout<<"\nAdding tier1 surcharge."<<endl;

        // }else if(package_volume > tier2_threshold){
        //   package_cost+=(package_cost*tier2_surcharge);
        //   cout<<"\nAdding tier2 surcharge."<<endl;

        // }     

                 //OR
        //have the greater value first this way smaller one will not conflict with greater value(threshold)
        if(package_volume > tier2_threshold){
          package_cost+=package_cost*tier2_surcharge;
          cout<<"\nAdding tier2 surcharge."<<endl;

        }else if(package_volume > tier1_threshold ){
          package_cost+=package_cost*tier1_surcharge;
          cout<<"\nAdding tier1 surcharge."<<endl;
        }    
        
        cout<<fixed<<setprecision(2);
        cout<<"Your Package Volume is: "<<package_volume<<" cubic/inc"<<endl;
        cout<<"Cost:$ "<<package_cost<<" to  ship."<<endl;
        cout<<endl;
          
    }

    return 0;
}