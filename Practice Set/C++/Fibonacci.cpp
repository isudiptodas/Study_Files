#include<iostream>
using namespace std;

int fibo(int n){
    
    if(n<=1){
        return n;
    }
    
    return fibo(n-1) + fibo(n-2);
}

void printFibo(int n){
    
    for(int i=0; i<=n; i++){
        cout<<fibo(i)<<" ";
    }
}

int main(){
    
    int n = 7;
    printFibo(n);
    
}