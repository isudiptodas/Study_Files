import java.util.Scanner;

public class ForLoop3{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int i;
        System.out.print("Enter the number you want to print table of:");
        int num=sc.nextInt();

        for(i=1; i<=10; i++){
            System.out.println(num +" x " +i +" = " +num*i);
        }

    }
}