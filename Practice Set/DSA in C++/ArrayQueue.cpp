#include<iostream>
using namespace std;

class queue{
    
    int *arr;
    int front, rear, size;
    
    public:
    
    queue(int n){
        arr = new int[n];
        front = -1;
        rear = -1;
        size = n;
    }
    
    bool isEmpty(){
        return front==-1;
    }
    
    bool isFull(){
        return rear == size-1;
    }
    
    void push(int x){
        if(isEmpty()){
            front = 0;
            rear = 0;
            arr[0] = x;
        }
        else if(isFull()){
            cout<<"QUEUE OVERFLOW";
            return;
        }
        else{
            rear = rear+1;
            arr[rear] = x;
        }
    }
    
    void pop(){
        if(isEmpty()){
            cout<<"QUEUE UNDERFLOW";
            return;
        }
        else{
            if(front==rear){
                front = -1;
                rear = -1;
            }
            else{
                front = front + 1;
            }
        }
    }
    
    int getFront(){
        if(isEmpty()){
            cout<<"QUEUE UNDERFLOW";
            return -1;
        }
        else{
            return arr[front];
        }
    }
};

int main(){
    
    queue q(5);
    
    q.push(7);
    q.push(10);
    q.push(11);
    q.push(18);
    q.push(21);
    
    cout<<q.getFront()<<endl;
    
    q.pop();
    q.pop();
    
    cout<<q.getFront()<<endl;
    
}