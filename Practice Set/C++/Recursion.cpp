// Find factorial using recursion

#include<iostream>
using namespace std;

int factorial(int n){
    
    // Base case
    if(n==0){      
        return 1;
    }
    
    return n * factorial(n-1);
}

int main(){
    
    int n;
    
    cout<<"Enter a number to find factorial : ";
    cin>>n;
    
    cout<<"Factorial of "<<n<<" is "<<factorial(n)<<endl;
    
    
}