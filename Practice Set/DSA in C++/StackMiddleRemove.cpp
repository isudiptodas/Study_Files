#include<iostream>
#include<stack>
using namespace std;

void deleteMiddle(stack<int> &stack, int curr, int mid){
    
    // Base case
    if(curr==mid){
        stack.pop();
        return;
    }
    
    // Recursive case
    int temp = stack.top();
    stack.pop();
    deleteMiddle(stack, curr+1, mid);
    stack.push(temp);
}

int main(){
    
  stack<int>myStack;
  
  for(int i=6; i>=1; --i){
      myStack.push(i);
  }
   
   int middle = myStack.size()/2;
   
   deleteMiddle(myStack, 0, middle);
   
   cout<<"Stack After removing middle element : ";
   while(!myStack.empty()){
       cout<<myStack.top()<<" ";
       myStack.pop();
   }
    
}