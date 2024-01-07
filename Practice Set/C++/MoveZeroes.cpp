// Move zeros

#include<iostream>
using namespace std;



int main(){
    
    int arr[7] = {0, 7, 8, 0, 2, 0, 0};
    int size = 7;
    
    int nonZero = 0;
    
    for(int i=0; i<size; i++){
        if(arr[i]!=0){
            swap(arr[i], arr[nonZero]);
            nonZero++;
        }
    }
    
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}