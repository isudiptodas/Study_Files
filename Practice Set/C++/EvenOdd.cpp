// Implement a function to find a number is even or odd

#include<iostream>
using namespace std;

int evenOdd(int n){
    
    bool isEven = 0;
    
    if(n%2==0){
        isEven = 1;
    }
    
    if(isEven!=0){
        cout<<n<<" is an even number "<<endl;
    }
    else{
        cout<<n<<" is an odd number "<<endl;
    }
    
    return 0;
}

int main(){
    
    int num;
    
    cout<<"Enter a number : ";
    cin>>num;
    
    evenOdd(num);
    
}