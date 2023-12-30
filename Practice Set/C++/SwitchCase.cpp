#include<iostream>
using namespace std;

int main(){
    
    int num;
    
    cout<<"Enter a number between 1-9 : ";
    cin>>num;
    
    switch(num){
        
        case 1 : cout<<"First case"<<endl; break;
        case 2 : cout<<"Second case"<<endl; break;
        case 3 : cout<<"Third case"<<endl; break;
        case 4 : cout<<"Forth case"<<endl; break;
        case 5 : cout<<"Fifth case"<<endl; break;
        case 6 : cout<<"Sixth case"<<endl; break;
        case 7 : cout<<"Seventh case"<<endl; break;
        case 8 : cout<<"Eighth case"<<endl; break;
        case 9 : cout<<"Ninth case"<<endl; break;
        
        default: cout<<"Enter number between 1-9"<<endl;
    }
}