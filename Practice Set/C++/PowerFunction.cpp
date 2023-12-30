#include<iostream>
using namespace std;

int power(int a, int b){
    
    int answer = 1;
    
    for(int i=1; i<=b; i++){
        answer = answer * a;
    }
    
    return answer;
}

int main(){
    
    int num1, num2;
    
    cout<<"Enter two numbers you find power of : ";
    cin>>num1>>num2;
    
    cout<<"Power is : "<<power(num1, num2);
    
}