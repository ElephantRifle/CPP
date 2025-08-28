/*
How it works: Picks a pivot element, partitions the array around it, and recursively 
sorts the partitions.
Time Complexity:

Best case: 𝑂(𝑛log𝑛)
Worst case: 𝑂(𝑛2)    (rare, when the pivot is poorly chosen)
Space Complexity: 𝑂(log𝑛)  (average case for recursion)

*/

//This is the code to put a pivot at its correct place

//#define code1
//#define values 
#define with_FOR_LOOP


#ifdef code1

#include <iostream>
#include<vector>
using namespace std;

int quick(vector<int>&arr,int low,int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i < j){
        while(arr[i] <= pivot && i <= high-1){// -1 can be removed 
            i++;
        }
        while(arr[j] > pivot && j >= low+1){
            j--;
        }
        if(i < j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low] , arr[j]);
    return j;
}

void quick_sort(vector<int>&arr,int low,int high){
   if(low < high){
       int british = quick(arr,low,high);
       quick_sort(arr,low,british-1);
       quick_sort(arr,british+1,high);
   } 
}
int main() {
    vector<int>arr{4,6,2,5,7,9,1,3,4};

    
    int size = arr.size();
    
    quick_sort(arr,0,size-1);
    
    for(auto temp : arr){
        cout<<temp<<" ";
    }

    return 0;
}

#endif

//THis code provide outputs like:
//value of british being returned
//the changes in arr
//low and high value 
#ifdef values

#include <iostream>
#include<vector>
using namespace std;

int quick(vector<int>&arr,int low,int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i < j){
        while(arr[i] <= pivot && i <= high-1){
            i++;
        }
        while(arr[j] > pivot && j >= low+1){
            j--;
        }
        if(i < j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low] , arr[j]);
    cout<<low<<" "<<high<<endl;
    for(auto temp: arr){
        cout<<temp<<" ";
    }
    cout<<'\n';
    cout<<"british: "<<j<<endl;
    return j;
}

void quick_sort(vector<int>&arr,int low,int high){
   if(low < high){
       int british = quick(arr,low,high);
       quick_sort(arr,low,british-1);
       quick_sort(arr,british+1,high);
   } 
}
int main() {
    vector<int>arr{4,6,2,5,7,9,1,3};
    int size = arr.size();
    
    quick_sort(arr,0,size-1);
    
    // for(auto temp : arr){
    //     cout<<temp<<" ";
    // }

    return 0;
}

#endif

#ifdef with_FOR_LOOP

#include <iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int quick(vector<int>& arr, int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;

    // outer loop (acts like while(i < j))
    for (; i < j; ) {

        // Move  i forward
        for (; i <= high && arr[i] <= pivot; ++i);

        //move j backward
        for (; j >= low && arr[j] > pivot; --j);

        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[low], arr[j]);
    return j;
}

void quick_sort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivotIndex = quick(arr, low, high);
        quick_sort(arr, low, pivotIndex - 1);
        quick_sort(arr, pivotIndex + 1, high);
    }
}

int main() {
    int input{};
    cout << "Enter number of elements: ";
    cin >> input;

    vector<int> arr(input);

    cout << "Enter " << input << " elements:\n";
    for (int i = 0; i < input; ++i) {
        cout << ">> ";
        cin >> arr[i];
    }

    quick_sort(arr, 0, input - 1);

    cout << "Sorted array: ";
    for (auto temp : arr) {
        cout << temp << " ";
    }
    cout << endl;

    return 0;
}

#endif