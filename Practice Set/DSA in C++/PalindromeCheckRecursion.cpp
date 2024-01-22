/* 
Reverse string using recursion. First declare a base 
condition. Then solve one step and recursion will do the rest.
*/

#include<iostream>
using namespace std;

bool palindromeCheck(string s, int start, int end){
    
    if(start>end){
        return true;
    }
    if(s[start]!=s[end]){
        return false;
    }
    else{
        return palindromeCheck(s, start+1, end-1);
    }
}

int main(){
    
    string pal = "america";
    
    bool ans = palindromeCheck(pal, 0, pal.length()-1);
    
    if(ans){
        cout<<pal<<" is palindrome";
    }
    else{
        cout<<pal<<" is not palindrome";
    }
    
}