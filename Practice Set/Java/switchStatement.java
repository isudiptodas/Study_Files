import java.util.Scanner;

public class switchStatement {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Welcome to calculator");
        System.out.println("1.ADD   2.SUBTRACT   3.MULTIPLY    4.DIVIDE");
        System.out.print("Enter your choice : ");
        int choice = sc.nextInt();

        switch(choice){
            case 1:
                System.out.print("Enter two numbers to add : ");
                int add1 = sc.nextInt();
                int add2 = sc.nextInt();
                System.out.println(add1+add2);
                break;

            case 2:
                System.out.print("Enter two numbers to subtract : ");
                int sub1 = sc.nextInt();
                int sub2 = sc.nextInt();
                System.out.println(sub1-sub2);
                break;

            case 3:
                System.out.print("Enter two numbers to multiply : ");
                int mul1 = sc.nextInt();
                int mul2 = sc.nextInt();
                System.out.println(mul1*mul2);
                break;

            case 4:
                System.out.print("Enter two numbers to divide : ");
                float div1 = sc.nextInt();
                float div2 = sc.nextInt();
                System.out.println(div1/div2);
                break;

            default:
                System.out.println("Invalid Choice !");
        }

    }
}
