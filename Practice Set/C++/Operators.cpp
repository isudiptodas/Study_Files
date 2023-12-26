#include<iostream>
using namespace std;

int main(){
    
    int age;
    float height;
    int weight;
    
    cout<<"Enter your age between 21-25 : ";
    cin>>age;
    if(age>25 || age<21){
        cout<<"Enter valid age";
    }
    else{
    cout<<"Enter your height : ";
    cin>>height;
    if(height>6.5 || height<6.0){
        cout<<"Enter a valid height";
    }
    else{
    cout<<"Enter your weight : ";
    cin>>weight;
    if(weight<70 || weight>80){
        cout<<"Enter a valid weight";
    }
    else{
    if(age>=21 || age <=25 && height >= 6.0 || height <= 6.5 && weight >= 70 || weight <= 80){
        cout<<"You are fit";
    }
    else{
        cout<<"You are not fit";
    }
    }
    }
    }
}