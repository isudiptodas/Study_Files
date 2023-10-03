#include<iostream>
using namespace std; 

int main(){

    int num1, num2;
    cout<<"enter the value of num1 : " ; // '<<' is called insertion operator
    cin>>num1;  // '>>' is called extraction operator
    
    cout<<"enter the value of num2 : " ;
    cin>>num2;

    cout<<"the sum is : "<< num1+num2;
   
    return 0;           
}