// Perform binary search without exceeding int limit

#include<iostream>
using namespace std;

int getSize(){
    int size;
    
    cout<<"Enter the size of the array : ";
    cin>>size;
    
    return size;
}

void getArray(int arr[], int size){
    cout<<"Enter the array elements : ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
}

int getElement(){
    int element;
    cout<<"Enter the element you want to search : ";
    cin>>element;
    
    return element;
}

int binarySearch(int arr[], int size, int element){
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;
    int found = 0;
    
    while(start<=end){
        if(arr[mid]==element){
            found = 1;
            break;
        }
        
        if(element>arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        
        mid = start + (end - start)/2;
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
    
    int size = getSize();
    int arr[size];
    getArray(arr, size);
    int element = getElement();
    binarySearch(arr, size, element);
    
    return 0;
}