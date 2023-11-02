#include<stdio.h>
int main(){

 int start, end;
 // Prompt the user to enter the range
 printf("Enter the starting number: ");
 scanf("%d", &start);
 printf("Enter the ending number: ");
 scanf("%d", &end);
 // Ensure the starting number is odd
 if (start % 2 == 0) {
 start++;
 }
 // Generate and print all odd numbers within the range
 printf("Odd numbers in the range %d to %d are:\n", start, end);
 for (int i = start; i <= end; i += 2) {
 printf("%d\n", i);
 }

 return 0;

}