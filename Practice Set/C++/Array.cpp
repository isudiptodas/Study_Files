/*

Create an array then take name and date of birth 
as input from users and print them.

*/

#include<iostream>
using namespace std;

int main(){
    
    int size;
    
    cout<<"Enter the size of the array : ";
    cin>>size;
    
    string name[size];
    string dob[size];
    
    cin.ignore();
    
    cout<<"Enter "<<size<<" names : "<<endl;
    for(int i=0; i<size; i++){
        getline(cin,name[i]);
    }
    
    cout<<"Enter "<<size<<" date of birth : "<<endl;
    for(int i=0; i<size; i++){
        cin>>dob[i];
    }
    
    cout<<"Names & date of birth : "<<endl;
    for(int i=0; i<size; i++){
        cout<<name[i]<<" - "<<dob[i]<<endl;
    }
    
}