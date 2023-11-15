public class Swap{
    public static void main(String args[]){
    
    int a = 10;
    int b = 15;

    System.out.println("The value of a is : "+a);
    System.out.println("The value of b is : "+b);
 
    int temp = b;
    b = a;
    a = temp;

    System.out.println("After swapping ");
    System.out.println("The value of a is : "+a);
    System.out.println("The value of b is : "+b);

    }
}