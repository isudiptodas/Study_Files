#include<stdio.h>
#include<string.h>

// Function to count the number of characters in a string
int countCharacters(char *str) {
 int count = 0;
 while (str[count] != '\0') {
 count++;
 }
 return count;
}

// Function to reverse a string
void reverseString(char *str) {
 int length = countCharacters(str);
 int start = 0;
 int end = length - 1;
 while (start < end) {
 
 // Swap characters at the start and end positions
 char temp = str[start];
 str[start] = str[end];
 str[end] = temp;
 start++;
 end--;
 }
}

int main(){

 char inputString[100];
 printf("Enter a string: ");
 gets(inputString); // You can use gets() for simplicity, but it's not recommended in practice.
 printf("Number of characters in the string: %d\n", countCharacters(inputString));
 printf("Original String: %s\n", inputString);
 reverseString(inputString);
 printf("Reversed String: %s\n", inputString);
 
 return 0;

}