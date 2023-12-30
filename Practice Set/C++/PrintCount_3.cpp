/*
Take input from user, one for starting range and
another for ending range and print how many numbers
come between that range.
*/

#include<iostream>
using namespace std;

void printCount(int start, int end){
    
    int count = 0;
    
    if(end < start){
        cout<<"Ending range cannot be higher than starting range";
    }else{
        for(int i = start; i <= end; i++){
            count++;
        }
        cout<<"Numbers come between "<< start<<" and "<< end<<" is "<<count<<" ";
    }
}

int main(){
    
    int numStart, numEnd;
    
    cout<<"Enter the starting range : ";
    cin>>numStart;
    
    cout<<"Enter the ending range : ";
    cin>>numEnd;
    
    printCount(numStart, numEnd);
    
}
