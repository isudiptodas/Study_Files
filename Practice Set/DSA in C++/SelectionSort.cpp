// Take input from user and perform selection sort

#include<iostream>
using namespace std;

void selectionSort(int arr[], int size){
     
    for(int i=0; i<size-1; i++){
        int min = i;
        for(int j=i+1; j<size; j++){
            if(arr[j]<arr[min]){
                min = j;
            }
            
        }
        
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    
    cout<<"Sorted array is : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    
    
}


int main(){
    
    int size;
    
    cout<<"Enter a size : ";
    cin>>size;
    
    int arr[size];
    
    cout<<"Enter the array elements : ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    
    cout<<endl;
    
    cout<<"Unsorted array is : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    
    selectionSort(arr, size);
    
    return 0;
}