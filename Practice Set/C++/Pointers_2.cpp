/*

arr[0]   -> first memory block is the address

arr      -> address of arr from first memory block
&arr[0]  -> address of arr
arr[0]   -> value at arr[0]
*arr     -> value at first memory block

*/

#include<iostream>
using namespace std;

int main(){
    
    int arr[5] = {7, 9, 11, 14, 20};;    
    
    cout<<"Address of first arr is : "<<arr<<endl;
    cout<<"Address of first arr is : "<<&arr[0]<<endl;
    cout<<"Value at arr is : "<<arr[0]<<endl;
    cout<<"Value at arr is : "<<*arr<<endl;
    cout<<*arr+1<<endl;          // 7 + 1 = 8
    cout<<*(arr+1)<<endl;        // (arr + 1) inside bracket means first location + 1 = next location
    cout<<*(arr+3)<<endl;        // Output : 14 -> arr + 3 = 3rd index
    cout<<sizeof(arr[2])<<endl;  // Outputs 4 as integer size
    cout<<sizeof(arr)<<endl;     // Outputs 20 -> 4x5 = 20
    
}