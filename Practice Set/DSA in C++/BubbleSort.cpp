// Take input from user and perform bubble sort

#include<iostream>
using namespace std;

void bubbleSort(int arr[], int size){
     
    for(int i=0; i<size; i++){
        for(int j=0; j<size-1; j++){
            if(arr[j]>arr[j+1]){
            
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
    
}
    cout<<endl;
    
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
    
    bubbleSort(arr, size);
    
    return 0;
}