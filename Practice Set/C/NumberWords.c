#include <stdio.h>
// Function to print numbers from 1 to 9 in words
void print1to9(int num) {
 switch (num) {
 case 1: printf("One "); break;
 case 2: printf("Two "); break;
 case 3: printf("Three "); break;
 case 4: printf("Four "); break;
 case 5: printf("Five "); break;
 case 6: printf("Six "); break;
 case 7: printf("Seven "); break;
 case 8: printf("Eight "); break;
 case 9: printf("Nine "); break;
 }
}
// Function to print numbers from 10 to 19 in words
void print10to19(int num) {
 switch (num) {
 case 10: printf("Ten "); break;
 case 11: printf("Eleven "); break;
 case 12: printf("Twelve "); break;
 case 13: printf("Thirteen "); break;
 case 14: printf("Fourteen "); break;
 case 15: printf("Fifteen "); break;
 case 16: printf("Sixteen "); break;
 case 17: printf("Seventeen "); break;
 case 18: printf("Eighteen "); break;
 case 19: printf("Nineteen "); break;
 }
}
// Function to print tens in words
void printTens(int num) {
 switch (num) {
 case 2: printf("Twenty "); break;
 case 3: printf("Thirty "); break;
 case 4: printf("Forty "); break;
 case 5: printf("Fifty "); break;
 case 6: printf("Sixty "); break;
 case 7: printf("Seventy "); break;
 case 8: printf("Eighty "); break;
 case 9: printf("Ninety "); break;
 }
}
int main() {
 int num;
 for (num = 1; num < 100; num++) {
 if (num < 10) {
 print1to9(num);
 } else if (num >= 10 && num < 20) {
 print10to19(num);
 } else {
 int tens = num / 10;
 int ones = num % 10;
 printTens(tens);
 print1to9(ones);
 }
 
 if (num % 10 == 0) {
 printf("\n");
 }
 }
 return 0;
}