// Leetcode problem : Find peak element in mountain array using function

#include<iostream>
using namespace std;

int peakElement(int arr[], int size){
    
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;
    
    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        
        mid = start + (end-start)/2;
    }
    
    cout<<"Peak element is "<<arr[mid]<<endl;
    
    return arr[mid];
    
}

int main(){
    
    int arr[] = {3, 4, 7, 9, 1, 2, 6};
    int size = 7;
    
    peakElement(arr, size);
    
    return 0;
    
}