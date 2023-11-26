#include <stdio.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

int main() {
    int size;

    printf("Enter the size of the stack: ");
    scanf("%d", &size);

    if (size > MAX_SIZE) {
        printf("Stack size exceeds the maximum limit.\n");
        return 1;
    }

    int choice;
    do {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (top == size - 1) {
                    printf("Stack overflow. Cannot push more elements.\n");
                } else {
                    int element;
                    printf("Enter the element to push: ");
                    scanf("%d", &element);
                    stack[++top] = element;
                    printf("Element %d pushed onto the stack.\n", element);
                }
                break;

            case 2:
                if (top == -1) {
                    printf("Stack underflow. Cannot pop from an empty stack.\n");
                } else {
                    printf("Element %d popped from the stack.\n", stack[top--]);
                }
                break;

            case 3:
                if (top == -1) {
                    printf("Stack is empty.\n");
                } else {
                    printf("Stack elements: ");
                    for (int i = 0; i <= top; ++i) {
                        printf("%d ", stack[i]);
                    }
                    printf("\n");
                }
                break;

            case 4:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 4);

    return 0;
}
