#include<stdio.h>

void insertion(int arr[], int size, int element, int index){
    for(int i = size-1; i >= index; i--){
        arr[i + 1] = arr[i]; 
    }

}

int main(){

int arr[100]={5, 10, 25, 45, 67};
int size = 5;
int element = 58;
int index = 2;

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