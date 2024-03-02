// Stack implementation using array

#include<iostream>
using namespace std;

class stack{
    
    int *arr;
    int size;
    int top;
    
    public:
    
    stack(int size){
        this->size = size;
        top = -1;
        arr = new int[size];
    }

// Function to push element in the stack
void push(int val){
    if(top==size-1){
        cout<<"STACK OVERFLOW"<<endl;
    }
    else{
        top++;
        arr[top] = val;
        cout<<val<<" pushed into the stack"<<endl;
    }
}

// Function to pop element from the stack
void pop(){
    if(top==-1){
        cout<<"STACK UNDERFLOW"<<endl;
    }
    else{
        cout<<arr[top]<<" popped from the stack"<<endl;
        top--;
    }
}

// Function to check top element
int peek(){
    
    if(top==-1){
        cout<<"STACK IS EMPTY"<<endl;
        return -1;
    }
    else{
        return arr[top];
    }
}

// Function to check if stack is empty or not
bool isEmpty(){
    return top==-1;
}

// Function to check the size of stack
int getSize(){
    return top+1;
}

};

int main(){
    
    stack s(5);
    
    s.push(2);
    s.push(5);
    s.push(7);
    s.push(10);
    s.pop();
    s.pop();
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;
    cout<<s.getSize()<<endl;
    
    
}