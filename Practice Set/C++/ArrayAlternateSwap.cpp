// Alternate array swap

#include<iostream>
using namespace std;

int main(){
    
    int size = 6;
    int arr[6] = {1, 7, 4, 3, 9, 5};
    
    cout<<"Array before alternate swap : "<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl<<"Array after alternate swap : "<<endl;
    for(int i=0; i<size; i+=2){
        if(i+1<size){
            swap(arr[i], arr[i+1]);
        }
    }
    
    for(int i=0; i<size; i++){
      cout<<arr[i]<<" ";
    }
}