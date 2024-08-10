import java.util.Scanner;

public class stringPalindrome {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a string to check palindrome (case sensitive) : ");
        String s = sc.nextLine();

        boolean isPal = true;

        int st = 0, e = s.length()-1;
        while(st<e){
            if(s.charAt(st) != s.charAt(e)){
                isPal = false;
                break;
            }
            else{
                st++;
                e--;
            }
        }

        if(isPal)
            System.out.println("Palindrome");
        else
            System.out.println("Not palindrome");
    }
}
