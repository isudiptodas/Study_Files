/*

Take one array and numbers of the array as input 
from user and print whether the number is present
in the array or not and print its count.

*/

#include<iostream>
using namespace std;

int countNumber(int arr[], int size, int num){
     
     bool found = false;
     int count = 0;
     
     for(int i=0; i<size; i++){
         if(arr[i]==num){
             found = true;
             ++count;
         }
     }
     
    if(found==1){
        cout<<"Element found and it's count is "<<count<<endl;
    }
    else{
        cout<<"Element not found";
    }
    
    return count;
}


int main(){
    
    int size, number;
    
    cout<<"Enter the size of the array : ";
    cin>>size;
    
    int arr[size];
    
    cout<<"Enter the array elements : ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    
    cout<<"Enter the number you want to search and it's count : ";
    cin>>number;
    
    countNumber(arr, size, number);
    cout<<endl;
}