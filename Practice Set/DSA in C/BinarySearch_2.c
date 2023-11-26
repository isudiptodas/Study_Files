#include <stdio.h>

int main(){
  int size, element;
  int mid, high, low;
  int found = 0;
  
  printf("Enter the size of the array : ");
  scanf("%d", &size);

  int arr[size];

  printf("Enter the elements of the array : ");
  for(int i=0; i<size; i++){
    scanf("%d", &arr[i]);
  }

  printf("Enter the element you want to search : ");
  scanf("%d", &element);

  low = 0;
  high = size-1;
  
  while(low<=high){
    mid = (low+high)/2;

    if(arr[mid]==element){
      found = 1;
      printf("Element %d found at index %d", element, mid);
      break;
    }
    else if(arr[mid]<element){
      low = mid+1;
    }
    else{
      high = mid-1;
    }
  }

  if(!found){
    printf("Element not found ");
  }
  
  return 0;
}