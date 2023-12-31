#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int search){
    
    bool found = 0;
    int i;
    
    for(i=0; i<size; i++){
        if(arr[i]==search){
            found = 1;
            break;
        }
    }
    
    if(found==1){
        cout<<"Element "<<search<<" found at index "<<i<<endl;
    }
    else{
        cout<<"Sorry bhai! Element not found"<<endl;
    }
    return found;
}


int main(){
    
    int size, search;
    
    cout<<"Enter the size of the array : ";
    cin>>size;
    
    int arr[size];
    
    cout<<"Enter the array elements : ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    
    cout<<"Enter the element you want to search : ";
    cin>>search;
    
    linearSearch(arr, size, search);
    
}