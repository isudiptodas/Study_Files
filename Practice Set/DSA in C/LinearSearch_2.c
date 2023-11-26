#include <stdio.h>

int main(){
  int size, element;

  printf("Enter the size of the array : ");
  scanf("%d", &size);
  int arr[size];

  printf("Enter the elements of the array : ");
  for(int i=0; i<size; i++){
    scanf("%d", &arr[i]);
  }
  
  printf("Enter the element you want to search : ");
  scanf("%d", &element);

  int found = 0; 

  for(int i=0; i<size; i++){
    if(arr[i]==element){
      printf("Element %d found at index %d.\n", element, i);
      found = 1;
      break;
    }
  }

  if(!found) {
    printf("Element not found in the array\n");
  }
  
  return 0;
}
