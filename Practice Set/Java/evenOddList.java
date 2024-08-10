import java.util.Scanner;

public class evenOddList {

    static void even(int r){

        System.out.println("All even numbers upto "+r +" are : ");
        for(int i=1; i<=r; i++){
            if(i%2==0){
                System.out.print(i+" ");
            }
            else{
                continue;
            }
        }
    }

    static void odd(int r){
        System.out.println("All odd numbers upto "+r +" are : ");
        for(int i=1; i<=r; i++){
            if(i%2!=0){
                System.out.print(i+" ");
            }
            else{
                continue;
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a range : ");
        int range = sc.nextInt();
        System.out.println("1.ALL EVEN NUMBERS  2.ALL ODD NUMBERS");
        System.out.print("Enter your choice : ");
        int choice = sc.nextInt();

        switch(choice){
            case 1:
                even(range);
                break;

            case 2:
                odd(range);
                break;

            default:
                System.out.println("Invalid choice");
        }
    }
}
