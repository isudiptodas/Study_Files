// Reverse the array from a particular position

#include<iostream>
using namespace std;

void reverse(int arr[], int size){
    
    int start = 4;
    int end = size - 1;;
    
    while(start<=end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void print(int arr[], int size){
    reverse(arr, 6);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    
    int arr[6] = {1, 2, 3, 4, 5, 6};
    
    print(arr, 6);
    
    return 0;
}