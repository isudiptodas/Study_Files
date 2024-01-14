/*

'*' is a dereference operator, in case of declaring it will hold the 
address of a variable and while printing it will print the value at address

(*ptr)++ is same as *ptr + *ptr

(*ptr)++ increments the value and ptr++ increments the address

*/

#include<iostream>
using namespace std;

int main(){
    
    int num = 10;
    int *ptr = &num;
    
    cout<<"Value at num is : "<<num<<endl;        // Printing the value by num variable
    cout<<"Value at num is : "<<*ptr<<endl;       // Printing the value by dereferencing
    cout<<"Address of num is : "<< &num<<endl;    // Printing the address of num
    cout<<"Address of num is : "<<ptr<<endl;      // Printing the address of ptr
    
    (*ptr)++;                                     // Here the original value of num was updated
    ptr++;
    
    cout<<"Now value of num is : "<<num<<endl;    // Prints the new value
    cout<<"Now address of num is : "<<ptr<<endl;  // Prints the incremented address
    
    cout<<"Size of num is : "<<sizeof(num)<<endl; // Prints the size of num (4)
    cout<<"Size of ptr is : "<<sizeof(ptr)<<endl; // Prints the size of ptr (8)
    
    // Now creating a new pointer to store ptr
    
    int *ptr2 = ptr;
    
    cout<<"Address of ptr2 is : "<<ptr2<<" and ptr is : "<<ptr<<endl;
    cout<<"Value of ptr2 is : "<<*ptr2<<" and ptr is : "<<*ptr<<endl;
    
    
    return 0;
}