// Write a C program to check whether a given number is even or odd.

#include<stdio.h>
int main(){

int num = 15;

if(num % 2 == 0){
    printf("It is an even number.\n");
}
else{
    printf("It is an odd number.\n");
}

return 0;
}