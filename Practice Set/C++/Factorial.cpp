// Find factorial

#include<iostream>
using namespace std;

int factorial(int n){
    
    if(n==0 || n==1){
        return 1;
    }
    else{
    return n*factorial(n-1);
    }
}

int main(){
    
    int num;
    
    cout<<"Enter a number : ";
    cin>>num;
    
    int fact = factorial(num);
    
    cout<<"The factorial of "<<num<<" is "<<fact<<endl;
}