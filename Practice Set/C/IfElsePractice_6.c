/*

Write a C program to find the largest of three numbers.
Test Data : 12 25 52

*/

#include<stdio.h>
int main(){

int num1, num2, num3;

printf("Enter the value of num1 : \n");
scanf("%d", &num1);

printf("Enter the value of num2 : \n");
scanf("%d", &num2);

printf("Enter the value of num3 : \n");
scanf("%d", &num3);

if((num1 > num2) && (num1 > num3)){
    printf("Num1 is greatest among three\n");
}
else if((num2 > num3) && (num2 > num1)){
    printf("Num2 is greatest among three\n");
}
else if((num3 > num2) && (num3 > num1)){
    printf("Num3 is greatest among three\n");
}

return 0;
}