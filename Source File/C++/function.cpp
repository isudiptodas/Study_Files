#include<iostream>
using namespace std;

int sum(int a, int b){                                            // Here int a, int b are formal parameters
    int c = a + b;

    return c;
}

int main(){
    int num1, num2;
    cout<<"Enter the value of num1 : ";
    cin>>num1;
 
    cout<<"Enter the value of num2 : ";
    cin>>num2;

    cout<<"The sum of num1 & num2 is : "<<sum(num1, num2)<<endl;  // Here the value of num1, num2 are actual parameters

return 0;
}