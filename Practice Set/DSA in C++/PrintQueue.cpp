// Print all elements of the queue

#include<iostream>
#include<queue>
using namespace std;

int main(){
    
    queue<int>q;
    
    int arr[] = {3, 7, 11, 15, 17};
    
    for(int i=0; i<sizeof(arr)/sizeof(int); i++){
        q.push(arr[i]);
    }
    
    int n = q.size();
    
    while(n--){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
    
}