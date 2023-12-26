/* 
Print a pattern whose number of rows and
columns will be same and there will be same numbers 
in every column as of the row number.
*/

#include<iostream>
using namespace std;

int main(){
    
    int num = 4;
    int i = 1;
    
    while(i<=num){
       
        int j = 1;
        
        while(j<=num){
            cout<<i ;
            j++;
        }
        cout<<endl;
        i++;
        
    }
    
}