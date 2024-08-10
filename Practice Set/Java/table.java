import java.util.Scanner;

public class table {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number to view table : ");
        int num = sc.nextInt();

        System.out.println("Table of "+num);
        for(int i=1; i<=12; i++){
            System.out.println(num+" x "+i +" = " +num*i);
        }
    }
}
