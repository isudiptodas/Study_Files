// LeetCode problem 3 : difference of sum and product of digits

#include<iostream>
using namespace std;

int main(){
    
    int sum = 0;
    int prod = 1;
    int num;
    
    cout<<"Enter a number : ";
    cin>>num;
    cout<<endl;
    
    while(num>0){
        
        int digit = num%10;
        sum = sum + digit;
        prod = prod * digit;
        num = num/10;
    }
    
    int difference = prod - sum;
    
    cout<<"Sum of digits are : "<<sum<<endl;
    cout<<"Product of digits are : "<<prod<<endl;
    cout<<"Difference is : "<<difference<<endl;
    
}