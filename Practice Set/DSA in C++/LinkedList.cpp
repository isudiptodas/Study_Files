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
    
    // Creating nodes
    NODE *first = new NODE(5);
    NODE *second = new NODE(7);
    NODE *third = new NODE(10);
    NODE *fourth = new NODE(15);
    
    // Linking nodes
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;
    
    // Traverse the linked list and print
    
    NODE *head = first;
    
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }

    
}