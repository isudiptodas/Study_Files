#include<stdio.h>
int main(){
 char ch;

 printf("Enter an alphabet: ");
 scanf(" %c", &ch);

 if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
 switch (ch) {
 case 'a':
 case 'e':
 case 'i':
 case 'o':
 case 'u':
 case 'A':
 case 'E':
 case 'I':
 case 'O':
 case 'U':
 printf("%c is a vowel.\n", ch);
 break;
 default:
 printf("%c is a consonant.\n", ch);
 }
 } 
 else{
 printf("Invalid input. Please enter an alphabet.\n");
 }

return 0;

}