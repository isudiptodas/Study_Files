// Print 2d array like a wave ⤴⤵⤴⤵

#include<iostream>
using namespace std;

int main(){
    
    int row, col;
    
    // Getting row and column size
    cout<<"Enter row size : ";
    cin>>row;
    cout<<"Enter column size : ";
    cin>>col;
    
    // Declaring array
    int arr[row][col];
    
    // Entering array elements
    cout<<"Enter array elements : ";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }
    
    // Printing array elements
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // Printing like wave
    for(int j=0; j<col; j++){
        
        // If column is odd then print bottom to top
        if(col&1){
            for(int i=row-1; i>=0; i--){
                cout<<arr[i][j]<<" ";
            }
        }
        
        // Else print top to bottom
        else{
            for(int i=0; i<row; i++){
                cout<<arr[i][j]<<" ";
            }
        }
    }
    
    
    return 0;
}