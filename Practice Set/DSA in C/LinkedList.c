#include <stdio.h>

// Define a basic structure for a node in the linked list
struct Node {
    int data;           // Data stored in the node
    struct Node* next;  // Pointer to the next node
};

int main() {
    // Creating three nodes
    struct Node node1, node2, node3;

    // Assigning data to each node
    node1.data = 1;
    node2.data = 2;
    node3.data = 3;

    // Linking the nodes
    node1.next = &node2;
    node2.next = &node3;
    node3.next = NULL;  // The last node's next is set to NULL to indicate the end of the list

    // Accessing and printing data from each node
    printf("Node 1 data: %d\n", node1.data);
    printf("Node 2 data: %d\n", node1.next->data);
    printf("Node 3 data: %d\n", node1.next->next->data);

    return 0;
}
