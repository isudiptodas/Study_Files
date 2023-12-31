// Take input from user and reverse the array

#include<iostream>
using namespace std;

int getSize(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
      
    return size;
  }

int arrayElements(int arr[], int size){
    cout<<"Enter array elements : ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    
    return 0;
}

void beforeReverse(int arr[], int size){
    cout<<"Array before reverse "<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void afterReverse(int arr[], int size){

    int start = 0;
    int end = size - 1;
    
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
    cout<<"Array after reverse "<<endl;
    
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
   
    int size = getSize();
    int arr[size];
    
    arrayElements(arr, size);
    beforeReverse(arr, size);
    afterReverse(arr, size);
    
}
