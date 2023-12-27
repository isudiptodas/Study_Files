#include<iostream>
using namespace std;

int main(){
    
    int size, element;
    int found = 0;
    
    cout<<"Enter the size of the array : ";
    cin>>size;
    
    int arr[size];
    
    cout<<"Enter the elements of the array : ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    
    cout<<"Enter the element you want to search : ";
    cin>>element;
    
    for(int i=0; i<size; i++){
        if(arr[i]==element){
            cout<<"Element found at index "<<i<<endl;
            found = 1;
            break;
        }
    }
    if(!found){
        cout<<"Element not found"<<endl;
    }
}