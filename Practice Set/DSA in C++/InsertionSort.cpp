// Perform insertion sort

#include<iostream>
using namespace std;

int main(){
    
    int arr[] = {1, 4, 2, 7, 0};
    int size = 5;
    
    cout<<"Array before insertion sort : ";
    for(int i=0;i<size; i++){
        cout<<arr[i]<<" ";
    }
    
    for(int i=1; i<size; i++){
        for(int j=i; j>0; j--){
            if(arr[j]<arr[j-1]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
            else{
                break;
            }
        }
    }
    
    cout<<endl;
    cout<<"Array after insertion sort : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    
    
}