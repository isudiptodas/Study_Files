/* 

Find first and last position of an element 
in a sorted array

*/

#include<iostream>
using namespace std;

int firstOccurrence(int arr[], int size, int element){
    
    int answer = -1;
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;
    
    while(start<=end){
        if(arr[mid]==element){
            answer = mid;
            end = mid - 1;
        }
        else if(element>arr[mid]){
            start = mid + 1;
        }
        else if(element<arr[mid]){
            end = mid - 1;
        }
        
        mid = start + (end-start)/2;
    }
    
    return answer;
}

int lastOccurrence(int arr[], int size, int element){
    
    int answer = -1;
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;
    
    while(start<=end){
        if(arr[mid]==element){
            answer = mid;
            start = mid + 1;
        }
        else if(element>arr[mid]){
            start = mid + 1;
        }
        else if(element<arr[mid]){
            end = mid - 1;
        }
        
        mid = start + (end-start)/2;
    }
    
    return answer;
}


int main(){
    
    int size, element;
    
    cout<<"Enter the size of the array : ";
    cin>>size;
    
    int arr[size];
    
    cout<<"Enter the array elements : ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    
    cout<<"Enter the element you want to find first and last occurence : ";
    cin>>element;
    
    int first = firstOccurrence(arr, size, element);
    int last = lastOccurrence(arr, size, element);
    
    cout<<"First occurrence of "<<element<<" is at index "<<first<<endl;
    cout<<"Last occurrence of "<<element<<" is at index "<<last;
}
