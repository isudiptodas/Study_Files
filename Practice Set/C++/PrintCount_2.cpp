// Take two input from user and print all the numbers between that range

#include<iostream>
using namespace std;

void printCount(int start, int end){
   
    if(end<start){
        cout<<"Ending range cannot be higher than starting range";
    }
    
    for(int i=start; i<=end; i++){
        cout<<i<<" ";
    }
}

int main(){
    
    int numStart, numEnd;
    
    cout<<"Enter the starting range : ";
    cin>>numStart;
    
    cout<<"Enter a number you want to print upto : ";
    cin>>numEnd;
    
    printCount(numStart, numEnd);
    
}