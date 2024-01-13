// Perform binary search in 2D matrix

#include<iostream>
using namespace std;

int main(){
    
    int row, col, element, index;
    int found = 0;
    
    // Taking row and column input
    cout<<"Enter row size : ";
    cin>>row;
    cout<<"Enter column size : ";
    cin>>col;
    
    // Declaring matrix
    int arr[row][col];
    
    // Entering matrix elements
    cout<<"Enter array elements : ";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    
    // Printing matrix
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    // Entering the searching element
    cout<<"Enter the element you want to search : ";
    cin>>element;
    
    // Initialising indexes for binary search
    int start = 0;
    int end = row*col-1;
    int mid = start + (end - start)/2;
    
    while(start<end){
        index = arr[mid/col][mid%col]; // [mid/col] gives row index and [mid%col] gives column index
        
        if(index == element){
            found = 1;
            break;
        }
        else if(element > mid){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        
        mid = start + (end - start)/2;
    }
    
    if(found){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    
    
    return 0;
}