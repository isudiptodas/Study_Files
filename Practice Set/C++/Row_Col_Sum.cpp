/* 
Take a 2d array input from user and print the sum
of rows and columns.
*/

#include<iostream>
using namespace std;

int main(){
    
    int row, col;
    
    cout<<"Enter the row size : ";
    cin>>row;
    
    cout<<"Enter the column size : ";
    cin>>col;
    
    int arr[row][col];
    
    cout<<"Enter array elements : ";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }
    
    // Printing the sum (row wise)
    int sumRow = 0;
    
    cout<<"The sum of rows are : ";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
          sumRow = sumRow + arr[i][j];
        }
       cout<<sumRow<<" ";
    }
    cout<<endl;
    
    // Printing the sum (column wise)
    int sumCol = 0;
    
    cout<<"The sum of columns are : ";
    for(int j=0; j<col; j++){
        for(int i=0; i<row; i++){
          sumCol = sumCol + arr[i][j];
        }
       cout<<sumCol<<" ";
    }
    cout<<endl;
    
    return 0;
}