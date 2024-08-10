import java.util.Scanner;

public class numberPalindrome {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number to check palindrome : ");
        int num = sc.nextInt();

        int origNum = num;
        int rev = 0;

        while(num!=0){
            int digit = num%10;
            rev = rev*10+digit;
            num = num/10;
        }

        if(origNum==rev)
            System.out.println("Palindrome");
        else
            System.out.println("Not Palindrome");
    }
}
