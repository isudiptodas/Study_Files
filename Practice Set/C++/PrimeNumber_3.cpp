/*
Take two input from user as start point and 
end point and count and print all the prime 
numbers between the given range
*/

#include<iostream>
using namespace std;

bool isPrime(int n){
    
    if(n<=0){
        return 0;
    }
    else{
        for(int i=2; i<n; i++){
            if(n%i==0){
                return 0;
            }
        }
    }
    return 1;
}

int primeCount(int start, int end){
    
    int choice;
    
    if(end<start){
        cout<<"Ending range must be higher than starting range";
    }
    else{
        for(int i=start; i<end; i++){
            if(isPrime(i)){
                choice++;
            }
        }
    }
    return choice;
}

void printPrime(int start, int end){
    
    if(end<start){
        cout<<"Ending range must be higher than starting range";
    }
    else{
        for(int i=start; i<end; i++){
            if(isPrime(i)){
                cout<<i<<" ";
            }
        }
    }
}

int main(){
    
    int start, end;
    
    cout<<"Enter a starting point : ";
    cin>>start;
    
    cout<<"Enter an ending point : ";
    cin>>end;
    
    cout<<"Number of prime numbers between "<<start<<" to "<<end<<" is "<<primeCount(start, end)<<endl;
    cout<<"The prime numbers are : ";
    printPrime(start,end);
    
}