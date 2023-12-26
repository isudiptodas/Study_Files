// Find age and print the strings

#include<iostream>
using namespace std;

int main(){
    
    int age;
    
    cout<<"Enter your age : ";
    cin>>age;
    
    if(age>50){
        cout<<"You are buddha";
    }
    else if(age<20){
        cout<<"You are still a baccha";
    }
    else{
        cout<<"You are young and fit";
    }
    
}