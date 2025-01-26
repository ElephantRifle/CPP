/*Question - Matrix Transverse
Problem
Given a square matrix A & its number of rows (or columns) N, return the
transpose of A.
The transpose of a matrix is the matrix flipped over it's main diagonal,
switching the row and column indices of the matrix.

Constraints
1 <= N <= 1000 */

// #include<iostream>
// using namespace std;
// int main(){
//     
//     int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

//     for(int i{0};i < 3;i++){
//         for(int j{i};j < 3;j++){
//             //Swap
//             int temp = a[i][j];
//             a[i][j] = a[j][i];
//             a[j][i] = temp; 

//         }
//     }
//     //Print
//     for(int i{0};i < 3;i++){
//         for(int j{0};j < 3;j++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }
//---------------------------------------------------------------------------
/*Question - Matrix Multiplication
Problem
Given two 2-Dimensional arrays of sizes n1Xn2 and n2Xn3. Your task is to
multiply these matrices and output the multiplied matrix.
Constraints
1 <= n1,n2,n3 <= 1,000
*/

// #include<iostream>
// using namespace std;
// int main(){
//     int n1{},n2{},n3{};
//     cin>>n1>>n2>>n3;

//     int m1[n1][n2];
//     int m2[n2][n3];

//     //Inserting Values in m1 2-D array
//     for(int i{0};i < n1;i++){
//         for(int j{0};j < n2;j++){
//             cout<<">>";
//             cin>>m1[i][j];
//         }
//     }
   
//     //Inserting Values in m2 2-D array
//     for(int i{0};i < n2;i++){
//         for(int j{0};j < n3;j++){
//             cout<<">>";
//             cin>>m2[i][j];
//         }
//     }
//     //Assiging ans 2-D array
//     int ans[n1][n3];

//     for(int i{0};i < n1;i++){
//         for(int j{0};j < n3;j++){
//             ans[i][j] = 0;
//         }
//     }
//     //Inserting Values in ans 2-D array
//     for(int i{0};i < n1;i++){
//         for(int j{0};j < n3;j++){
//             for(int k{0};k < n2;k++){
//                 ans[i][j] += m1[i][k] * m2[k][j];
//             }
//         }
//     }
//     //Printing ans result matrix
//     for(int i{0};i < n1;i++){
//         for(int j{0};j < n3;j++)
//             cout<<ans[i][j]<<" ";
//         cout<<endl;
//     }

//     return 0;
// }
 //------------------------------------------------------------------------------------
 /*Question - Matrix Search
 Problem
Given a nxm matrix.
Write an algorithm to find that the given value exists in the matrix or not.
Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.

Constraints
1 <= N,M <= 1,000
*/
#include<iostream>
using namespace std;
int main(){
    int rows{},columns{};
    cout<<"Rows: ";
    cin>>rows;
    cout<<"Columns: ";
    cin>>columns;

    int target{};
    cout<<"Target: ";
    cin>>target;

    int a[rows][columns];
    for(int i{0};i < rows;i++){
        for(int j{0};j < columns;j++){
            cout<<">>";
            cin>>a[i][j];
        }
    }

    int n = 0,m = columns -1;
    bool found = false;
    while( n < rows and m >= 0){
        if(a[n][m] == target){
            found = true;
            break;// break out of the loop once the target is found
        }
        if(a[n][m] < target){
            n++;
        }else{
            m--;
        }
    }
    if(found){
        cout<<"Element Found.";
    }else{
        cout<<"Element does not exist.";
    }

    return 0;
}
