#include<stdio.h>
int main(){

int age;

printf("Enter your age : ");
scanf("%d", &age);

if(age >= 18 && age <= 100){
    printf("You're an adult now");
}
else if(age < 18){
    printf("You're still underage");
}
else{
    printf("Please enter valid age");
}

return 0;
}