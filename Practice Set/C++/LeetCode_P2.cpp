// Leetcode problem : Reverse integer

#include<iostream>
using namespace std;


int main(){
    
    int num;
    int answer = 0;
    
    cout<<"Enter a number you want to reverse digits of : ";
    cin>>num;
    cout<<"Original digits are : "<<num<<endl;
    
    while(num!=0){
        
        int digit = num%10;
        answer = (answer*10)+digit;
        num = num/10;
        
    }
    
    cout<<"Reversed digits are : "<<answer<<endl;
    
}