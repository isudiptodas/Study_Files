#include<stdio.h>
#define MAX_SIZE 100

struct stack{
    int stack[MAX_SIZE];
    int top;
};
    // To initialize the stack
    void initialize(struct stack *stack){
    stack->top = -1;
}

    // To check whether the stack is empty or not
    int  isEmpty(struct stack *stack){
    if(stack->top == -1){
        printf("Stack is empty \n");
    }
    else{
        printf("Stack is not empty \n");
    }
    }
    
    // To check whether the stack is full or not
    void isFull(struct stack *stack){
        if(stack->top == MAX_SIZE-1){
            printf("Stack is full\n");
        }
        else{
            printf("Stack is not full\n");
        }
    }
    
    // To push element
    void push(struct stack *stack, int element){
        if(stack->top < MAX_SIZE-1){
           int pushed = stack->stack[++stack->top] = element;
           printf("Element %d pushed in the stack \n", pushed);
        }
        else{
            printf("Stack is full. Cannot push more \n");
        }
    }
    
    // To pop element
    void pop(struct stack *stack){
        if(stack->top == -1){
            printf("Stack is empty. Cannot pop from empty stack \n");
        }
        else{
            int popped = stack->stack[stack->top--];
            printf("%d popped from the stack \n", popped);
        }
    }
    
    // To display 
    void display(struct stack *stack){
        for(int i=0; i<=stack->top; i++){
            printf("%d ", stack->stack[i]);
        }
        printf("\n ");
    }
    

int main(){
    
    struct stack stack;
    
    initialize(&stack);
    isFull(&stack);
    isEmpty(&stack);
    push(&stack,23);
    push(&stack,34);
    push(&stack,45);
    push(&stack,56);
    push(&stack,67);
    display(&stack);
    pop(&stack);
    pop(&stack);
    display(&stack);
    
    return 0;
}