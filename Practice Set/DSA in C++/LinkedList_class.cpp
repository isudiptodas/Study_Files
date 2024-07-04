#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(int d){
        data = d;
        next = nullptr;
    }
};

class LinkedList{
public:
    Node *head = nullptr;

    void insertAtBeginning(int val){
        if(head==nullptr){
            head = new Node(val);
        }
        else{
            Node *temp = new Node(val);
            temp->next = head;
            head = temp;
        }

        cout<<"INSERTED AT BEGINNING ! "<<endl;
    }

    void insertAtEnd(int val){
        if(head==nullptr){
            head = new Node(val);
        }
        
        Node *temp = head;
        while(temp->next!=nullptr){
            temp = temp->next;
        }
        
        temp->next = new Node(val);
        cout<<"INSERTED AT END ! "<<endl;
    }

    void deleteAtBeginning(){
        if(head == nullptr){
            cout<<"LINKED LIST DOES NOT EXIST !"<<endl;
            return;
        }

        Node *temp = head;
        head = head->next;
        delete  temp;
        cout<<"DELETED FROM BEGINNING ! "<<endl;
    }

    void deleteAtEnd(){
        if(head == nullptr){
            cout<<"LINKED LIST DOES NOT EXIST !"<<endl;
            return;
        }

        Node *temp = head;
        while(temp->next->next!=nullptr){
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
        cout<<"DELETED FROM END ! "<<endl;
    }

    void display(){
        if(head == nullptr){
            cout<<"LINKED LIST IS EMPTY ! "<<endl;
            return;
        }

        cout<<"LINKED LIST ELEMENTS: "<<endl;
        Node *temp = head;
        while(temp!=nullptr){
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main(){

    LinkedList list;
    list.insertAtBeginning(5);
    list.insertAtBeginning(12);
    list.insertAtBeginning(34);
    list.insertAtBeginning(21);
    list.insertAtBeginning(17);
    list.display();
    list.insertAtEnd(99);
    list.insertAtEnd(90);
    list.insertAtEnd(23);
    list.insertAtEnd(49);
    list.display();
    list.deleteAtBeginning();
    list.deleteAtEnd();
    list.display();

}