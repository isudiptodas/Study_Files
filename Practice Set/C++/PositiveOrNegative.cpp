// Find a number is positve, negative or 0

#include<iostream>
using namespace std;

int main(){
    
    int num;
    
    cout<<"Enter the value of num : ";
    cin>>num;
    
    if(num>0){
        cout<<"Number is positive";
    }
    else if(num<0){
        cout<<"Number is negative";
    }
    else if(num==0){
        cout<<"Number is 0";
    }
    
}