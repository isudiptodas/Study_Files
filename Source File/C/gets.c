#include<stdio.h>

int main(){
    char str[50];

    printf("Enter the name you want to print : ");
    gets(str);
    printf("%s", str);

    return 0;
}