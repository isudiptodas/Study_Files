// Leetcode problem : Find peak element in mountain array

#include<iostream>
using namespace std;

int main(){
    
    int arr[] = {3,4,5,6,7,8,1,2,3,4};
    int size = 10;
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
    
    cout<<mid;
    
    return 0;
    
}