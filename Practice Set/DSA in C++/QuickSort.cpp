// Quick sort

#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

int partition(int arr[], int start, int end){
    
    int pos = start;
    
    for(int i=start; i<end; i++){
        if(arr[i]<=arr[end]){
            swap(arr[i], arr[pos]);
            pos++;
        }
    }
    
    return pos-1;
    
}

void quickSort(int arr[], int start, int end){
    
    if(start>=end){
        return;
    }
    
    int pivot = partition(arr, start, end);
    
    quickSort(arr, start, pivot-1);    // left
    quickSort(arr, pivot+1, end);      // right
    
}

int main(){
    
    int arr[] = {2, 7, 9, 1, 4, 11, 5};
    
    quickSort(arr, 0, 6);
    printArray(arr, 7);
    
}