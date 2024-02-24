#include<iostream>
using namespace std;

class NODE{
    
    public:
    int data;
    NODE*next;
    
    NODE(int data){
        this->data = data;
    }
};

void update(NODE* &head, int pos, int val){
    
    int current = 0;
    NODE *temp = head;
    
    while(current!=pos){
        temp = temp->next;
        current++;
    }
    
    temp->data = val;
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
    
    NODE *head = new NODE(7);
    
    NODE *second = new NODE(11);
    head->next = second;
    
    NODE *third = new NODE(15);
    second->next = third;
    
    NODE *fourth = new NODE(17);
    third->next = fourth;
    
    fourth->next = NULL;
    
    print(head);
    update(head, 2, 22);
    print(head);
}