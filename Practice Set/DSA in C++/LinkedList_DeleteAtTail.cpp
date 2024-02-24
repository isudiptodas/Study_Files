#include<iostream>
using namespace std;

class NODE{
public:
    int data;
    NODE* next;

    NODE(int data){
        this->data = data;
        next = NULL;
    }
};

void deleteAtTail(NODE* &head){
    
    NODE* second_last = head;
    
    while(second_last->next->next!=NULL){
        second_last = second_last->next;
    }
    
    NODE *temp = second_last->next;
    second_last->next = NULL;
    free(temp);
}

void print(NODE *head){
    NODE *temp = head;
    while(temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main(){
    NODE *head = new NODE(7);

    NODE *second = new NODE(11);
    head->next = second;

    NODE *third = new NODE(15);
    second->next = third;

    NODE *fourth = new NODE(17);
    third->next = fourth;
    fourth->next = NULL;

    print(head);
    deleteAtTail(head);
    print(head);
    deleteAtTail(head);
    print(head);

    return 0;
}
