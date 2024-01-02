// Find factorial of a number 

#include<iostream>
using namespace std;

int factorial(){
    int num = 9;
    int factorial = 1;
    
    cout<<"factorial of "<<num<<" is ";
    
    while(num!=0){
        factorial = factorial*num;
        num--;
    }
    cout<<factorial<<endl;
    return factorial;
}


int main(){
    
    factorial();
    
    return 0;
}