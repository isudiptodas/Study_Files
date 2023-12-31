// Reverse an array

#include<iostream>
using namespace std;

int main(){
    
    int arr[9] = {1, 2, 3, 4 , 5, 6, 7, 8, 9};
    int size = 9;
    int start = 0;
    int end = size - 1;
    
    cout<<"Array before reverse"<<endl;
    for(int i=0; i<9; i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    
    cout<<"Array after reverse"<<endl;
    
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

}