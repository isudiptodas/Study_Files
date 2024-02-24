// Inserting new node in linked list

#include<iostream>
using namespace std;

class NODE{
    
    public:
    
    int data;
    NODE *next;
    
    NODE(int data){
        this->data = data;
    }
};

int main(){
    
    int arr[] = {4, 7, 12, 11, 18, 10};
    
    NODE *head;
    
    // Inserting node 
    for(int i=0; i<6; i++){
        
        // Checking if node is empty
        if(head==NULL){
            head = new NODE(arr[i]);
        }
        else{
            NODE *temp = new NODE(arr[i]);
            temp->next = head;
            head = temp;
        }
    }
    
    // Printing all the nodes
    
    NODE *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
}