// Implement merge sort (recursive algo)

#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

void merge(int arr[], int start, int mid, int end){
    
    int temp[end-start+1];
    int left = start;
    int right = mid+1;
    int index = 0;
    
    while(left<=mid && right<=end){
        if(arr[left]<arr[right]){
            temp[index] = arr[left];
            index++;
            left++;
        }
        else{
            temp[index]=arr[right];
            index++;
            right++;
        }
    }
    while(left<=mid){
        temp[index]=arr[left];
        index++;
        left++;
    }
    while(right<=end){
        temp[index]=arr[right];
        index++;
        right++;
    }
    
    index = 0;
    for(int i=start; i<=end; i++){
        arr[i]=temp[index];
        index++;
    }
    
}

void mergeSort(int arr[], int start, int end){
    
    if(start>=end){
        return;
    }
    
    int mid = start+(end-start)/2;
    
    mergeSort(arr, start, mid);
    mergeSort(arr, mid+1, end);
    merge(arr, start, mid, end);
}


int main(){
    
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    
    mergeSort(arr, 0, 10);
    printArray(arr, 10);
    
}