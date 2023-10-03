#include<iostream>
using namespace std;

int main(){

    int age;

    cout<<"Enter your age : ";
    cin>>age;

    if(age > 18){
        cout<<"you are an adult"<<endl;
    }
    else if(age>=18){
        cout<<"congrats! you're an adult now"<<endl;
    }
    else{
        cout<<"you're still a kid"<<endl;
    }

    return 0;
}