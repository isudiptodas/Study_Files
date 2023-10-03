#include<iostream>
using namespace std;

int main(){

int marks[] = {70, 67, 49, 55, 60};
int *p = marks;

cout<<*(p++)<<endl; // Here the *(p++) means that the current value will first print : 70, then it will point at another location
cout<<*p<<endl;     // Here the value was changed and it was pointing at the next value : 67

return 0;
}