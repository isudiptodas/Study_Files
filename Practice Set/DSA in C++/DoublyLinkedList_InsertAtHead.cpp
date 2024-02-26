// Doubly LinkedList

#include<iostream>
using namespace std;

class Node{
    
    public:
    int data;
    Node *next;
    Node *prev;
    
    Node(int data){
        this->data = data;
        prev = next = NULL;
    }
};

// Function to print linked list
void print(Node* &head){
    Node *trav = head;
    while(trav!=NULL){
        cout<<trav->data<<" ";
        trav = trav->next;
    }
    cout<<endl;
}

// Function to insert at beginning
void insertAtBeginning(Node* &head, int data){
    
    Node* temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}


int main(){
    
    Node *head = NULL;
    
    // Inserting at start
    
    // If node not exists
    if(head==NULL){
        head = new Node(7);
    }
    // If node exists
    else{
        Node *temp = new Node(15);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    
    insertAtBeginning(head, 12);
    print(head);
    
    insertAtBeginning(head, 24);
    print(head);
    
    insertAtBeginning(head, 18);
    print(head);
    
    insertAtBeginning(head, 43);
    print(head);
}