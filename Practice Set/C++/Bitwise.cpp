#include<iostream>
using namespace std;

int main(){
    
    int a = 4; // 100
    int b = 6; // 110
    
    cout<<"a & b is : "<<(a&b)<<endl; // 100 & 110
    cout<<"a | b is : "<<(a|b)<<endl; // 100 | 110
    cout<<"~a is : "<<(~a)<<endl;     // 100, 1 will become 0 and 0 will become 1
    cout<<"~b is : "<<(~b)<<endl;     // 110, 1 will become 0 and 0 will become 1
    cout<<"a ^ b is : "<<(a^b)<<endl; // 100^110
    
}