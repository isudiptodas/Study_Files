/*
Print numbers on a row and continue on the second
row with the next count of numbers after the numbers
of first row.
*/

#include<iostream>
using namespace std;

int main(){
    
    int num = 4;
    int i = 1;
    int counter = 1;
    
    while(i<=4){
        int j = 1;
         while(j<=4){
            cout<<counter<<" ";
            counter++;
            j++;
        }
        cout<<endl;
        i++;
    }
}
