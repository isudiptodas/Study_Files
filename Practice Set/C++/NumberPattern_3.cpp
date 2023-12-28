#include<iostream>
using namespace std;

int main(){
    
    int num;
    int i, count = 1;
    
    cout<<"Enter a number : ";
    cin>>num;
    
    while(i<=num){
        
        int j = 1;
        
        while(j<=i){
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}