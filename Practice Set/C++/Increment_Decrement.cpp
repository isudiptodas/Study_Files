#include<iostream>
using namespace std;

int main(){
   
   int num = 7;
   
   cout<<(num++)<<endl; // Expected output 7
   cout<<(++num)<<endl; // Expected output 9
   cout<<(num--)<<endl; // Expected output 9
   cout<<(--num)<<endl; // Expected output 7
    
}