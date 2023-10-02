#include<stdio.h>
int main(){

int choice;
printf("1.Muffin  2.Cake  3.Fried Rice  4.Crispy Chicken \n");
printf("Enter your choice : \n");

scanf("%d", &choice);

switch(choice){
    case 1 :
    printf("Your choice is muffin");
    break;

    case 2 :
    printf("Your choice is cake");
    break;

    case 3 :
    printf("Your choice is Fried Rice");
    break;

    case 4 :
    printf("Your choice is Crispy Chicken");
    break;

    default :
    printf("Enter correct choice");

}

return 0;
}