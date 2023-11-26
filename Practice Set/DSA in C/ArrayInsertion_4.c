#include <stdio.h>

int main(){
  int size, index, element;

  printf("Enter the size of the array : ");
  scanf("%d", &size);
  int arr[size];
  
  printf("Enter the elements of the array : ");
  for(int i=0; i<size; i++){
    scanf("%d", &arr[i]);
  }

  printf("Enter the element you want to insert : ");
  scanf("%d", &element);

  printf("Enter the index on which you want to enter the element : ");
  scanf("%d", &index);
  
  if(index < 0 || index > size){
    printf("Invalid index ! ");
    return 1;
  }
  
  for(int i=size-1; i>=index; i--){
    arr[i+1]=arr[i];
  }
  arr[index] = element;
  
  printf("Array after insertion : ");
  for(int i=0; i<=size; i++){
    printf("%d ", arr[i]);
  }
  
  return 0;
}