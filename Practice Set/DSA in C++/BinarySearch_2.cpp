// Perform binary search by taking input from user

#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int element){
    
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;
    int found = 0;
    
    while(start<=end){
        if(arr[mid]==element){
            found = 1;
            break;
        }
        
        if(element>mid){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        
    }
    
    if(found){
        cout<<"Element "<<element<<" found at index "<<mid<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    
    return found;
}


int main(){
    
    int size, element;
    
    cout<<"Enter the size of the array : ";
    cin>>size;
    
    int arr[size];
    
    cout<<"Enter the array elements : ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    
    cout<<"Enter the element you want to search : ";
    cin>>element;
    
    binarySearch(arr, size, element);
    
    return 0;
}