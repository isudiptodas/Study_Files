#include<stdio.h>

void insertion(int arr[], int size, int element, int index){
    for(int i = size-1; i >= index; i--){
        arr[i + 1] = arr[i]; 
    }
}

int main(){

int arr[100];
int size;
int element;
int index;

printf("Enter the size of the array : ");
scanf("%d", &size);
if(size < 0 || size > 100){
    printf("Enter valid size (1 - 100)");
    return -1;
}

printf("Enter the elements of the array : ");
for(int i = 0; i < size; i++){
    scanf("%d", &arr[i]);
}

printf("Enter the insertion index : ");
scanf("%d", &index);
if(index < 0 || index > size){
    printf("Enter valid index ");
    return -1;
}

printf("Enter the element you want to insert : ");
scanf("%d", &element);

printf("Array before insertion\n");
for(int i=0; i<size;i++){
    printf("%d\n", arr[i]);
}

insertion(arr, size, element, index);
arr[index] = element;

printf("Array after insertion\n");
for(int i = 0; i<=size; i++){
    printf("%d\n", arr[i]);
}

return 0;
}
