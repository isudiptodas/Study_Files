// Find factorial using recursion

#include<iostream>
using namespace std;

void counting(int n){
    
    // Base condition
    if(n==0){
        return;
    }
    
    cout<<n<<" ";
    
    // Recursive relation
    counting(n-1);
}

int main(){
    
    int n;
    
    cout<<"Enter a number to print counting : ";
    cin>>n;
    
    counting(n);
    
    
}