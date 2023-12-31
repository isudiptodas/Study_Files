/*

Take input from user of array size and elements
and print the sum, multiplication, subtraction and
division.

*/

#include<iostream>
using namespace std;

int main(){
    
    int size, choice;
    int sum = 0;
    int minus = 1;
    int multiply = 1;
    
    cout<<"Enter the size of array : ";
    cin>>size;
    
    int arr[size];
    
    cout<<"Enter the array elements : ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    
    do{
        cout<<"Select operation with elements : "<<endl;
        cout<<"1.SUM   2.SUBTRACTION  3.MULTIPLY  4.EXIT"<<endl;
        cout<<"Enter your choice : ";
        
        cin>>choice;
        
        cout<<endl;
        
        switch(choice){
            
            case 1 : 
            
            for(int i=0; i<size; i++){
                sum = sum + arr[i];
            }
            
            cout<<"Sum of elements are : "<<sum<<endl;
            cout<<endl;
            
            break;
            
            case 2 : 
            
            for(int i=1; i<size; i++){
                minus = minus - arr[i];
            }
            
            cout<<"Subtraction of elements are : "<<minus<<endl;
            cout<<endl;
            
            break;
            
            case 3 : 
    
            for(int i=0; i<size; i++){
                multiply = multiply * arr[i];
            }
            
            cout<<"Multiplication of elements are : "<<multiply<<endl;
            cout<<endl;
            
            break;
            
            
        }
    }
    while(choice!=4);
}