/*

Take two input from user and make the user choose
whether they want print all the even numbers or odd
numbers between the given range and also count the numbers.

*/

#include<iostream>
using namespace std;

int isEven(int num){
    
    bool even = 0;
    
    if(num%2==0){
        even = 1;
    }
    
    return even;
}

void printEven(int start, int end){
    
    int count = 0;
    
    if(end<start){
        cout<<"Ending point must be higher than starting point";
    }
    else{
        for(int i=start; i<end; i++){
            if(isEven(i)){
                cout<<i<<" ";
                count++;
            }
        }
        cout<<endl<<"Total even numbers are "<<count<<endl;
    }
}

void printOdd(int start, int end){
    
    int count = 0;
    
    if(end<start){
        cout<<"Ending point must be higher than starting point";
    }
    else{
        for(int i=start; i<end; i++){
            if(!isEven(i)){
                cout<<i<<" ";
                count++;
            }
        }
        cout<<endl<<"Total odd numbers are "<<count<<endl;
    }
}


int main(){
    
    int start, end, choice;
    
    cout<<"Enter starting point : ";
    cin>>start;
    
    cout<<"Enter ending point : ";
    cin>>end;
    
    cout<<"1.PRINT EVEN NUMBERS  2.PRINT ODD NUMBERS"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
    
    switch(choice){
        
        case 1 : printEven(start, end); break;
        case 2 : printOdd(start, end); break;
        
        default : cout<<"Invalid choice";
        
    }
}