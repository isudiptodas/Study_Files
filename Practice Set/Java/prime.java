import java.util.Scanner;

public class prime {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number to check prime : ");
        int n = sc.nextInt();

        boolean isPrime = true;

        for(int i=2; i<n; i++){
            if(n%i==0){
                isPrime = false;
                break;
            }
        }

        if(isPrime)
            System.out.println(n+" is prime");
        else
            System.out.println(n+" is not prime");
    }
}
