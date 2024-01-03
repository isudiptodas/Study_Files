// Find square root using binary search
/* 

Here we have used long data type so that if input will be
a number which is beyond integer storing capacity then the program
will still run as it will store in long data type.

*/

#include<iostream>
using namespace std;

int main(){
    
    long long int num;
    
    cout<<"Enter a number to find square root : ";
    cin>>num;
    
    int start = 0;
    int end = num;
    long long int mid = start + (end - start)/2;
    long long int answer = -1;
    
    while(start<=end){
        
        long long int squareRoot = mid*mid;
        
        if(squareRoot==num){
            cout<<"Answer is : "<<mid;
            return 0;
        }
        else if(squareRoot<num){
            answer = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        
        mid = start + (end - start)/2;
    }
    
}

