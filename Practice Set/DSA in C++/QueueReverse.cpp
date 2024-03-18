// Reverse a queue

#include<iostream>
#include<queue>
#include<stack>
using namespace std;

int main(){
    
    queue<int>q;
    stack<int>s;
    
    int arr[] = {3, 7, 11, 15, 17};
    
    for(int i=0; i<sizeof(arr)/sizeof(int); i++){
        q.push(arr[i]);
    }
    
    int n = q.size();
    
    cout<<"Before queue reverse : ";
    while(n--){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
    cout<<endl;
    
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    
    n = q.size();
    
    cout<<"After queue reverse : ";
    while(n--){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
    
}