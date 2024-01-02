// Find unique element in an array using function

#include<iostream>
using namespace std;

int getSize(){
    int size;
    
    cout<<"Enter the size of the array : ";
    cin>>size;
    
    return size;
}

void getArray(int arr[], int size){
    cout<<"Enter the array elements : ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
}

int uniqueElement(int arr[], int size){
    int answer = 0;
    for(int i=0; i<size; i++){
        answer = answer ^ arr[i];
    }
    
    cout<<"Unique element is : "<<answer;
    
    return answer;
}

int main(){
    
    int size = getSize();
    int arr[size];
    
    getArray(arr, size);
    uniqueElement(arr, size);
    
    return 0;
}