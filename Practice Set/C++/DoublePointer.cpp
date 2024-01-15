#include<iostream>
using namespace std;

// Updates the value of the address present at ptr
int update(int *p){
    *p = *p + 1;
    
    return *p;
}

// Swaps two numbers by address
void swap(int *p, int *q){
    int temp = *p;
    *p = *q;
    *q = temp;
}

int main(){
    
    int num = 5;          // Stores 5
    int *ptr = &num;      // Pointer stores the address of num
    int **ptr2 = &ptr;    // Double pointer stores the address of another pointer
    
    cout<<"Value of num is : "<<num<<endl;
    cout<<"Value of ptr is : "<<*ptr<<endl;
    cout<<"Value of ptr2 is : "<<**ptr2<<endl<<endl;
    
    cout<<"Address of num is : "<<&num<<endl;
    cout<<"Address of ptr is : "<<&ptr<<endl;
    cout<<"Address of ptr2 is : "<<&ptr2<<endl<<endl;
    
    //___________________________________________________________________________________________
    
    cout<<"Value of num before update is : "<<num<<endl;
    cout<<"Value of num after update is : "<<update(ptr)<<endl<<endl;
    
    int a = 5;
    int b = 10;
    
    cout<<"Before swapping value of a and b is : "<<a<<" "<<b<<endl;
    swap(a, b);
    cout<<"After swapping value of a and b is : "<<a<<" "<<b<<endl;
    
}