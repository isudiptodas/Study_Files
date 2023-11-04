#include<stdio.h>

int linearSearch(int arr[], int size, int element){
    for(int i = 0; i < size; i++){
        if(arr[i]==element){
          return i;
        }
    }
    return -1;
}

int main(){

int arr[] = {4, 6, 8, 7, 12, 24, 35, 47, 82, 76};
int size = 10;
int element = 47;
int searchIndex = linearSearch(arr, size, element);

printf("Element found at index : %d\n", searchIndex);

return 0;
}