// Find unique number in an array

#include<iostream>
using namespace std;

int main(){
    
    int arr[5] = {1, 3, 4, 1, 3};
    int size = 5;
    int answer = 0;
    
    cout<<"Array elements are : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    for(int i=0; i<size; i++){
       answer = answer ^ arr[i];
    }
    
    cout<<"Unique element is : "<<answer<<endl;
}