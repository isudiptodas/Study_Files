import java.util.Scanner;

public class ifElse {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter your age : ");
        int age = sc.nextInt();

        if(age>=18 && age<=70)
            System.out.println("You can ride bike !");
        else if(age<18)
            System.out.println("Sorry you can't ride a bike, go home !");
        else
            System.out.println("Why are you still alive ?");
    }
}
