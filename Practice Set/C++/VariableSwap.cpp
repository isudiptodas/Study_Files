// Swap numbers both using and not using third variable.

#include<iostream>
using namespace std;

int main(){
    
    int a = 5;
    int b = 10;
    
    // Swap method using third variable
    cout<<"BEFORE SWAP"<<endl;
    cout<<"a = "<<a<<" b = "<<b<<endl;

    int temp = a;
    a = b;
    b = temp;
    
    cout<<"AFTER SWAP"<<endl;
    cout<<"a = "<<a<<" b = "<<b<<endl;
   
    //___________________________________________________
    
    // Swap method without using third variable
    cout<<"NOW SWAPPING BACK TO ORIGINAL VALUES"<<endl;
    
    a = a + b; // now a is 15
    b = a - b; // now b is 5
    a = a - b; // now a is 10
    
    cout<<"a = "<<a<<" b = "<<b<<endl;
    
}