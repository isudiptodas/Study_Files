#include<stdio.h>
# define MAX_SIZE 100

struct stack{
    int stack[MAX_SIZE];
    int top;
};

int main(){
    
    int size;
    
    printf("Enter stack size : ");
    scanf("%d", &size);
    if(size>MAX_SIZE || size<0){
        printf("Invalid size ");
    }
    else{
        struct stack stack;
        stack.top = -1;
        
        printf("Stack created successfully \n");
        printf("\n");
        printf("1.Push\t 2.Pop\t 3.Display\t 4.Exit");
        printf("Enter your choice ");
        int choice;
        scanf("%d", &choice);
    
        switch(choice){
            
        case 1:
        if(stack.top==size-1){
            printf("Stack is full. Cannot push more elements.");
        }
        else{
            int element;
            printf("Enter the element you want to push : ");
            scanf("%d", &element);
            stack.stack[++stack.top]=element;
            printf("Element %d pushed into the stack.", element);
        }
        break;
    
        case 2:
        if(stack.top==-1){
            printf("Stack is empty. Cannot pop from empty stack");
        }
        else{
            printf("Element %d popped from the stack", stack.stack[stack.top--]);
        }
        break;
        
        case 3:
        if(stack.top==-1){
            printf("Stack is empty. Cannot display elements");
        }
        else{
            for(int i=0; i<=stack.top; i++){
                printf("%d ", stack.stack[i]);
            }
        }
        break;
        
        case 4:
        printf("Exiting the program.");
        break;
        
        default:
        printf("Invalid choice !");
        break;
        }
        
    }
    
    return 0;
}
