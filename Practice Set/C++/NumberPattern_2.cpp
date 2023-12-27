/* 
Print the row number in each row with number of 
columns same as number of rows
*/

#include<iostream>
using namespace std;

int main(){
    
    int num;
    
    cout<<"Enter a number : ";
    cin>>num;
    
    int row = 1;
    
    while(row<=num){
        int col = 1;
        
        while(col<=row){
            cout<<row<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
}
