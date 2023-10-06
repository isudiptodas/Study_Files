//  Write a C program to find whether a given year is a leap year or not.

#include<stdio.h>
int main(){

int year;

printf("Enter year to check : ");
scanf("%d", &year);

if((year % 4 == 0 && year % 100 == 0) || (year % 2 == 0)){
    printf("The year %d is a leap year\n", year);
}
else{
    printf("The year %d is not a leap year.\n", year);
} 

return 0;
}