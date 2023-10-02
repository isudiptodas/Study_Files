#include<iostream>
using namespace std;

int main(){

int a = 7;
int *b = &a;
int  **c = &b;

cout<<"The address of b is : "<<&b<<endl;
cout<<"The address of b is : "<<c<<endl;
cout<<"The value at address c is : "<<*c<<endl;

cout<<"The value at address value_at(value_at(c)) is : "<<**c<<endl;

return 0;
}