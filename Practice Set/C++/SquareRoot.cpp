#include<iostream>
using namespace std;

int main(){
    
    long int num;
    long int squareRoot = 0;
    
    cout<<"Enter number to find square root : ";
    cin>>num;
    
    if(num>=0){
     for(long int i=0; i<=num; i++){
        if(i*i==num){
            squareRoot = i;
        }
     }
    }
    
    
    if(squareRoot * squareRoot != num){
        cout<<"Square root of "<<num<<" is not integer"<<endl;
    }
    else if(num<=0){
        cout<<"Enter a positive or non zero number"<<endl;
    }
    else{
        cout<<"Square root of "<<num<<" is "<<squareRoot<<endl;
    }
    
    return 0;
}