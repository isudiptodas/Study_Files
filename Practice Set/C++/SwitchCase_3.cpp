// Implement a basic calculator

#include<iostream>
using namespace std;

int main(){
    
    int num1, num2, choice;
    
    cout<<"Enter first number : ";
    cin>>num1;
    
    cout<<"Enter second number : ";
    cin>>num2;
    cout<<endl;
    
    cout<<"1.ADD  2.SUBTRACT  3.MULTIPLY  4.DIVIDE"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
    cout<<endl;
    
    switch(choice){
        
        case 1 : cout<<"Sum of "<<num1<<" and "<<num2<<" is : "<<num1+num2<<endl;
        break;
        
        case 2 : cout<<"Subtraction of "<<num1<<" and "<<num2<<" is : "<<num1-num2<<endl;
        break;
        
        case 3 : cout<<"Multiplication of "<<num1<<" and "<<num2<<" is : "<<num1*num2<<endl;
        break;
        
        case 4 : cout<<"Division of "<<num1<<" and "<<num2<<" is : "<<num1/num2<<endl;
        break;
        
        default : cout<<"Wrong choice !"<<endl;
    }
}