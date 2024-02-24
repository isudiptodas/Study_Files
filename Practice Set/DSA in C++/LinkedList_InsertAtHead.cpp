#include<iostream>
using namespace std;

class NODE{
    
    public:
    int data;
    NODE*next;
    
    NODE(int data){
        this->data = data;
        next = NULL;
    }
};

void insertAtHead(NODE* &head, int data){
    
    NODE *new_node = new NODE(data);
    new_node->next = head;
    head = new_node;
}

void print(NODE *head){
    
    NODE *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    
    NODE *head = NULL;
    
    insertAtHead(head, 7);
    print(head);
    insertAtHead(head, 11);
    print(head);
    insertAtHead(head, 15);
    print(head);
    insertAtHead(head, 17);
    print(head);
    
}