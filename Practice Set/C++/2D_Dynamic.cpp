// 2D arrays with dynamic memory allocation
// Always delete the allocated memory from heap after every use

#include<iostream>
using namespace std;

int main(){
    
    int size;
    
    cout<<"Enter size : ";
    cin>>size;
    
    // In static we used to create like this
    int arr[size][size];
    
    // But in dynamic we can do it like this
    int **arr2 = new int*[size];
    
    // 2D array creation
    for(int i=0; i<size; i++){
        arr2[i] = new int(size);  // For every row, put number of columns
    }
    // Taking input
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
          cin>>arr2[i][j];
       }
   }
   
   cout<<endl;
   
   // Printing array
   for(int i=0; i<size; i++){
       for(int j=0; j<size; j++){
           cout<<arr2[i][j]<<" ";
       }
       cout<<endl;
   }
   
   // Deleting memory
   for(int i=0; i<size; i++){
       delete [] arr2[i;]
   }
   
   delete []arr2;
    
}