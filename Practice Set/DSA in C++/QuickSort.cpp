// Quick sort

#include<iostream>
using namespace std;

int partition(int arr[], int start, int end){
    
    int pivot = arr[start];
    int count = 0;
    
    for(int i=start+1; i<=end; i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    
    // place pivot at right place
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);
    
    int i = start;
    int j = end;
    
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    
    return pivot;
}

void quickSort(int arr[], int start, int end){
    
    // base case
    if(start>=end){
        return;
    }
    
    int p = partition(arr, start, end);
    
    // recursive call for partition
    quickSort(arr, start, p-1);  // sort left part
    quickSort(arr, p+1, end);    // sort right part
    
}

int main(){
    
    int arr[] = {2, 5, 1, 6, 9};
    int size = 5;
    
    quickSort(arr, 0, size-1);
    
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}