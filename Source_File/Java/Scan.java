import java.util.Scanner;
public class Scan {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);         // Here System.in means telling the computer to read from the keyboard

        System.out.println("Taking input form user");
        System.out.print("Enter no. 1 : ");
        int a = sc.nextInt();
        System.out.print("Enter no. 2 : ");
        int b = sc.nextInt();

        int sum = a + b;
        System.out.println("The sum of number 1 and 2 is :" +sum);

    }
}



