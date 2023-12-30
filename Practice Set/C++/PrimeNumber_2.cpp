// Find a number is prime or not using function

#include<iostream>
using namespace std;

bool isPrime(int n){
    
    for(int i=2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    
    int num;
    
    cout<<"Enter a number : ";
    cin>>num;
    
    bool primeNumber = isPrime(num);
    
    if(primeNumber){
        cout<<num<<" is a prime number"<<endl;
    }
    else{
        cout<<num<<" is not a prime number"<<endl;
    }
    
}