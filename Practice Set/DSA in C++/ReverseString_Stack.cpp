#include<iostream>
#include<stack>
using namespace std;

int main(){
    
    string input;
    cout<<"Enter a string : ";
    getline(cin, input);
    
    stack<char>charStack;
    
    for(int i=0; i<input.size(); i++){
        charStack.push(input[i]);
    }
    
    cout<<"Reversed array is : ";
    while(!charStack.empty()){
        cout<<charStack.top();
        charStack.pop();
    }
    
}