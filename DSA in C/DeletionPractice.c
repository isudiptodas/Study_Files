#include<stdio.h>

void deletion(int arr[], int size, int index){
    for(int i = index-1; i < size-1; i++){
        arr[i] = arr[i + 1]; 
    }
}

int main(){

int arr[100]={5, 10, 25, 45, 67};
int size = 5;
int index = 2;

printf("Array before deletion\n");
for(int i=0; i<size;i++){
    printf("%d\n", arr[i]);
}

deletion(arr, size, index);
size--;

printf("Array after deletion\n");
for(int i = 0; i<=size; i++){
    printf("%d\n", arr[i]);
}

return 0;
}