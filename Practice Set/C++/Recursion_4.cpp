// LeetCode problem : say numbers

#include<iostream>
using namespace std;

void sayNumbers(string arr[], int n){
    if(n==0){
        return;
    }
    
    int digit = n%10;
    n = n/10;
    
    sayNumbers(arr, n);
    
    cout<<arr[digit]<<" ";
}

int main(){
    
    int n;
    string arr[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cout<<"Enter number : ";
    cin>>n;
    
    sayNumbers(arr, n);
    
}

