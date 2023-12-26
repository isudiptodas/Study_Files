// Find a character is lower case, upper case or numeric

#include<iostream>
using namespace std;

int main(){
    
    char ch;
    
    cout<<"Enter your character : ";
    cin>>ch;
    
    if(ch>='A' && ch<='Z'){
        cout<<"Character is in upper case ";
    }
    else if(ch>='a' && ch<='z'){
        cout<<"Character is in lower case ";
    }
    else if(ch>='0' && ch<='9'){
        cout<<"Numeric character ";
    }
    else{
        cout<<"Enter a valid character ";
    }
    
}