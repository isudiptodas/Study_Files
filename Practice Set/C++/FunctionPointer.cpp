
#include<iostream>
using namespace std;

// Here the function takes a pointer as parameter
void print(int *p){
    cout<<*p<<endl;   // First the value will get printed
    cout<<p<<endl;    // Then the address will get printed
}

void update(int *p){
    cout<<*p+1<<endl;;  // Here the value got incremented
    cout<<p+1<<endl;    // Here the address also get incremented
}

int main(){
    
    int a = 7;
    int *p = &a;
   
    print(p);
    update(p);
    
}