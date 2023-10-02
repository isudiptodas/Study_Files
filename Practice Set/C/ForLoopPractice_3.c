// Take an input from user and print the table

#include<stdio.h>
int main(){

int num;

printf("Enter the number : ");
scanf("%d", &num);

for(int i = 1; i <= 10; i++){
    printf("%d\n", num * i);
}

return 0;
}