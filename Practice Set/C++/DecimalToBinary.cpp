// Decimal to binary conversion

#include<iostream>
using namespace std;

int main(){
    
    int num;
    int reverse = 0;
    
    cout<<"Enter a number : ";
    cin>>num;
    
    while(num!=0){
        
        reverse = reverse * 10 + num%2;
        num = num/2;
    }
    
    cout<<"Binary form of "<<num<<" is : "<<reverse<<endl;
}