// Static and dynamic memory allocation

/*

1. All the variable that we create irrespective of any
   data type, also for arrays, all of them are created and
   stored in stack as static memory.

2. If we want to create memory in heap then we have to create 
   allocate memory dynamically.

3. To allocate memory dynamically we use 'new' keyword

4. We cannot name a variable which was create on heap.
   It returns the address so we need to create a pointer
   on static memory to access the dynamic memory

*/

#include<iostream>
using namespace std;

// A function to calculate the sum of array elements
void sum(int *arr, int size){
    int ans = 0;
    
    for(int i=0; i<size; i++){
        ans = ans + arr[i];
    }
    
    cout<<ans;
}

int main(){
    
    new int;                  // Memory allocated on heap
    int size;
    
    int *num = new int;       // Address stored in stack using pointer
    
    cout<<sizeof(int)<<endl;  // Size of int = 4
    cout<<sizeof(num)<<endl;  // Size of pointer = 8 (storing address also : 4+4)
   
  //____________________________________________________________________________________ 
  
  // Now lets create array in heap
    
    cout<<"Enter the size of array : ";
    cin>>size;
    
    int *arr = new int[size];
    
    cout<<"Enter array elements : ";
    
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    
    sum(arr, size);
    
  //_____________________________________________________________________________________
    
    
  // To allocate memory in heap
  int *num = new int;
  int *arr = new int[];
  
  // To delete memory in heap
  delete num;
  delete []arr;
  
  
}