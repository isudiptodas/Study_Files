// Display 1-10 using while, do-while and for loop

#include<iostream>
using namespace std;

int main(){
    
    int num = 1;
    
    cout<<"In while loop"<<endl;
    while(num!=11){
        cout<<num<<endl;
        num++;
    }
    
    num = 1;
    
    cout<<"In do-while loop"<<endl;
    do{
        cout<<num<<endl;
        num++;
    }
    while(num!=11);
    
    cout<<"In for loop"<<endl;
    for(int i=1; i<11; i++){
        cout<<i<<endl;
    }
    
}