// Search an element in 2d array

#include<iostream>
using namespace std;

/*
Here in this function you have to mention atleast column 
otherwise it will give an error
*/
bool isPresent(int arr[][3], int element, int row, int col){
    int found = 0;
    
    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
           if(arr[row][col]==element){
               found = 1;
               break;
           }
        }
    }
    
    return found;
}

int main(){
    
    int arr[3][3];
    int element;
    
    cout<<"Enter array elements : ";
    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            cin>>arr[row][col];
        }
    }
    
    cout<<"Enter the element you want to search : ";
    cin>>element;
    
    if(isPresent(arr, element, 3, 3)){
        cout<<"Element is present"<<endl;
    }
    else{
        cout<<"Element not present"<<endl;
    }

    
    return 0;
}