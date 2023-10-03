#include<iostream>
using namespace std;

int main(){

int marks[] = {70, 67, 49, 55, 60};
int *p = marks;

cout<<*(++p)<<endl;    // Here *(++p) means that the value was incremented and it pointing to the next value : 67, instead of the first value : 70
cout<<*p<<endl;        // Here the value will point at 67

return 0;
}