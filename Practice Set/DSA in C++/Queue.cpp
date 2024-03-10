#include<iostream>
#include<queue>
using namespace std;

int main(){
    
    queue<int>q;
    
    q.push(10);
    q.push(12);
    q.push(17);
    
    cout<<"Front of queue is : "<<q.front()<<endl;
    
    q.pop();
    
    cout<<"Front of queue is : "<<q.front()<<endl;
    cout<<"Size of queue is : "<<q.size()<<endl;
    
}