#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct Stack {
    int array[MAX_SIZE];
    int top;
};

// Function to initialize the stack
void initialize(struct Stack *stack) {
    stack->top = -1; // Initialize top to -1 to indicate an empty stack
}

// Function to check if the stack is empty
int isEmpty(struct Stack *stack){
    if(stack.top==-1){
        printf("Stack is empty! ");
    }
    else{
        printf("Stack is not empty!")
    }
}

// Function to check if the stack is full
int isFull(struct Stack *stack){
    if(stack.top==stack.sixe-1){
        printf("Stack is full!");
    }
    else{
        printf("Stack is not full!");
    }
}

// Function to push an element onto the stack
void push(struct Stack *stack, int value) {
    if (isFull(stack)) {
        printf("Stack Overflow\n");
        return;
    }
    stack->array[++stack->top] = value;
}

// Function to pop an element from the stack
int pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow\n");
        return -1; // Indicates an empty stack
    }
    return stack->array[stack->top--];
}

int main(){
    struct Stack stack;
    
    initialize(&stack);
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    printf("Popped element: %d\n", pop(&stack));
    printf("Popped element: %d\n", pop(&stack));
    printf("Is the stack empty? %s\n", isEmpty(&stack) ? "Yes" : "No");

    return 0;
}
