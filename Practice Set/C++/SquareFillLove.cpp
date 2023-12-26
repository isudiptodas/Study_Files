//  Print square fill love pattern

#include<iostream>
using namespace std;

int main(){
    
    int i=1;
    int num = 5;
    
    while(i<=num){
        
        int j=1;
        while(j<=num){
            cout<<"♡ ";
            j++;
        }
        cout<<endl;
        
        i++;
    }
    
    
}