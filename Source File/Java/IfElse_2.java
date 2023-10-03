import java.util.Scanner;

public class IfElse2 {
    public static void main (String[] args){

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter your marks to check grade : ");
        float marks = sc.nextFloat();

        if(marks >= 75 && marks <= 100){
            System.out.println("You got grade A ");
        }
        else if(marks >= 50 && marks <= 75){
            System.out.println("You got grade B ");
        }
        else if(marks >= 25 && marks <= 50){
            System.out.println("You got grade C ");
        }
        if(marks >= 0 && marks <= 25){
            System.out.println("You got grade D ");
        }
        else{
            System.out.println("Please enter valid marks.");
        }

    }
}
