// Binary search using recursion

#include<iostream>
using namespace std;

void print(int arr[], int size){
    
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int binarySearch(int arr[], int size, int key, int start, int end){
    if(start>end){
        return 0;
    }
    
    int mid = start + (end-start)/2;
    
    if(arr[mid]==key){
        return mid;
    }
    if(arr[mid]>key){
        return binarySearch(arr, size, key, start, mid-1);
    }

    return binarySearch(arr, size, key, mid+1, end);
}


int main(){
    
    int arr[] = {1, 5, 8, 10, 17, 23, 34};
    int size = 7;
    int key = 34;
    
    print(arr, size);
    int search = binarySearch(arr, size, key, 0, size - 1);
    
    if(search){
        cout<<"Element found at index "<<search;
    }
    else{
        cout<<"element not found";
    }
}