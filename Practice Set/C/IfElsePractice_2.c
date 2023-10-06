// Write a C program to accept two integers and check whether they are equal or not.

#include<stdio.h>
int main(){

int num1, num2;

printf("Enter the value of num1 : ");
scanf("%d", &num1);

printf("Enter the value of num2 : ");
scanf("%d", &num2);

if(num1 == num2){
    printf("Num1 and num2 are equal.\n");
}
else{
    printf("Num1 and num2 are not equal.");
}

return 0;   
}