import java.util.Scanner;

public class IfElse {
    public static void main (String[] args){

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number : ");
        int num = sc.nextInt();

        if(num > 18){
            System.out.println("Congrats! You are an adult now.");
        }
        else{
            System.out.println("Sorry! You are still underage");
        }

    }
}
