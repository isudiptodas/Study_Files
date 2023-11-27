#include<stdio.h>
#define MAX_SIZE 100

struct stack{
    int stack[MAX_SIZE];
    int top;
};

int main(){
    
    struct stack stack;
    int size;
    stack.top = -1;
    
    printf("Enter the size of the stack : ");
    scanf("%d", &size);
    if(size>MAX_SIZE || size<0){
        printf("Enter a valid size !");
    }
    else{
        printf("Stack successfully created of size %d\n", size);
    }
    
    int choice;
    
    do{
        printf("1.PUSH\t 2.POP\t 3.DISPLAY\t 4.EXIT\n");
        printf("Enter your choice : ");
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
            }
            break;
            
            case 2:
            if(stack.top==-1){
                printf("Stack is empty. Cannot pop from an empty stack");
            }
            else{
               int poppedElement = stack.stack[stack.top--];
                printf("Element %d popped out from stack", poppedElement);
            }
            break;
            
            case 3:
            if(stack.top==-1){
                printf("Stack is empty. Cannot display empty stack");
            }
            else{
            printf("Stack elements : ");
            for(int i=0; i<=stack.top; i++){
                printf("%d ", stack.stack[i]);
            }
            }
            break;
            
            case 4:
            printf("Exiting the program ");
            break;
            
            default:
            printf("Invalid choice");
            break;
        }
        
        
    }
    while(choice!=4);
    
    return 0;
}