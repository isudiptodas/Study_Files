/*
Write a C program to 
compute the sum of the first 10 natural numbers.
*/

#include<stdio.h>
int main(){

    int n, sum = 0;

    for(int i=1; i<=10; i++){
        sum = sum + i;
        printf("%d  ", i); 
    }
    printf("\nThe sum of natural numbers are : %d", sum);

return 0;
}