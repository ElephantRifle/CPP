/*
BUBBLE SORT
How it works: Repeatedly swaps adjacent elements if they are in the wrong order.
Time Complexity:

Best case: 𝑂(𝑛) (when the array is already sorted)

Worst case: 𝑂(𝑛 square)
Space Complexity: 𝑂(1)

*/

#define code1   //Dosen't check if code is sorted or not
#define code2   //checks if code is sorted or not

#ifdef code1

#include<iostream>
using std :: cout;
using std :: cin;
using std :: endl;

int main(){
    int arr[]{12,45,23,51,18,8};
    int size = sizeof(arr) / sizeof(arr[0]);
   

    for(int i = 0 ;i < size - 1;++i){
        for(int j = 0; j < size - 1 - i;++j){
            if(arr[j+1] < arr[j]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(auto temp : arr){
        cout<<temp <<" ";
    }
    return 0;
}
#endif

//------------------------------------------------------------------------------------------

#ifdef code2

/*. We can improve the code1 it by adding a swapped flag to terminate early if no swaps 
occur in a pass.  If the array gets sorted before completing all iterations, 
the loop terminates early, making it efficient for nearly sorted inputs.*/

#include <iostream>
using namespace std;
int main() {
    
    int arr[]{10,9,8,7,6,5,4,3,2,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    bool swaped;
    
    for(int i = 0;i < size - 1;++i){
        swaped = false;
        for(int j = 0;j < size - i -1 ;++j){
            if(arr[j] > arr[j+1]){
                // int temp = arr[j+1];
                // arr[j+1] = arr[j];
                // arr[j] = temp;
                swap(arr[j] , arr[j+1]); //using build in function to swap
                swaped = true;
            }
        }
        if(!swaped)break;
    }
    for(auto temp : arr){
        cout<<temp<<" ";
    }

    return 0;
}

#endif