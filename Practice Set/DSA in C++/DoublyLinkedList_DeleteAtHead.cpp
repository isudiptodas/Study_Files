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

// Function to delete at beginning
void deleteAtBeginning(Node* &head){
    if (head != NULL) {
        Node *temp = head;
        head = head->next;

        // Update the prev pointer of the new head (if it exists)
        if (head != NULL) {
            head->prev = NULL;
        }

        delete temp;
    }
}


int main(){
    
    Node *head = new Node(2);
    head->prev = NULL;
    print(head);
    
    Node *second = new Node(4);
    second->prev = head;
    head->next = second;
    print(head);
    
    Node *third = new Node(7);
    second->next = third;
    third->prev = second;
    print(head);
    
    Node *fourth = new Node(10);
    third->next = fourth;
    fourth->prev = third;
    print(head);
    
    Node *fifth = new Node(15);
    fourth->next = fifth;
    fifth->prev = fourth;
    fifth->next = NULL;
    
    
    deleteAtBeginning(head);
    print(head);
    
    deleteAtBeginning(head);
    print(head);
    
}