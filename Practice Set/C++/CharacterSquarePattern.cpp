// Print character square pattern

#include<iostream>
using namespace std;

int main(){
    
    int num;
    int row = 1;
    
    cout<<"Enter a number : ";
    cin>>num;
    
    while(row<=num){
        
        int col = 1;
        
        while(col<=num){
            
            char ch = 'A'+ row -1 ;
            cout<<ch<<" ";
            ch++;
            col++;
        }
        cout<<endl;
        row++;
    }
    
}