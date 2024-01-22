// Linear search using recursion

#include<iostream>
using namespace std;

void print(int arr[], int size){
    
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int linearSearch(int arr[], int size, int key, int start, int end){
    if(start>end){
        return 0;
    }
    if(arr[start]==key){
        return start;
    }

    return linearSearch(arr, size, key, start+1, end);
}

int main(){
    
    int arr[] = {1, 5, 8, 4, 7, 3, 11};
    int size = 7;
    int key = 7;
    
    print(arr, size);
    int search = linearSearch(arr, size, key, 0, size - 1);
    
    if(search){
        cout<<"Element found at index "<<search;
    }
    else{
        cout<<"element not found";
    }
}