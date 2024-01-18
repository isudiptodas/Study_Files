// Reference variable (same variable with different names)

#include<iostream>
using namespace std;

int update(int &n){
    n++;
    return n;
}

int main(){
    
    int a = 10;           // a is assigned 10
    int &b = a;           // b is also pointed to a
    
    cout<<a<<endl;        // 10 will be printed
    cout<<b<<endl;        // Also 10 will be printed as it was pointed to a
    cout<<endl;
    
    cout<<(++a)<<endl;    // Here first a will get incremented to 11
    cout<<(++b)<<endl;    // b also points a so now it will become 12
    cout<<endl;
    
    // Here the address of a and b will be passed as parameter
    cout<<update(a)<<endl;     
    cout<<update(b)<<endl;
    
}