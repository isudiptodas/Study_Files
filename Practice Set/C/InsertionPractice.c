#include <stdio.h>

int main() {
    int arr[100];
    int size;
    int element;
    int index;

    printf("Enter the number of elements in array : ");
    scanf("%d", &size);

    if (size > 100) {
        printf("Size should be within 100 ");
        return 1;  // Return an error code to exit the program
    }

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the index: ");
    scanf("%d", &index);

    if (index < 0 || index > size) {
        printf("Invalid index !");
        return 1;  // Return an error code to exit the program
    }

    printf("Enter the element you want to insert: ");
    scanf("%d", &element);

    // Shift elements to the right to make space for the new element
    for (int i = size - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new element
    arr[index] = element;

    size++;  // Increase the size of the array

    printf("Array after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
