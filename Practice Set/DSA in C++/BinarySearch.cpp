// Perform binary search

#include<iostream>
using namespace std;

int main(){
    
    int arr[7] = {2, 5, 7, 9, 11, 32, 71};
    int size = 7;
    int element = 9;
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;
    int found = 0;
    
    while(start<=end){
        
        if(arr[mid]==element){
            found = 1;
            break;
        }
        
        // go to right side
        if(element>arr[mid]){
            start = mid+1;
        }
        
        // go to left side
        else{
           end = mid-1;
        }
        
        mid = (start + end)/2;
    }
    
    if(found){
        cout<<"Element found at index "<<mid<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    

  return 0;
}
