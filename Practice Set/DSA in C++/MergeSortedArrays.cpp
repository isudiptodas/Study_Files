// Merge 2 sorted arrays

#include<iostream>
using namespace std;

// print array
void printArray(int arr[], int size){
    
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// merge array
void mergeArray(int arr1[], int size1, int arr2[], int size2, int arr3[]){
    
    int i = 0;
    int j = 0;
    int k = 0;
    
    // compare arr1 and arr2 elements are place them in arr3
    while(i<size1 && j<size2){
        if(arr1[i]<arr2[j]){
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    
    // if elements left in the 1st array then copy them in the 3rd array
    while(i<size1){
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    
    // if array left in 2nd array then copy them in the 3rd array
    while(j<size2){
        arr3[k]=arr2[j];
        k++;
        j++;
    }
}


int main(){
    
    int arr1[] = {1, 2, 3, 4, 5, 6, 7};
    int arr2[] = {8, 9, 10};
    int arr3[10];
    
    printArray(arr1, 7);
    printArray(arr2, 3);
    mergeArray(arr1, 7, arr2, 3, arr3);
    printArray(arr3, 10);
    
}