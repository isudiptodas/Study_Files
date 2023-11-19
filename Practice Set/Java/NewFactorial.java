import java.util.*;
public class NewFactorial{

    public static int factorial(int n){
        if(n==0){
            return 1;
        }
        else{
            return n * factorial(n-1);
        }

    }
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a number to find factorial : ");
        int number = scanner.nextInt();
        scanner.close();
        
        if(number<=0){
            System.out.println("Enter a non negative number.");
        }
        else{
            int result = factorial(number);
            System.out.println("Factorial of " +number +" is " +factorial(number));
        }

    }
}