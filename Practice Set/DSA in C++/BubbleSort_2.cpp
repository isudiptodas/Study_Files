#include<iostream>
using namespace std;

int main(){
    
    int size = 5;
    int arr[size] = {6, 9, 2, 12, 3};
    
    cout<<"Array before bubble sort : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    cout<<endl<<"Array after bubble sort : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
    
}