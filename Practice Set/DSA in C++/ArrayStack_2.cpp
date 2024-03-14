#include<iostream>
using namespace std;

class stack{
    
    public:
    int top;
    int *arr;
    int size;
    
    stack(int size){
        this->size = size;
        top = -1;
        arr = new int[size];
    }
    
    bool isEmpty(){
        return top==-1;
    }
    
    bool isFull(){
        return top==size-1;
    }
    
    void push(int x){
        if(isFull()){
            cout<<"STACK IS FULL"<<endl;
            return;
        }
        else{
            top++;
            arr[top] = x;
            cout<<x<<" pushed in the stack"<<endl;
            return;
        }
    }
    
    void pop(){
        if(isEmpty()){
            cout<<"STACK IS EMPTY"<<endl;
            return;
        }
        else{
            cout<<arr[top]<<" popped from the stack"<<endl;
            top--;
            return;
        }
    }
    
    int peek(){
        if(top==-1){
            return -1;
        }
        else{
            return arr[top];
        }
    }
    
    void print(int *arr){
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
    }
    
    
};

int main(){
    
    int size;
    int choice;
    int val;
    
    cout<<"Enter the size of the stack : ";
    cin>>size;
    stack s(size);
    
    cout<<"1.PUSH 2.POP 3.DISPLAY 4.PEEK 5.EXIT"<<endl;
    
    do{
        cout<<"Enter your choice : ";
        cin>>choice;
        
        switch(choice){
            
            case 1:
            cout<<"Enter the value to push : ";
            cin>>val;
            s.push(val);
            break;
            
            case 2:
            s.pop();
            break;
            
            case 3:
            s.print(s.arr);
            break;
            
            case 4:
            cout<<"Top element is : "<<s.peek()<<endl;
            break;
        }
    }
    while(choice!=5);
    
    
}





