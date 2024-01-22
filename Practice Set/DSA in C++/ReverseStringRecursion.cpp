/* 
Reverse string using recursion. First declare a base 
condition. Then solve one step and recursion will do the rest.
*/

#include<iostream>
using namespace std;

void reverse(string &s, int start, int end){
    
    if(start>end){
        return;
    }
    
    int temp = s[start];
    s[start] = s[end];
    s[end] = temp;
    
    start++;
    end--;
    
    reverse(s, start, end);
}

int main(){
    
    string s = "Hello";
    
    reverse(s, 0, s.length()-1);
    
    cout<<s;
}