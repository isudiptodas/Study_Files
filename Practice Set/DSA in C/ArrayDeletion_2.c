#include <stdio.h>

int main(){
  int size, index;

  printf("Entet the size of the array : ");
  scanf("%d", &size);
  int arr[size];

  printf("Enter the elements of the array : ");
  for(int i=0; i<size; i++){
    scanf("%d", &arr[i]);
  }

  printf("Enter the index you want to delete element from : ");
  scanf("%d", &index);
  if(index > size || index < 0){
    printf("Invalid index !");
    return 1;
  }

  printf("Array before deletion ");
  for(int i=0; i<size; i++){
    printf("%d ", arr[i]);
  }

  for(int i = index; i< size-1; i++){
    arr[i]= arr[i+1];
  }
  size--;

  printf("Array after deletion ");
  for(int i=0; i<size; i++){
    printf("%d ", arr[i]);
  }

  return 0;
}