// Take input from user and print all the numbers upto that

#include<iostream>
using namespace std;

void printCount(int n){
    
    if(n==0 || n==1){
        cout<<"Enter a higher number";
    }
    
    for(int i=1; i<=n; i++){
        cout<<i<<" ";
    }
}

int main(){
    
    int num;
    
    cout<<"Enter a number you want to print upto : ";
    cin>>num;
    
    printCount(num);
    
}