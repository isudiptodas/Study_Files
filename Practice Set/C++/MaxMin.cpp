/*

Take number input from user and find the maximum 
and minimum number

*/

#include<iostream>
#include<climits>
using namespace std;

int maxNum(int arr[], int size){
    
    int max = INT_MIN;
    
    for(int i=0; i<size; i++){
    if(arr[i]>max){
        max = arr[i];
    }
  }
    
    return max;
}

int minNum(int arr[], int size){
    
    int min = INT_MAX;
    
    for(int i=0; i<size; i++){
    if(arr[i]<min){
        min = arr[i];
    }
  }
  
    return min;
}


int main(){
   
    int size;
    
    cout<<"Enter size of the array : ";
    cin>>size;
    
    int arr[size];
    
    cout<<"Enter array numbers : ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    
    cout<<"Maximum number is : "<<maxNum(arr, size)<<endl;
    cout<<"Minimum number is : "<<minNum(arr, size);
}