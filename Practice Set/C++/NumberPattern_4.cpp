#include<iostream>
using namespace std;

int main(){
    
    int row = 1;
    int num;
    
    cout<<"Enter a number : ";
    cin>>num;
    
    while(row<=num){
        
        int col = 1;
        int value = row;
        
        while(col<=row){
            cout<<value<<" ";
            value++;
            col++;
        }
        cout<<endl;
        row++;
        
    }
    
}