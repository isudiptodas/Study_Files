#include<stdio.h>
int main(){
 
 float celsius, fahrenheit;
 
 printf("Enter temperature in Centigrade: ");   // Prompt the user to enter temperature in Centigrade
 scanf("%f", &celsius);

 fahrenheit = (celsius * 9/5) + 32;    // Convert Centigrade to Fahrenheit

 printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
 
 return 0;

}